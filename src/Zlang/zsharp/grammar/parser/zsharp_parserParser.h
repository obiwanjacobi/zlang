
// Generated from c:\Users\marc\Documents\MyProjects\Zalt\Zlang\src\Zlang\zsharp\grammar\zsharp_parser.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"




class  zsharp_parserParser : public antlr4::Parser {
public:
  enum {
    U8 = 1, U16 = 2, U24 = 3, U32 = 4, I8 = 5, I16 = 6, I24 = 7, I32 = 8, 
    F16 = 9, F32 = 10, STR = 11, BOOL = 12, BIT = 13, PTR = 14, MODULE = 15, 
    IMPORT = 16, EXPORT = 17, LOOP = 18, BREAK = 19, CONTINUE = 20, IF = 21, 
    ELSE = 22, RETURN = 23, IN = 24, SELF = 25, TRUE = 26, FALSE = 27, COMMENT = 28, 
    NUMBERbin = 29, NUMBERoct = 30, NUMBERdec = 31, NUMBERdec_prefix = 32, 
    NUMBERhex = 33, CHARACTER = 34, STRING = 35, UNUSED = 36, PLUS = 37, 
    MINUS_NEG = 38, MULT = 39, DIV = 40, MOD = 41, POW = 42, EQ_ASSIGN = 43, 
    NEQ = 44, GREAT_ANGLEclose = 45, SMALL_ANGLEopen = 46, GREQ = 47, SMEQ = 48, 
    AND = 49, OR = 50, NOT = 51, BIT_AND = 52, BIT_OR = 53, BIT_XOR = 54, 
    BIT_NOT = 55, BIT_SHL = 56, BIT_SHR = 57, BIT_ROLL = 58, BIT_ROLR = 59, 
    CONCAT = 60, SUBopen = 61, SUBclose = 62, PARENopen = 63, PARENclose = 64, 
    QUESTION = 65, COLON = 66, DOT = 67, RANGE = 68, SPREAD = 69, COMMA = 70, 
    META = 71, COMPTIME = 72, ERROR = 73, STR_QUOTE = 74, CHAR_QUOTE = 75, 
    COMMENTstart = 76, IDENTIFIERupper = 77, IDENTIFIERlower = 78, SP = 79, 
    TAB = 80, INDENT = 81, EOL = 82
  };

  enum {
    RuleFile = 0, RuleSource = 1, RuleCodeblock = 2, RuleModule_statement = 3, 
    RuleModule_name = 4, RuleStatement_module = 5, RuleStatement_import = 6, 
    RuleStatement_export = 7, RuleFlow_statement = 8, RuleStatement_return = 9, 
    RuleStatement_if = 10, RuleStatement_else = 11, RuleStatement_elseif = 12, 
    RuleStatement_break = 13, RuleStatement_continue = 14, RuleStatement_loop = 15, 
    RuleStatement_loop_infinite = 16, RuleStatement_loop_while = 17, RuleDefinition_top = 18, 
    RuleDefinition = 19, RuleExpression_value = 20, RuleComptime_expression_value = 21, 
    RuleExpression_arithmetic = 22, RuleArithmetic_operand = 23, RuleExpression_logic = 24, 
    RuleLogic_operand = 25, RuleExpression_comparison = 26, RuleComparison_operand = 27, 
    RuleExpression_bool = 28, RuleFunction_call = 29, RuleFunction_def = 30, 
    RuleFunction_def_export = 31, RuleFunction_parameter_list = 32, RuleFunction_parameter = 33, 
    RuleFunction_parameter_self = 34, RuleFunction_parameter_uselist = 35, 
    RuleFunction_param_use = 36, RuleVariable_ref = 37, RuleVariable_def_top = 38, 
    RuleVariable_def = 39, RuleVariable_def_typed = 40, RuleVariable_def_typed_init = 41, 
    RuleVariable_assign_auto = 42, RuleVariable_assign = 43, RuleStruct_def = 44, 
    RuleStruct_field_def_list = 45, RuleStruct_field_def = 46, RuleEnum_def = 47, 
    RuleEnum_option_def_listline = 48, RuleEnum_option_def_list = 49, RuleEnum_option_def = 50, 
    RuleEnum_option_value = 51, RuleEnum_base_type = 52, RuleType_def = 53, 
    RuleType_alias = 54, RuleType_ref_use = 55, RuleType_ref = 56, RuleType_name = 57, 
    RuleKnown_types = 58, RuleType_Bit = 59, RuleType_Ptr = 60, RuleType_param_number = 61, 
    RuleType_param_list = 62, RuleType_param_name_list = 63, RuleType_param_type_use = 64, 
    RuleType_param_type = 65, RuleIdentifier_type = 66, RuleIdentifier_var = 67, 
    RuleIdentifier_param = 68, RuleIdentifier_func = 69, RuleIdentifier_field = 70, 
    RuleIdentifier_enumoption = 71, RuleIdentifier_module = 72, RuleIdentifier_unused = 73, 
    RuleLiteral_bool = 74, RuleLiteral = 75, RuleNumber = 76, RuleNumber_bin = 77, 
    RuleNumber_oct = 78, RuleNumber_dec = 79, RuleNumber_hex = 80, RuleNumber_char = 81, 
    RuleOperator_arithmetic = 82, RuleOperator_arithmetic_unary = 83, RuleOperator_logic = 84, 
    RuleOperator_logic_unary = 85, RuleOperator_comparison = 86, RuleOperator_bits = 87, 
    RuleOperator_bits_unary = 88, RuleOperator_assignment = 89, RuleEmpty_line = 90, 
    RuleNewline = 91, RuleComment = 92, RuleString = 93, RuleCharacter = 94, 
    RuleIndent = 95
  };

  zsharp_parserParser(antlr4::TokenStream *input);
  ~zsharp_parserParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class FileContext;
  class SourceContext;
  class CodeblockContext;
  class Module_statementContext;
  class Module_nameContext;
  class Statement_moduleContext;
  class Statement_importContext;
  class Statement_exportContext;
  class Flow_statementContext;
  class Statement_returnContext;
  class Statement_ifContext;
  class Statement_elseContext;
  class Statement_elseifContext;
  class Statement_breakContext;
  class Statement_continueContext;
  class Statement_loopContext;
  class Statement_loop_infiniteContext;
  class Statement_loop_whileContext;
  class Definition_topContext;
  class DefinitionContext;
  class Expression_valueContext;
  class Comptime_expression_valueContext;
  class Expression_arithmeticContext;
  class Arithmetic_operandContext;
  class Expression_logicContext;
  class Logic_operandContext;
  class Expression_comparisonContext;
  class Comparison_operandContext;
  class Expression_boolContext;
  class Function_callContext;
  class Function_defContext;
  class Function_def_exportContext;
  class Function_parameter_listContext;
  class Function_parameterContext;
  class Function_parameter_selfContext;
  class Function_parameter_uselistContext;
  class Function_param_useContext;
  class Variable_refContext;
  class Variable_def_topContext;
  class Variable_defContext;
  class Variable_def_typedContext;
  class Variable_def_typed_initContext;
  class Variable_assign_autoContext;
  class Variable_assignContext;
  class Struct_defContext;
  class Struct_field_def_listContext;
  class Struct_field_defContext;
  class Enum_defContext;
  class Enum_option_def_listlineContext;
  class Enum_option_def_listContext;
  class Enum_option_defContext;
  class Enum_option_valueContext;
  class Enum_base_typeContext;
  class Type_defContext;
  class Type_aliasContext;
  class Type_ref_useContext;
  class Type_refContext;
  class Type_nameContext;
  class Known_typesContext;
  class Type_BitContext;
  class Type_PtrContext;
  class Type_param_numberContext;
  class Type_param_listContext;
  class Type_param_name_listContext;
  class Type_param_type_useContext;
  class Type_param_typeContext;
  class Identifier_typeContext;
  class Identifier_varContext;
  class Identifier_paramContext;
  class Identifier_funcContext;
  class Identifier_fieldContext;
  class Identifier_enumoptionContext;
  class Identifier_moduleContext;
  class Identifier_unusedContext;
  class Literal_boolContext;
  class LiteralContext;
  class NumberContext;
  class Number_binContext;
  class Number_octContext;
  class Number_decContext;
  class Number_hexContext;
  class Number_charContext;
  class Operator_arithmeticContext;
  class Operator_arithmetic_unaryContext;
  class Operator_logicContext;
  class Operator_logic_unaryContext;
  class Operator_comparisonContext;
  class Operator_bitsContext;
  class Operator_bits_unaryContext;
  class Operator_assignmentContext;
  class Empty_lineContext;
  class NewlineContext;
  class CommentContext;
  class StringContext;
  class CharacterContext;
  class IndentContext; 

  class  FileContext : public antlr4::ParserRuleContext {
  public:
    FileContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    std::vector<SourceContext *> source();
    SourceContext* source(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FileContext* file();

  class  SourceContext : public antlr4::ParserRuleContext {
  public:
    SourceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Module_statementContext *module_statement();
    Definition_topContext *definition_top();
    CommentContext *comment();
    Empty_lineContext *empty_line();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SourceContext* source();

  class  CodeblockContext : public antlr4::ParserRuleContext {
  public:
    CodeblockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Flow_statementContext *> flow_statement();
    Flow_statementContext* flow_statement(size_t i);
    std::vector<Variable_assignContext *> variable_assign();
    Variable_assignContext* variable_assign(size_t i);
    std::vector<Function_callContext *> function_call();
    Function_callContext* function_call(size_t i);
    std::vector<DefinitionContext *> definition();
    DefinitionContext* definition(size_t i);
    std::vector<CommentContext *> comment();
    CommentContext* comment(size_t i);
    std::vector<Empty_lineContext *> empty_line();
    Empty_lineContext* empty_line(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CodeblockContext* codeblock();

  class  Module_statementContext : public antlr4::ParserRuleContext {
  public:
    Module_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Statement_moduleContext *statement_module();
    Statement_importContext *statement_import();
    Statement_exportContext *statement_export();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Module_statementContext* module_statement();

  class  Module_nameContext : public antlr4::ParserRuleContext {
  public:
    Module_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Identifier_moduleContext *identifier_module();
    Module_nameContext *module_name();
    antlr4::tree::TerminalNode *DOT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Module_nameContext* module_name();
  Module_nameContext* module_name(int precedence);
  class  Statement_moduleContext : public antlr4::ParserRuleContext {
  public:
    Statement_moduleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MODULE();
    antlr4::tree::TerminalNode *SP();
    Module_nameContext *module_name();
    NewlineContext *newline();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Statement_moduleContext* statement_module();

  class  Statement_importContext : public antlr4::ParserRuleContext {
  public:
    Statement_importContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IMPORT();
    antlr4::tree::TerminalNode *SP();
    Module_nameContext *module_name();
    NewlineContext *newline();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Statement_importContext* statement_import();

  class  Statement_exportContext : public antlr4::ParserRuleContext {
  public:
    Statement_exportContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EXPORT();
    antlr4::tree::TerminalNode *SP();
    NewlineContext *newline();
    Identifier_funcContext *identifier_func();
    Identifier_typeContext *identifier_type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Statement_exportContext* statement_export();

  class  Flow_statementContext : public antlr4::ParserRuleContext {
  public:
    Flow_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Statement_ifContext *statement_if();
    Statement_elseContext *statement_else();
    Statement_elseifContext *statement_elseif();
    Statement_loopContext *statement_loop();
    Statement_returnContext *statement_return();
    Statement_breakContext *statement_break();
    Statement_continueContext *statement_continue();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Flow_statementContext* flow_statement();

  class  Statement_returnContext : public antlr4::ParserRuleContext {
  public:
    Statement_returnContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IndentContext *indent();
    antlr4::tree::TerminalNode *RETURN();
    NewlineContext *newline();
    antlr4::tree::TerminalNode *SP();
    Expression_valueContext *expression_value();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Statement_returnContext* statement_return();

  class  Statement_ifContext : public antlr4::ParserRuleContext {
  public:
    Statement_ifContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IndentContext *indent();
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *SP();
    Expression_logicContext *expression_logic();
    NewlineContext *newline();
    CodeblockContext *codeblock();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Statement_ifContext* statement_if();

  class  Statement_elseContext : public antlr4::ParserRuleContext {
  public:
    Statement_elseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IndentContext *indent();
    antlr4::tree::TerminalNode *ELSE();
    NewlineContext *newline();
    CodeblockContext *codeblock();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Statement_elseContext* statement_else();

  class  Statement_elseifContext : public antlr4::ParserRuleContext {
  public:
    Statement_elseifContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IndentContext *indent();
    antlr4::tree::TerminalNode *ELSE();
    std::vector<antlr4::tree::TerminalNode *> SP();
    antlr4::tree::TerminalNode* SP(size_t i);
    antlr4::tree::TerminalNode *IF();
    Expression_logicContext *expression_logic();
    NewlineContext *newline();
    CodeblockContext *codeblock();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Statement_elseifContext* statement_elseif();

  class  Statement_breakContext : public antlr4::ParserRuleContext {
  public:
    Statement_breakContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IndentContext *indent();
    antlr4::tree::TerminalNode *BREAK();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Statement_breakContext* statement_break();

  class  Statement_continueContext : public antlr4::ParserRuleContext {
  public:
    Statement_continueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IndentContext *indent();
    antlr4::tree::TerminalNode *CONTINUE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Statement_continueContext* statement_continue();

  class  Statement_loopContext : public antlr4::ParserRuleContext {
  public:
    Statement_loopContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IndentContext *indent();
    NewlineContext *newline();
    CodeblockContext *codeblock();
    Statement_loop_infiniteContext *statement_loop_infinite();
    Statement_loop_whileContext *statement_loop_while();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Statement_loopContext* statement_loop();

  class  Statement_loop_infiniteContext : public antlr4::ParserRuleContext {
  public:
    Statement_loop_infiniteContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LOOP();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Statement_loop_infiniteContext* statement_loop_infinite();

  class  Statement_loop_whileContext : public antlr4::ParserRuleContext {
  public:
    Statement_loop_whileContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LOOP();
    antlr4::tree::TerminalNode *SP();
    Expression_logicContext *expression_logic();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Statement_loop_whileContext* statement_loop_while();

  class  Definition_topContext : public antlr4::ParserRuleContext {
  public:
    Definition_topContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Function_def_exportContext *function_def_export();
    Function_defContext *function_def();
    Enum_defContext *enum_def();
    Struct_defContext *struct_def();
    Type_defContext *type_def();
    Type_aliasContext *type_alias();
    Variable_def_topContext *variable_def_top();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Definition_topContext* definition_top();

  class  DefinitionContext : public antlr4::ParserRuleContext {
  public:
    DefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Variable_defContext *variable_def();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DefinitionContext* definition();

  class  Expression_valueContext : public antlr4::ParserRuleContext {
  public:
    Expression_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NumberContext *number();
    StringContext *string();
    Expression_boolContext *expression_bool();
    Expression_arithmeticContext *expression_arithmetic();
    Expression_logicContext *expression_logic();
    Function_callContext *function_call();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Expression_valueContext* expression_value();

  class  Comptime_expression_valueContext : public antlr4::ParserRuleContext {
  public:
    Comptime_expression_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NumberContext *number();
    StringContext *string();
    Expression_boolContext *expression_bool();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Comptime_expression_valueContext* comptime_expression_value();

  class  Expression_arithmeticContext : public antlr4::ParserRuleContext {
  public:
    Expression_arithmeticContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PARENopen();
    std::vector<Expression_arithmeticContext *> expression_arithmetic();
    Expression_arithmeticContext* expression_arithmetic(size_t i);
    antlr4::tree::TerminalNode *PARENclose();
    Operator_arithmetic_unaryContext *operator_arithmetic_unary();
    Operator_bits_unaryContext *operator_bits_unary();
    Arithmetic_operandContext *arithmetic_operand();
    std::vector<antlr4::tree::TerminalNode *> SP();
    antlr4::tree::TerminalNode* SP(size_t i);
    Operator_arithmeticContext *operator_arithmetic();
    Operator_bitsContext *operator_bits();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Expression_arithmeticContext* expression_arithmetic();
  Expression_arithmeticContext* expression_arithmetic(int precedence);
  class  Arithmetic_operandContext : public antlr4::ParserRuleContext {
  public:
    Arithmetic_operandContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NumberContext *number();
    Variable_refContext *variable_ref();
    Function_callContext *function_call();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Arithmetic_operandContext* arithmetic_operand();

  class  Expression_logicContext : public antlr4::ParserRuleContext {
  public:
    Expression_logicContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PARENopen();
    std::vector<Expression_logicContext *> expression_logic();
    Expression_logicContext* expression_logic(size_t i);
    antlr4::tree::TerminalNode *PARENclose();
    Operator_logic_unaryContext *operator_logic_unary();
    std::vector<antlr4::tree::TerminalNode *> SP();
    antlr4::tree::TerminalNode* SP(size_t i);
    Logic_operandContext *logic_operand();
    Operator_logicContext *operator_logic();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Expression_logicContext* expression_logic();
  Expression_logicContext* expression_logic(int precedence);
  class  Logic_operandContext : public antlr4::ParserRuleContext {
  public:
    Logic_operandContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Expression_comparisonContext *expression_comparison();
    Expression_boolContext *expression_bool();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Logic_operandContext* logic_operand();

  class  Expression_comparisonContext : public antlr4::ParserRuleContext {
  public:
    Expression_comparisonContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PARENopen();
    std::vector<Expression_comparisonContext *> expression_comparison();
    Expression_comparisonContext* expression_comparison(size_t i);
    antlr4::tree::TerminalNode *PARENclose();
    Comparison_operandContext *comparison_operand();
    std::vector<antlr4::tree::TerminalNode *> SP();
    antlr4::tree::TerminalNode* SP(size_t i);
    Operator_comparisonContext *operator_comparison();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Expression_comparisonContext* expression_comparison();
  Expression_comparisonContext* expression_comparison(int precedence);
  class  Comparison_operandContext : public antlr4::ParserRuleContext {
  public:
    Comparison_operandContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Expression_arithmeticContext *expression_arithmetic();
    Function_callContext *function_call();
    Variable_refContext *variable_ref();
    LiteralContext *literal();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Comparison_operandContext* comparison_operand();

  class  Expression_boolContext : public antlr4::ParserRuleContext {
  public:
    Expression_boolContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Literal_boolContext *literal_bool();
    Variable_refContext *variable_ref();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Expression_boolContext* expression_bool();

  class  Function_callContext : public antlr4::ParserRuleContext {
  public:
    Function_callContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IndentContext *indent();
    Identifier_funcContext *identifier_func();
    antlr4::tree::TerminalNode *PARENopen();
    antlr4::tree::TerminalNode *PARENclose();
    NewlineContext *newline();
    Function_parameter_uselistContext *function_parameter_uselist();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Function_callContext* function_call();

  class  Function_defContext : public antlr4::ParserRuleContext {
  public:
    Function_defContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Identifier_funcContext *identifier_func();
    antlr4::tree::TerminalNode *PARENopen();
    antlr4::tree::TerminalNode *PARENclose();
    NewlineContext *newline();
    CodeblockContext *codeblock();
    Function_parameter_listContext *function_parameter_list();
    Type_ref_useContext *type_ref_use();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Function_defContext* function_def();

  class  Function_def_exportContext : public antlr4::ParserRuleContext {
  public:
    Function_def_exportContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EXPORT();
    antlr4::tree::TerminalNode *SP();
    Function_defContext *function_def();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Function_def_exportContext* function_def_export();

  class  Function_parameter_listContext : public antlr4::ParserRuleContext {
  public:
    Function_parameter_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Function_parameterContext *> function_parameter();
    Function_parameterContext* function_parameter(size_t i);
    Function_parameter_selfContext *function_parameter_self();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SP();
    antlr4::tree::TerminalNode* SP(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Function_parameter_listContext* function_parameter_list();

  class  Function_parameterContext : public antlr4::ParserRuleContext {
  public:
    Function_parameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Identifier_paramContext *identifier_param();
    Type_ref_useContext *type_ref_use();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Function_parameterContext* function_parameter();

  class  Function_parameter_selfContext : public antlr4::ParserRuleContext {
  public:
    Function_parameter_selfContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SELF();
    Type_ref_useContext *type_ref_use();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Function_parameter_selfContext* function_parameter_self();

  class  Function_parameter_uselistContext : public antlr4::ParserRuleContext {
  public:
    Function_parameter_uselistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Function_param_useContext *> function_param_use();
    Function_param_useContext* function_param_use(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SP();
    antlr4::tree::TerminalNode* SP(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Function_parameter_uselistContext* function_parameter_uselist();

  class  Function_param_useContext : public antlr4::ParserRuleContext {
  public:
    Function_param_useContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Expression_valueContext *> expression_value();
    Expression_valueContext* expression_value(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SP();
    antlr4::tree::TerminalNode* SP(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Function_param_useContext* function_param_use();

  class  Variable_refContext : public antlr4::ParserRuleContext {
  public:
    Variable_refContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Identifier_varContext *identifier_var();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Variable_refContext* variable_ref();

  class  Variable_def_topContext : public antlr4::ParserRuleContext {
  public:
    Variable_def_topContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NewlineContext *newline();
    Variable_def_typedContext *variable_def_typed();
    Variable_def_typed_initContext *variable_def_typed_init();
    Variable_assign_autoContext *variable_assign_auto();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Variable_def_topContext* variable_def_top();

  class  Variable_defContext : public antlr4::ParserRuleContext {
  public:
    Variable_defContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IndentContext *indent();
    NewlineContext *newline();
    Variable_def_typedContext *variable_def_typed();
    Variable_def_typed_initContext *variable_def_typed_init();
    Variable_assign_autoContext *variable_assign_auto();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Variable_defContext* variable_def();

  class  Variable_def_typedContext : public antlr4::ParserRuleContext {
  public:
    Variable_def_typedContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Identifier_varContext *identifier_var();
    Type_ref_useContext *type_ref_use();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Variable_def_typedContext* variable_def_typed();

  class  Variable_def_typed_initContext : public antlr4::ParserRuleContext {
  public:
    Variable_def_typed_initContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Identifier_varContext *identifier_var();
    Type_ref_useContext *type_ref_use();
    std::vector<antlr4::tree::TerminalNode *> SP();
    antlr4::tree::TerminalNode* SP(size_t i);
    antlr4::tree::TerminalNode *EQ_ASSIGN();
    Expression_valueContext *expression_value();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Variable_def_typed_initContext* variable_def_typed_init();

  class  Variable_assign_autoContext : public antlr4::ParserRuleContext {
  public:
    Variable_assign_autoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Identifier_varContext *identifier_var();
    std::vector<antlr4::tree::TerminalNode *> SP();
    antlr4::tree::TerminalNode* SP(size_t i);
    antlr4::tree::TerminalNode *EQ_ASSIGN();
    Expression_valueContext *expression_value();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Variable_assign_autoContext* variable_assign_auto();

  class  Variable_assignContext : public antlr4::ParserRuleContext {
  public:
    Variable_assignContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IndentContext *indent();
    Variable_assign_autoContext *variable_assign_auto();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Variable_assignContext* variable_assign();

  class  Struct_defContext : public antlr4::ParserRuleContext {
  public:
    Struct_defContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Identifier_typeContext *identifier_type();
    NewlineContext *newline();
    Struct_field_def_listContext *struct_field_def_list();
    Type_param_listContext *type_param_list();
    Type_ref_useContext *type_ref_use();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Struct_defContext* struct_def();

  class  Struct_field_def_listContext : public antlr4::ParserRuleContext {
  public:
    Struct_field_def_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Struct_field_defContext *> struct_field_def();
    Struct_field_defContext* struct_field_def(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Struct_field_def_listContext* struct_field_def_list();

  class  Struct_field_defContext : public antlr4::ParserRuleContext {
  public:
    Struct_field_defContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IndentContext *indent();
    Identifier_fieldContext *identifier_field();
    Type_ref_useContext *type_ref_use();
    NewlineContext *newline();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Struct_field_defContext* struct_field_def();

  class  Enum_defContext : public antlr4::ParserRuleContext {
  public:
    Enum_defContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Identifier_typeContext *identifier_type();
    NewlineContext *newline();
    Enum_option_def_listContext *enum_option_def_list();
    Enum_option_def_listlineContext *enum_option_def_listline();
    antlr4::tree::TerminalNode *COLON();
    antlr4::tree::TerminalNode *SP();
    Enum_base_typeContext *enum_base_type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Enum_defContext* enum_def();

  class  Enum_option_def_listlineContext : public antlr4::ParserRuleContext {
  public:
    Enum_option_def_listlineContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IndentContext *indent();
    std::vector<Identifier_enumoptionContext *> identifier_enumoption();
    Identifier_enumoptionContext* identifier_enumoption(size_t i);
    NewlineContext *newline();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SP();
    antlr4::tree::TerminalNode* SP(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Enum_option_def_listlineContext* enum_option_def_listline();

  class  Enum_option_def_listContext : public antlr4::ParserRuleContext {
  public:
    Enum_option_def_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Enum_option_defContext *> enum_option_def();
    Enum_option_defContext* enum_option_def(size_t i);
    std::vector<NewlineContext *> newline();
    NewlineContext* newline(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Enum_option_def_listContext* enum_option_def_list();

  class  Enum_option_defContext : public antlr4::ParserRuleContext {
  public:
    Enum_option_defContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IndentContext *indent();
    Identifier_enumoptionContext *identifier_enumoption();
    Enum_option_valueContext *enum_option_value();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Enum_option_defContext* enum_option_def();

  class  Enum_option_valueContext : public antlr4::ParserRuleContext {
  public:
    Enum_option_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> SP();
    antlr4::tree::TerminalNode* SP(size_t i);
    antlr4::tree::TerminalNode *EQ_ASSIGN();
    Comptime_expression_valueContext *comptime_expression_value();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Enum_option_valueContext* enum_option_value();

  class  Enum_base_typeContext : public antlr4::ParserRuleContext {
  public:
    Enum_base_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Type_BitContext *type_Bit();
    antlr4::tree::TerminalNode *STR();
    antlr4::tree::TerminalNode *F16();
    antlr4::tree::TerminalNode *F32();
    antlr4::tree::TerminalNode *I16();
    antlr4::tree::TerminalNode *I24();
    antlr4::tree::TerminalNode *I32();
    antlr4::tree::TerminalNode *I8();
    antlr4::tree::TerminalNode *U16();
    antlr4::tree::TerminalNode *U24();
    antlr4::tree::TerminalNode *U32();
    antlr4::tree::TerminalNode *U8();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Enum_base_typeContext* enum_base_type();

  class  Type_defContext : public antlr4::ParserRuleContext {
  public:
    Type_defContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Identifier_typeContext *identifier_type();
    Type_ref_useContext *type_ref_use();
    antlr4::tree::TerminalNode *SP();
    antlr4::tree::TerminalNode *UNUSED();
    NewlineContext *newline();
    Type_param_listContext *type_param_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Type_defContext* type_def();

  class  Type_aliasContext : public antlr4::ParserRuleContext {
  public:
    Type_aliasContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Identifier_typeContext *identifier_type();
    std::vector<antlr4::tree::TerminalNode *> SP();
    antlr4::tree::TerminalNode* SP(size_t i);
    antlr4::tree::TerminalNode *EQ_ASSIGN();
    Type_refContext *type_ref();
    NewlineContext *newline();
    Type_param_listContext *type_param_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Type_aliasContext* type_alias();

  class  Type_ref_useContext : public antlr4::ParserRuleContext {
  public:
    Type_ref_useContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COLON();
    antlr4::tree::TerminalNode *SP();
    Type_refContext *type_ref();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Type_ref_useContext* type_ref_use();

  class  Type_refContext : public antlr4::ParserRuleContext {
  public:
    Type_refContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Type_nameContext *type_name();
    antlr4::tree::TerminalNode *ERROR();
    antlr4::tree::TerminalNode *QUESTION();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Type_refContext* type_ref();

  class  Type_nameContext : public antlr4::ParserRuleContext {
  public:
    Type_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Known_typesContext *known_types();
    Identifier_typeContext *identifier_type();
    Type_param_listContext *type_param_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Type_nameContext* type_name();

  class  Known_typesContext : public antlr4::ParserRuleContext {
  public:
    Known_typesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Type_BitContext *type_Bit();
    Type_PtrContext *type_Ptr();
    antlr4::tree::TerminalNode *BOOL();
    antlr4::tree::TerminalNode *STR();
    antlr4::tree::TerminalNode *F16();
    antlr4::tree::TerminalNode *F32();
    antlr4::tree::TerminalNode *I16();
    antlr4::tree::TerminalNode *I24();
    antlr4::tree::TerminalNode *I32();
    antlr4::tree::TerminalNode *I8();
    antlr4::tree::TerminalNode *U16();
    antlr4::tree::TerminalNode *U24();
    antlr4::tree::TerminalNode *U32();
    antlr4::tree::TerminalNode *U8();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Known_typesContext* known_types();

  class  Type_BitContext : public antlr4::ParserRuleContext {
  public:
    Type_BitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BIT();
    Type_param_numberContext *type_param_number();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Type_BitContext* type_Bit();

  class  Type_PtrContext : public antlr4::ParserRuleContext {
  public:
    Type_PtrContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PTR();
    Type_param_type_useContext *type_param_type_use();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Type_PtrContext* type_Ptr();

  class  Type_param_numberContext : public antlr4::ParserRuleContext {
  public:
    Type_param_numberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SMALL_ANGLEopen();
    NumberContext *number();
    antlr4::tree::TerminalNode *GREAT_ANGLEclose();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Type_param_numberContext* type_param_number();

  class  Type_param_listContext : public antlr4::ParserRuleContext {
  public:
    Type_param_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SMALL_ANGLEopen();
    Type_param_name_listContext *type_param_name_list();
    antlr4::tree::TerminalNode *GREAT_ANGLEclose();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Type_param_listContext* type_param_list();

  class  Type_param_name_listContext : public antlr4::ParserRuleContext {
  public:
    Type_param_name_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Type_param_typeContext *> type_param_type();
    Type_param_typeContext* type_param_type(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SP();
    antlr4::tree::TerminalNode* SP(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Type_param_name_listContext* type_param_name_list();

  class  Type_param_type_useContext : public antlr4::ParserRuleContext {
  public:
    Type_param_type_useContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SMALL_ANGLEopen();
    Type_param_typeContext *type_param_type();
    antlr4::tree::TerminalNode *GREAT_ANGLEclose();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Type_param_type_useContext* type_param_type_use();

  class  Type_param_typeContext : public antlr4::ParserRuleContext {
  public:
    Type_param_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Type_nameContext *type_name();
    NumberContext *number();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Type_param_typeContext* type_param_type();

  class  Identifier_typeContext : public antlr4::ParserRuleContext {
  public:
    Identifier_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIERupper();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Identifier_typeContext* identifier_type();

  class  Identifier_varContext : public antlr4::ParserRuleContext {
  public:
    Identifier_varContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIERlower();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Identifier_varContext* identifier_var();

  class  Identifier_paramContext : public antlr4::ParserRuleContext {
  public:
    Identifier_paramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIERlower();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Identifier_paramContext* identifier_param();

  class  Identifier_funcContext : public antlr4::ParserRuleContext {
  public:
    Identifier_funcContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIERupper();
    antlr4::tree::TerminalNode *IDENTIFIERlower();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Identifier_funcContext* identifier_func();

  class  Identifier_fieldContext : public antlr4::ParserRuleContext {
  public:
    Identifier_fieldContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIERupper();
    antlr4::tree::TerminalNode *IDENTIFIERlower();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Identifier_fieldContext* identifier_field();

  class  Identifier_enumoptionContext : public antlr4::ParserRuleContext {
  public:
    Identifier_enumoptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIERupper();
    antlr4::tree::TerminalNode *IDENTIFIERlower();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Identifier_enumoptionContext* identifier_enumoption();

  class  Identifier_moduleContext : public antlr4::ParserRuleContext {
  public:
    Identifier_moduleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIERupper();
    antlr4::tree::TerminalNode *IDENTIFIERlower();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Identifier_moduleContext* identifier_module();

  class  Identifier_unusedContext : public antlr4::ParserRuleContext {
  public:
    Identifier_unusedContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UNUSED();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Identifier_unusedContext* identifier_unused();

  class  Literal_boolContext : public antlr4::ParserRuleContext {
  public:
    Literal_boolContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TRUE();
    antlr4::tree::TerminalNode *FALSE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Literal_boolContext* literal_bool();

  class  LiteralContext : public antlr4::ParserRuleContext {
  public:
    LiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NumberContext *number();
    StringContext *string();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LiteralContext* literal();

  class  NumberContext : public antlr4::ParserRuleContext {
  public:
    NumberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Number_binContext *number_bin();
    Number_octContext *number_oct();
    Number_decContext *number_dec();
    Number_hexContext *number_hex();
    Number_charContext *number_char();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NumberContext* number();

  class  Number_binContext : public antlr4::ParserRuleContext {
  public:
    Number_binContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NUMBERbin();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Number_binContext* number_bin();

  class  Number_octContext : public antlr4::ParserRuleContext {
  public:
    Number_octContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NUMBERoct();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Number_octContext* number_oct();

  class  Number_decContext : public antlr4::ParserRuleContext {
  public:
    Number_decContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NUMBERdec();
    antlr4::tree::TerminalNode *NUMBERdec_prefix();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Number_decContext* number_dec();

  class  Number_hexContext : public antlr4::ParserRuleContext {
  public:
    Number_hexContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NUMBERhex();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Number_hexContext* number_hex();

  class  Number_charContext : public antlr4::ParserRuleContext {
  public:
    Number_charContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CharacterContext *character();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Number_charContext* number_char();

  class  Operator_arithmeticContext : public antlr4::ParserRuleContext {
  public:
    Operator_arithmeticContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *MINUS_NEG();
    antlr4::tree::TerminalNode *DIV();
    antlr4::tree::TerminalNode *MOD();
    antlr4::tree::TerminalNode *MULT();
    antlr4::tree::TerminalNode *POW();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Operator_arithmeticContext* operator_arithmetic();

  class  Operator_arithmetic_unaryContext : public antlr4::ParserRuleContext {
  public:
    Operator_arithmetic_unaryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MINUS_NEG();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Operator_arithmetic_unaryContext* operator_arithmetic_unary();

  class  Operator_logicContext : public antlr4::ParserRuleContext {
  public:
    Operator_logicContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *OR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Operator_logicContext* operator_logic();

  class  Operator_logic_unaryContext : public antlr4::ParserRuleContext {
  public:
    Operator_logic_unaryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NOT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Operator_logic_unaryContext* operator_logic_unary();

  class  Operator_comparisonContext : public antlr4::ParserRuleContext {
  public:
    Operator_comparisonContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EQ_ASSIGN();
    antlr4::tree::TerminalNode *NEQ();
    antlr4::tree::TerminalNode *GREAT_ANGLEclose();
    antlr4::tree::TerminalNode *SMALL_ANGLEopen();
    antlr4::tree::TerminalNode *GREQ();
    antlr4::tree::TerminalNode *SMEQ();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Operator_comparisonContext* operator_comparison();

  class  Operator_bitsContext : public antlr4::ParserRuleContext {
  public:
    Operator_bitsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BIT_AND();
    antlr4::tree::TerminalNode *BIT_OR();
    antlr4::tree::TerminalNode *BIT_XOR();
    antlr4::tree::TerminalNode *BIT_SHL();
    antlr4::tree::TerminalNode *BIT_SHR();
    antlr4::tree::TerminalNode *BIT_ROLL();
    antlr4::tree::TerminalNode *BIT_ROLR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Operator_bitsContext* operator_bits();

  class  Operator_bits_unaryContext : public antlr4::ParserRuleContext {
  public:
    Operator_bits_unaryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BIT_NOT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Operator_bits_unaryContext* operator_bits_unary();

  class  Operator_assignmentContext : public antlr4::ParserRuleContext {
  public:
    Operator_assignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EQ_ASSIGN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Operator_assignmentContext* operator_assignment();

  class  Empty_lineContext : public antlr4::ParserRuleContext {
  public:
    Empty_lineContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INDENT();
    std::vector<antlr4::tree::TerminalNode *> EOL();
    antlr4::tree::TerminalNode* EOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Empty_lineContext* empty_line();

  class  NewlineContext : public antlr4::ParserRuleContext {
  public:
    NewlineContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOL();
    antlr4::tree::TerminalNode *INDENT();
    antlr4::tree::TerminalNode *COMMENT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NewlineContext* newline();

  class  CommentContext : public antlr4::ParserRuleContext {
  public:
    CommentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COMMENT();
    antlr4::tree::TerminalNode *EOL();
    antlr4::tree::TerminalNode *INDENT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CommentContext* comment();

  class  StringContext : public antlr4::ParserRuleContext {
  public:
    StringContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRING();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StringContext* string();

  class  CharacterContext : public antlr4::ParserRuleContext {
  public:
    CharacterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CHARACTER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CharacterContext* character();

  class  IndentContext : public antlr4::ParserRuleContext {
  public:
    IndentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INDENT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IndentContext* indent();


  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;
  bool module_nameSempred(Module_nameContext *_localctx, size_t predicateIndex);
  bool expression_arithmeticSempred(Expression_arithmeticContext *_localctx, size_t predicateIndex);
  bool expression_logicSempred(Expression_logicContext *_localctx, size_t predicateIndex);
  bool expression_comparisonSempred(Expression_comparisonContext *_localctx, size_t predicateIndex);

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

