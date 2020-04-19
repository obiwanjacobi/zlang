#include "AstExpressionOperand.h"
#include "AstExpression.h"
#include "AstVariable.h"
#include "AstVisitor.h"

void AstExpressionOperand::Accept(AstVisitor* visitor) {
    visitor->VisitExpressionOperand(this);
}
void AstExpressionOperand::VisitChildren(AstVisitor* visitor) {
    if (_expression) {
        _expression->Accept(visitor);
    }
    if (_numeric) {
        _numeric->Accept(visitor);
    }
    if (_variable) {
        _variable->Accept(visitor);
    }
}

antlr4::ParserRuleContext* AstExpressionOperand::getContext() const
{
    if (_litBoolCtx) return _litBoolCtx;
    if (_callCtx) return _callCtx;
    return nullptr;
}

const AstNode* AstExpressionOperand::getParent() const
{
    if (_expression) {
        return _expression->getParent();
    }
    if (_numeric) {
        return _numeric->getParent();
    }
    if (_variable) {
        return _variable->getParent();
    }
    return nullptr;
}

void AstExpressionOperand::setParent(AstNode* parent)
{
    if (_expression) {
        _expression->setParent(parent);
    }
    if (_numeric) {
        _numeric->setParent(parent);
    }
    if (_variable) {
        _variable->setParent(parent);
    }
}
