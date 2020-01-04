#pragma once

#include "AstNode.h"
#include "AstNumeric.h"
#include "AstExpressionOperand.h"
#include "AstExpressionOperator.h"
#include "../grammar/parser/zsharp_parserParser.h"
#include <memory>

class AstExpression : public AstNode
{
    friend class AstExpressionBuilder;

public:
    AstExpression(zsharp_parserParser::Expression_arithmeticContext* ctx)
        : AstNode(AstNodeType::Expression), 
        _arithmeticCtx(ctx), _operator(AstExpressionOperator::NotSet)
    {}

    AstExpressionOperator getOperator() const { return _operator; }
    bool isOperator(AstExpressionOperator op) const { return ((int)_operator & (int)op) > 0; }
    uint32_t getPrecedence() const { return ((int)_operator & (int)AstExpressionOperator::MaskPrecedence) >> 4; }

    std::shared_ptr<AstExpressionOperand> getLHS() const { return _lhs; }
    std::shared_ptr<AstExpressionOperand> getRHS() const { return _rhs; }

protected:
    bool Add(std::shared_ptr<AstExpressionOperand> child);
    bool Add(std::shared_ptr<AstExpression> child) { return Add(std::make_shared<AstExpressionOperand > (child)); }
    bool Add(std::shared_ptr<AstNumeric> child) { return Add(std::make_shared<AstExpressionOperand >(child)); }
    void setOperator(AstExpressionOperator op) { _operator = op; }

private:
    std::shared_ptr<AstExpressionOperand> _lhs;
    std::shared_ptr<AstExpressionOperand> _rhs;
    AstExpressionOperator _operator;
    zsharp_parserParser::Expression_arithmeticContext* _arithmeticCtx;
};
