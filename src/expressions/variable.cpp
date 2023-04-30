#include "variable.h"

#include "../function.h"

std::unique_ptr<VarType> ASTExpressionVariable::ReturnType(ASTFunction& func)
{
    return func.GetVariableType(var)->Copy(); // We just need to resolve the variable and copy its type.
}

bool ASTExpressionVariable::IsLValue(ASTFunction& func)
{
    auto retType = ReturnType(func);
    return !dynamic_cast<VarTypeFunction*>(retType.get());
    // If the variable is a function type, then we shouldn't load from it, it's just a raw function address.
    // Otherwise, we know that the variable is really just a pointer to some memory allocated somewhere and is thus an L-Value.
}

llvm::Value* ASTExpressionVariable::Compile(llvm::IRBuilder<>& builder, ASTFunction& func)
{
    return func.GetVariableValue(var); // Simply just return the value from the scope table.
}

std::string ASTExpressionVariable::ToString(const std::string& prefix)
{
    return var + "\n";
}

bool ASTExpressionVariable::RemoveDead(std::vector<std::string>& live_list, bool lval)
{
    // If lval, then remove var from live_list, if not present, statement is dead
    if(lval)
    {
        bool missing = true;
        for (auto it = live_list.begin(); it != live_list.end();) {
            if(*it == var)
            {
                it = live_list.erase(it);
                missing = false;
            } else {
                ++it;
            }
        }
        return missing;
    }
    // If rval, then add to live_list if not already present
    // If a lval was removed, rvals are processed second so a variable present on both sides will remain alive
    else
    {
        bool missing = true;
        for (auto it = live_list.begin(); it != live_list.end(); ++it) {
            if(*it == var)
            {
                missing = false;
            }
        }
        if(missing) {
            live_list.push_back(var);
        }
    }
}