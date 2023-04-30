#include "for.h"

#include "../function.h"

std::unique_ptr<VarType> ASTStatementFor::StatementReturnType(ASTFunction& func)
{

    // It is completely possible for a for's condition to never be true, so even if does return something it's not confirmed.
    return nullptr;

}

void ASTStatementFor::Compile(llvm::Module& mod, llvm::IRBuilder<>& builder, ASTFunction& func)
{

    /*

        A for loop can be desugared to basic blocks. Take the following example:

            for (init; condition; inc)
            {
                doThing();
            }

        This is really just another way of saying:

            forEntry:
                init
            forTest:
                if (condition) goto forLoopBody else goto forLoopEnd;

            forLoopBody:
                statements;
                inc;
                goto forLoop;

            forLoopEnd:
                ...

    */

    // Create the basic blocks.
    auto* funcVal = (llvm::Function*)func.GetVariableValue(func.name);
    auto forInit = llvm::BasicBlock::Create(builder.getContext(), "forInit", funcVal);
    auto forLoop = llvm::BasicBlock::Create(builder.getContext(), "forLoop", funcVal);
    auto forLoopBody = llvm::BasicBlock::Create(builder.getContext(), "forLoopBody", funcVal);
    auto forLoopEnd = llvm::BasicBlock::Create(builder.getContext(), "forLoopEnd", funcVal);

    builder.CreateBr(forInit);
    builder.SetInsertPoint(forInit);
    initial->Compile(mod, builder, func);
    builder.CreateBr(forLoop);

    // Compile condition and jump to the right block.
    builder.SetInsertPoint(forLoop);
    auto conditionVal = condition->CompileRValue(builder, func);
    builder.CreateCondBr(conditionVal, forLoopBody, forLoopEnd);

    // Compile the body. Note that we need to not create a jump if there is a return.
    builder.SetInsertPoint(forLoopBody);
    thenStatement->Compile(mod, builder, func);
    increment->Compile(mod, builder, func);
    if (!thenStatement->StatementReturnType(func)) builder.CreateBr(forLoop);

    // Continue from the end of the created for loop.
    builder.SetInsertPoint(forLoopEnd);

}

std::string ASTStatementFor::ToString(const std::string& prefix)
{
    std::string output = "for\n";
    output += prefix + "├──" + condition->ToString(prefix + "│  ");
    output += prefix + "└──" + thenStatement->ToString(prefix + "   ");
    return output;
}