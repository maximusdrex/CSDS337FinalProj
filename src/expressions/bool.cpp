#include "bool.h"

std::unique_ptr<VarType> ASTExpressionBool::ReturnType(ASTFunction& func)
{
    return VarTypeSimple::BoolType.Copy(); // Of course we are returning an int, what else would it be.
}

bool ASTExpressionBool::IsLValue(ASTFunction& func)
{
    return false; // It's a constant, of course it's not an L-Value.
}

llvm::Value* ASTExpressionBool::Compile(llvm::IRBuilder<>& builder, ASTFunction& func)
{
    if(value) {
        return llvm::ConstantInt::get(VarTypeSimple::BoolType.GetLLVMType(builder.getContext()), 1); // Simply just create an int constant to return.
    } else {
        return llvm::ConstantInt::get(VarTypeSimple::BoolType.GetLLVMType(builder.getContext()), 0); // Simply just create an int constant to return.
    }
}

std::string ASTExpressionBool::ToString(const std::string& prefix)
{
    return std::to_string(value) + "\n";
}


bool ASTExpressionBool::RemoveDead(std::vector<std::string>& live_list, bool lval) 
{
    return false;
}