#pragma once

#include <antlr4-runtime.h>
#include <memory>

class AstError
{
public:
    AstError(antlr4::ParserRuleContext* ctx)
        : _ctx(ctx)
    {}

    antlr4::ParserRuleContext* getContext() const { return _ctx; }

    const std::string& getText() const { return _text; }
    void setText(const std::string text) { _text = text; }

    static const char* EmptyCodeBlock;
    static const char* IndentationMismatch;
    static const char* IndentationInvalid;

private:
    antlr4::ParserRuleContext* _ctx;
    std::string _text;
};

