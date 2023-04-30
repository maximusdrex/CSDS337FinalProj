#include "negative.h"

std::unique_ptr<VarType> ASTExpressionNegation::ReturnType(ASTFunction& func)
{
    auto r1 = a1->ReturnType(func);

    if(r1->Equals(&VarTypeSimple::FloatType))
    {
       returnType = &VarTypeSimple::FloatType;
    } else if(r1->Equals(&VarTypeSimple::IntType)) 
    {
       returnType = &VarTypeSimple::IntType;
    }
    else  {
        throw std::runtime_error("ERROR: Can not negate non int or float types");
    }

    return std::make_unique<VarTypeSimple>(*returnType); // Make a copy of our return type :}
}

bool ASTExpressionNegation::IsLValue(ASTFunction& func)
{
    return false; // If we are multiplying values together, they must be usable R-Values. Multiplying these together just results in an R-Value.
}

llvm::Value* ASTExpressionNegation::Compile(llvm::IRBuilder<>& builder, ASTFunction& func)
{
    // Compile the values as needed. Remember, we can only do operations on R-Values.
    auto retType = ReturnType(func);
    if (retType->Equals(&VarTypeSimple::IntType)) // Do standard addition on integer operands since we return an int.
        return builder.CreateNeg(a1->CompileRValue(builder, func));
    else if (retType->Equals(&VarTypeSimple::FloatType)) // Do addition on floating point operands since we return a float.
        return builder.CreateFNeg(a1->CompileRValue(builder, func));
    else // Call to return type should make this impossible, but best to keep it here just in case of a bug.
        throw std::runtime_error("ERROR: Can not perform negation! Is the input either int or float?");
}


std::string ASTExpressionNegation::ToString(const std::string& prefix)
{
    std::string ret = "(-)\n";
    ret += prefix + "└──" + a1->ToString(prefix + "   ");
    return ret;
}