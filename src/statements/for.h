#pragma once

#include "../expression.h"
#include "../statement.h"

// For a while loop statement.
class ASTStatementFor : public ASTStatement
{

    // Condition to check.
    std::unique_ptr<ASTExpression> condition;

    // Then statement to execute.
    std::unique_ptr<ASTStatement> thenStatement;
    std::unique_ptr<ASTStatement> initial;
    std::unique_ptr<ASTStatement> increment;

public:

    // Create a new while statement.
    // condition: Condition to check.
    // thenStatement: Statement to execute while the condition is true.
    ASTStatementFor(std::unique_ptr<ASTStatement> initial, std::unique_ptr<ASTExpression> condition, std::unique_ptr<ASTStatement> increment, std::unique_ptr<ASTStatement> thenStatement) : initial(std::move(initial)), condition(std::move(condition)), increment(std::move(increment)), thenStatement(std::move(thenStatement)) {}

    // Create a new if statement.
    // condition: Condition to check.
    // thenStatement: Statement to execute while the condition is true.
    static auto Create(std::unique_ptr<ASTStatement> initial, std::unique_ptr<ASTExpression> condition, std::unique_ptr<ASTStatement> increment, std::unique_ptr<ASTStatement> thenStatement)
    {
        return std::make_unique<ASTStatementFor>(std::move(initial), std::move(condition), std::move(increment), std::move(thenStatement));
    }

    // Virtual functions. See base class for details.
    virtual std::unique_ptr<VarType> StatementReturnType(ASTFunction& func) override;
    virtual void Compile(llvm::Module& mod, llvm::IRBuilder<>& builder, ASTFunction& func) override;
    virtual std::string ToString(const std::string& prefix) override;

};