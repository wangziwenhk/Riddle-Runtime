
// Generated from C:/Users/wangz/CLionProjects/Riddle/RiddleParser.g4 by ANTLR 4.13.1


#include "RiddleParserListener.h"
#include "RiddleParserVisitor.h"

#include "RiddleParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct RiddleParserStaticData final {
  RiddleParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  RiddleParserStaticData(const RiddleParserStaticData&) = delete;
  RiddleParserStaticData(RiddleParserStaticData&&) = delete;
  RiddleParserStaticData& operator=(const RiddleParserStaticData&) = delete;
  RiddleParserStaticData& operator=(RiddleParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag riddleparserParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
RiddleParserStaticData *riddleparserParserStaticData = nullptr;

void riddleparserParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (riddleparserParserStaticData != nullptr) {
    return;
  }
#else
  assert(riddleparserParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<RiddleParserStaticData>(
    std::vector<std::string>{
      "program", "statment", "primaryExpression", "idExpression", "identifierSet", 
      "funcDefintion", "funcExpression", "funcBody", "oneValDeclaration", 
      "oneValDefintion", "valDefintion", "assignmentExpression", "theTypeName", 
      "typeSpecifier", "className", "theOperator", "literal", "intLiteral", 
      "charLiteral", "floatLiteral", "strLiteral", "boolLiteral"
    },
    std::vector<std::string>{
      "", "'import'", "'true'", "'false'", "'for'", "'while'", "'break'", 
      "'continue'", "'class'", "'const'", "'if'", "'elif'", "'else'", "'try'", 
      "'export'", "'throw'", "'new'", "'private'", "'protected'", "'public'", 
      "'return'", "'static'", "'this'", "'delete'", "'int'", "'string'", 
      "'float'", "'char'", "'void'", "'NULL'", "'any'", "'bool'", "'('", 
      "')'", "'['", "']'", "'{'", "'}'", "'+'", "'-'", "'*'", "'/'", "'%'", 
      "'^'", "'&'", "'|'", "'~'", "", "'='", "'<'", "'>'", "'+='", "'-='", 
      "'*='", "'/='", "'%='", "'^='", "'&='", "'|='", "'<<='", "'>>='", 
      "'=='", "'!='", "'<='", "'>='", "", "", "'++'", "'--'", "','", "'->'", 
      "'\\u003F'", "':'", "';'", "'.'"
    },
    std::vector<std::string>{
      "", "Import_", "True_", "False_", "For", "While", "Break", "Continue", 
      "Class", "Const", "If", "Elif", "Else", "Try", "Export", "Throw", 
      "New", "Private", "Protected", "Public", "Return", "Static", "This", 
      "Delete", "Int", "String", "Float", "Char", "Void", "Null", "Any", 
      "Bool", "LeftParen", "RightParen", "LeftBracket", "RightBracket", 
      "LeftBrace", "RightBrace", "Plus", "Minus", "Star", "Div", "Mod", 
      "Caret", "And", "Or", "Tilde", "Not", "Assign", "Less", "Greater", 
      "PlusAssign", "MinusAssign", "StarAssign", "DivAssign", "ModAssign", 
      "XorAssign", "AndAssign", "OrAssign", "LeftShiftAssign", "RightShiftAssign", 
      "Equal", "NotEqual", "LessEqual", "GreaterEqual", "AndAnd", "OrOr", 
      "PlusPlus", "MinusMinus", "Comma", "Arrow", "Question", "Colon", "Semi", 
      "Dot", "IntegerLiteral", "FloatingLiteral", "StringLiteral", "CharacterLiteral", 
      "Identifier", "DecimalLiteral", "OctalLiteral", "HexadecimalLiteral", 
      "BinaryLiteral", "Whitespace", "Newline", "BlockComment", "LineComment"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,87,240,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,1,0,5,0,46,8,0,10,0,12,0,49,9,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
  	1,1,1,3,1,61,8,1,1,2,1,2,1,2,1,2,3,2,67,8,2,1,3,1,3,1,3,4,3,72,8,3,11,
  	3,12,3,73,1,3,3,3,77,8,3,1,4,1,4,1,4,4,4,82,8,4,11,4,12,4,83,1,4,3,4,
  	87,8,4,1,5,1,5,1,5,1,5,1,5,1,5,5,5,95,8,5,10,5,12,5,98,9,5,1,5,1,5,1,
  	5,1,5,1,5,1,5,1,5,3,5,107,8,5,1,5,1,5,1,5,1,6,1,6,1,6,1,6,1,6,5,6,117,
  	8,6,10,6,12,6,120,9,6,3,6,122,8,6,1,6,1,6,1,7,1,7,5,7,128,8,7,10,7,12,
  	7,131,9,7,1,7,1,7,1,8,1,8,1,8,1,9,1,9,1,9,1,9,1,9,1,10,1,10,1,10,1,10,
  	1,10,3,10,148,8,10,1,10,1,10,1,10,1,10,1,10,3,10,155,8,10,5,10,157,8,
  	10,10,10,12,10,160,9,10,1,11,1,11,1,11,1,11,1,12,1,12,3,12,168,8,12,1,
  	13,1,13,1,14,1,14,1,15,1,15,1,15,3,15,177,8,15,1,15,1,15,1,15,3,15,182,
  	8,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,
  	1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,
  	1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,3,15,221,8,15,1,16,
  	1,16,1,16,1,16,1,16,3,16,228,8,16,1,17,1,17,1,18,1,18,1,19,1,19,1,20,
  	1,20,1,21,1,21,1,21,0,0,22,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,
  	32,34,36,38,40,42,0,2,2,0,24,28,30,30,1,0,2,3,280,0,47,1,0,0,0,2,60,1,
  	0,0,0,4,66,1,0,0,0,6,76,1,0,0,0,8,86,1,0,0,0,10,88,1,0,0,0,12,111,1,0,
  	0,0,14,125,1,0,0,0,16,134,1,0,0,0,18,137,1,0,0,0,20,142,1,0,0,0,22,161,
  	1,0,0,0,24,167,1,0,0,0,26,169,1,0,0,0,28,171,1,0,0,0,30,220,1,0,0,0,32,
  	227,1,0,0,0,34,229,1,0,0,0,36,231,1,0,0,0,38,233,1,0,0,0,40,235,1,0,0,
  	0,42,237,1,0,0,0,44,46,3,2,1,0,45,44,1,0,0,0,46,49,1,0,0,0,47,45,1,0,
  	0,0,47,48,1,0,0,0,48,1,1,0,0,0,49,47,1,0,0,0,50,61,3,10,5,0,51,52,3,16,
  	8,0,52,53,5,73,0,0,53,61,1,0,0,0,54,55,3,20,10,0,55,56,5,73,0,0,56,61,
  	1,0,0,0,57,58,3,22,11,0,58,59,5,73,0,0,59,61,1,0,0,0,60,50,1,0,0,0,60,
  	51,1,0,0,0,60,54,1,0,0,0,60,57,1,0,0,0,61,3,1,0,0,0,62,67,3,32,16,0,63,
  	67,3,6,3,0,64,67,3,22,11,0,65,67,3,12,6,0,66,62,1,0,0,0,66,63,1,0,0,0,
  	66,64,1,0,0,0,66,65,1,0,0,0,67,5,1,0,0,0,68,77,5,79,0,0,69,70,5,79,0,
  	0,70,72,5,74,0,0,71,69,1,0,0,0,72,73,1,0,0,0,73,71,1,0,0,0,73,74,1,0,
  	0,0,74,75,1,0,0,0,75,77,5,79,0,0,76,68,1,0,0,0,76,71,1,0,0,0,77,7,1,0,
  	0,0,78,87,5,79,0,0,79,80,5,79,0,0,80,82,5,74,0,0,81,79,1,0,0,0,82,83,
  	1,0,0,0,83,81,1,0,0,0,83,84,1,0,0,0,84,85,1,0,0,0,85,87,5,79,0,0,86,78,
  	1,0,0,0,86,81,1,0,0,0,87,9,1,0,0,0,88,89,3,24,12,0,89,90,5,79,0,0,90,
  	106,5,32,0,0,91,96,3,16,8,0,92,93,5,69,0,0,93,95,3,16,8,0,94,92,1,0,0,
  	0,95,98,1,0,0,0,96,94,1,0,0,0,96,97,1,0,0,0,97,99,1,0,0,0,98,96,1,0,0,
  	0,99,100,5,69,0,0,100,101,3,18,9,0,101,107,1,0,0,0,102,103,3,18,9,0,103,
  	104,5,69,0,0,104,105,3,18,9,0,105,107,1,0,0,0,106,91,1,0,0,0,106,102,
  	1,0,0,0,106,107,1,0,0,0,107,108,1,0,0,0,108,109,5,33,0,0,109,110,3,14,
  	7,0,110,11,1,0,0,0,111,112,5,79,0,0,112,121,5,32,0,0,113,118,3,4,2,0,
  	114,115,5,69,0,0,115,117,3,4,2,0,116,114,1,0,0,0,117,120,1,0,0,0,118,
  	116,1,0,0,0,118,119,1,0,0,0,119,122,1,0,0,0,120,118,1,0,0,0,121,113,1,
  	0,0,0,121,122,1,0,0,0,122,123,1,0,0,0,123,124,5,33,0,0,124,13,1,0,0,0,
  	125,129,5,36,0,0,126,128,3,2,1,0,127,126,1,0,0,0,128,131,1,0,0,0,129,
  	127,1,0,0,0,129,130,1,0,0,0,130,132,1,0,0,0,131,129,1,0,0,0,132,133,5,
  	37,0,0,133,15,1,0,0,0,134,135,3,24,12,0,135,136,5,79,0,0,136,17,1,0,0,
  	0,137,138,3,24,12,0,138,139,5,79,0,0,139,140,5,48,0,0,140,141,3,4,2,0,
  	141,19,1,0,0,0,142,147,3,24,12,0,143,144,5,79,0,0,144,145,5,48,0,0,145,
  	148,3,4,2,0,146,148,5,79,0,0,147,143,1,0,0,0,147,146,1,0,0,0,148,158,
  	1,0,0,0,149,154,5,69,0,0,150,151,5,79,0,0,151,152,5,48,0,0,152,155,3,
  	4,2,0,153,155,5,79,0,0,154,150,1,0,0,0,154,153,1,0,0,0,155,157,1,0,0,
  	0,156,149,1,0,0,0,157,160,1,0,0,0,158,156,1,0,0,0,158,159,1,0,0,0,159,
  	21,1,0,0,0,160,158,1,0,0,0,161,162,3,8,4,0,162,163,5,48,0,0,163,164,3,
  	4,2,0,164,23,1,0,0,0,165,168,3,28,14,0,166,168,3,26,13,0,167,165,1,0,
  	0,0,167,166,1,0,0,0,168,25,1,0,0,0,169,170,7,0,0,0,170,27,1,0,0,0,171,
  	172,5,79,0,0,172,29,1,0,0,0,173,176,5,16,0,0,174,175,5,32,0,0,175,177,
  	5,33,0,0,176,174,1,0,0,0,176,177,1,0,0,0,177,221,1,0,0,0,178,181,5,23,
  	0,0,179,180,5,32,0,0,180,182,5,33,0,0,181,179,1,0,0,0,181,182,1,0,0,0,
  	182,221,1,0,0,0,183,221,5,38,0,0,184,221,5,39,0,0,185,221,5,40,0,0,186,
  	221,5,41,0,0,187,221,5,42,0,0,188,221,5,43,0,0,189,221,5,44,0,0,190,221,
  	5,45,0,0,191,221,5,46,0,0,192,221,5,47,0,0,193,221,5,48,0,0,194,221,5,
  	49,0,0,195,221,5,50,0,0,196,221,5,51,0,0,197,221,5,52,0,0,198,221,5,53,
  	0,0,199,221,5,54,0,0,200,221,5,55,0,0,201,221,5,56,0,0,202,221,5,57,0,
  	0,203,221,5,58,0,0,204,221,5,59,0,0,205,221,5,60,0,0,206,221,5,61,0,0,
  	207,221,5,62,0,0,208,221,5,63,0,0,209,221,5,64,0,0,210,221,5,65,0,0,211,
  	221,5,66,0,0,212,221,5,67,0,0,213,221,5,68,0,0,214,221,5,69,0,0,215,221,
  	5,70,0,0,216,217,5,32,0,0,217,221,5,33,0,0,218,219,5,34,0,0,219,221,5,
  	35,0,0,220,173,1,0,0,0,220,178,1,0,0,0,220,183,1,0,0,0,220,184,1,0,0,
  	0,220,185,1,0,0,0,220,186,1,0,0,0,220,187,1,0,0,0,220,188,1,0,0,0,220,
  	189,1,0,0,0,220,190,1,0,0,0,220,191,1,0,0,0,220,192,1,0,0,0,220,193,1,
  	0,0,0,220,194,1,0,0,0,220,195,1,0,0,0,220,196,1,0,0,0,220,197,1,0,0,0,
  	220,198,1,0,0,0,220,199,1,0,0,0,220,200,1,0,0,0,220,201,1,0,0,0,220,202,
  	1,0,0,0,220,203,1,0,0,0,220,204,1,0,0,0,220,205,1,0,0,0,220,206,1,0,0,
  	0,220,207,1,0,0,0,220,208,1,0,0,0,220,209,1,0,0,0,220,210,1,0,0,0,220,
  	211,1,0,0,0,220,212,1,0,0,0,220,213,1,0,0,0,220,214,1,0,0,0,220,215,1,
  	0,0,0,220,216,1,0,0,0,220,218,1,0,0,0,221,31,1,0,0,0,222,228,3,42,21,
  	0,223,228,3,34,17,0,224,228,3,36,18,0,225,228,3,38,19,0,226,228,3,40,
  	20,0,227,222,1,0,0,0,227,223,1,0,0,0,227,224,1,0,0,0,227,225,1,0,0,0,
  	227,226,1,0,0,0,228,33,1,0,0,0,229,230,5,75,0,0,230,35,1,0,0,0,231,232,
  	5,78,0,0,232,37,1,0,0,0,233,234,5,76,0,0,234,39,1,0,0,0,235,236,5,77,
  	0,0,236,41,1,0,0,0,237,238,7,1,0,0,238,43,1,0,0,0,20,47,60,66,73,76,83,
  	86,96,106,118,121,129,147,154,158,167,176,181,220,227
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  riddleparserParserStaticData = staticData.release();
}

}

RiddleParser::RiddleParser(TokenStream *input) : RiddleParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

RiddleParser::RiddleParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  RiddleParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *riddleparserParserStaticData->atn, riddleparserParserStaticData->decisionToDFA, riddleparserParserStaticData->sharedContextCache, options);
}

RiddleParser::~RiddleParser() {
  delete _interpreter;
}

const atn::ATN& RiddleParser::getATN() const {
  return *riddleparserParserStaticData->atn;
}

std::string RiddleParser::getGrammarFileName() const {
  return "RiddleParser.g4";
}

const std::vector<std::string>& RiddleParser::getRuleNames() const {
  return riddleparserParserStaticData->ruleNames;
}

const dfa::Vocabulary& RiddleParser::getVocabulary() const {
  return riddleparserParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView RiddleParser::getSerializedATN() const {
  return riddleparserParserStaticData->serializedATN;
}


//----------------- ProgramContext ------------------------------------------------------------------

RiddleParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<RiddleParser::StatmentContext *> RiddleParser::ProgramContext::statment() {
  return getRuleContexts<RiddleParser::StatmentContext>();
}

RiddleParser::StatmentContext* RiddleParser::ProgramContext::statment(size_t i) {
  return getRuleContext<RiddleParser::StatmentContext>(i);
}


size_t RiddleParser::ProgramContext::getRuleIndex() const {
  return RiddleParser::RuleProgram;
}

void RiddleParser::ProgramContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProgram(this);
}

void RiddleParser::ProgramContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProgram(this);
}


std::any RiddleParser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RiddleParserVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

RiddleParser::ProgramContext* RiddleParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, RiddleParser::RuleProgram);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(47);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 24) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 24)) & 36028797018964063) != 0)) {
      setState(44);
      statment();
      setState(49);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatmentContext ------------------------------------------------------------------

RiddleParser::StatmentContext::StatmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

RiddleParser::FuncDefintionContext* RiddleParser::StatmentContext::funcDefintion() {
  return getRuleContext<RiddleParser::FuncDefintionContext>(0);
}

RiddleParser::OneValDeclarationContext* RiddleParser::StatmentContext::oneValDeclaration() {
  return getRuleContext<RiddleParser::OneValDeclarationContext>(0);
}

tree::TerminalNode* RiddleParser::StatmentContext::Semi() {
  return getToken(RiddleParser::Semi, 0);
}

RiddleParser::ValDefintionContext* RiddleParser::StatmentContext::valDefintion() {
  return getRuleContext<RiddleParser::ValDefintionContext>(0);
}

RiddleParser::AssignmentExpressionContext* RiddleParser::StatmentContext::assignmentExpression() {
  return getRuleContext<RiddleParser::AssignmentExpressionContext>(0);
}


size_t RiddleParser::StatmentContext::getRuleIndex() const {
  return RiddleParser::RuleStatment;
}

void RiddleParser::StatmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatment(this);
}

void RiddleParser::StatmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatment(this);
}


std::any RiddleParser::StatmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RiddleParserVisitor*>(visitor))
    return parserVisitor->visitStatment(this);
  else
    return visitor->visitChildren(this);
}

RiddleParser::StatmentContext* RiddleParser::statment() {
  StatmentContext *_localctx = _tracker.createInstance<StatmentContext>(_ctx, getState());
  enterRule(_localctx, 2, RiddleParser::RuleStatment);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(60);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(50);
      funcDefintion();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(51);
      oneValDeclaration();
      setState(52);
      match(RiddleParser::Semi);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(54);
      valDefintion();
      setState(55);
      match(RiddleParser::Semi);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(57);
      assignmentExpression();
      setState(58);
      match(RiddleParser::Semi);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrimaryExpressionContext ------------------------------------------------------------------

RiddleParser::PrimaryExpressionContext::PrimaryExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

RiddleParser::LiteralContext* RiddleParser::PrimaryExpressionContext::literal() {
  return getRuleContext<RiddleParser::LiteralContext>(0);
}

RiddleParser::IdExpressionContext* RiddleParser::PrimaryExpressionContext::idExpression() {
  return getRuleContext<RiddleParser::IdExpressionContext>(0);
}

RiddleParser::AssignmentExpressionContext* RiddleParser::PrimaryExpressionContext::assignmentExpression() {
  return getRuleContext<RiddleParser::AssignmentExpressionContext>(0);
}

RiddleParser::FuncExpressionContext* RiddleParser::PrimaryExpressionContext::funcExpression() {
  return getRuleContext<RiddleParser::FuncExpressionContext>(0);
}


size_t RiddleParser::PrimaryExpressionContext::getRuleIndex() const {
  return RiddleParser::RulePrimaryExpression;
}

void RiddleParser::PrimaryExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrimaryExpression(this);
}

void RiddleParser::PrimaryExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrimaryExpression(this);
}


std::any RiddleParser::PrimaryExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RiddleParserVisitor*>(visitor))
    return parserVisitor->visitPrimaryExpression(this);
  else
    return visitor->visitChildren(this);
}

RiddleParser::PrimaryExpressionContext* RiddleParser::primaryExpression() {
  PrimaryExpressionContext *_localctx = _tracker.createInstance<PrimaryExpressionContext>(_ctx, getState());
  enterRule(_localctx, 4, RiddleParser::RulePrimaryExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(66);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(62);
      literal();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(63);
      idExpression();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(64);
      assignmentExpression();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(65);
      funcExpression();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IdExpressionContext ------------------------------------------------------------------

RiddleParser::IdExpressionContext::IdExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> RiddleParser::IdExpressionContext::Identifier() {
  return getTokens(RiddleParser::Identifier);
}

tree::TerminalNode* RiddleParser::IdExpressionContext::Identifier(size_t i) {
  return getToken(RiddleParser::Identifier, i);
}

std::vector<tree::TerminalNode *> RiddleParser::IdExpressionContext::Dot() {
  return getTokens(RiddleParser::Dot);
}

tree::TerminalNode* RiddleParser::IdExpressionContext::Dot(size_t i) {
  return getToken(RiddleParser::Dot, i);
}


size_t RiddleParser::IdExpressionContext::getRuleIndex() const {
  return RiddleParser::RuleIdExpression;
}

void RiddleParser::IdExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdExpression(this);
}

void RiddleParser::IdExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdExpression(this);
}


std::any RiddleParser::IdExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RiddleParserVisitor*>(visitor))
    return parserVisitor->visitIdExpression(this);
  else
    return visitor->visitChildren(this);
}

RiddleParser::IdExpressionContext* RiddleParser::idExpression() {
  IdExpressionContext *_localctx = _tracker.createInstance<IdExpressionContext>(_ctx, getState());
  enterRule(_localctx, 6, RiddleParser::RuleIdExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    setState(76);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(68);
      match(RiddleParser::Identifier);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(71); 
      _errHandler->sync(this);
      alt = 1;
      do {
        switch (alt) {
          case 1: {
                setState(69);
                match(RiddleParser::Identifier);
                setState(70);
                match(RiddleParser::Dot);
                break;
              }

        default:
          throw NoViableAltException(this);
        }
        setState(73); 
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
      } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
      setState(75);
      match(RiddleParser::Identifier);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IdentifierSetContext ------------------------------------------------------------------

RiddleParser::IdentifierSetContext::IdentifierSetContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> RiddleParser::IdentifierSetContext::Identifier() {
  return getTokens(RiddleParser::Identifier);
}

tree::TerminalNode* RiddleParser::IdentifierSetContext::Identifier(size_t i) {
  return getToken(RiddleParser::Identifier, i);
}

std::vector<tree::TerminalNode *> RiddleParser::IdentifierSetContext::Dot() {
  return getTokens(RiddleParser::Dot);
}

tree::TerminalNode* RiddleParser::IdentifierSetContext::Dot(size_t i) {
  return getToken(RiddleParser::Dot, i);
}


size_t RiddleParser::IdentifierSetContext::getRuleIndex() const {
  return RiddleParser::RuleIdentifierSet;
}

void RiddleParser::IdentifierSetContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdentifierSet(this);
}

void RiddleParser::IdentifierSetContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdentifierSet(this);
}


std::any RiddleParser::IdentifierSetContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RiddleParserVisitor*>(visitor))
    return parserVisitor->visitIdentifierSet(this);
  else
    return visitor->visitChildren(this);
}

RiddleParser::IdentifierSetContext* RiddleParser::identifierSet() {
  IdentifierSetContext *_localctx = _tracker.createInstance<IdentifierSetContext>(_ctx, getState());
  enterRule(_localctx, 8, RiddleParser::RuleIdentifierSet);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    setState(86);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(78);
      match(RiddleParser::Identifier);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(81); 
      _errHandler->sync(this);
      alt = 1;
      do {
        switch (alt) {
          case 1: {
                setState(79);
                match(RiddleParser::Identifier);
                setState(80);
                match(RiddleParser::Dot);
                break;
              }

        default:
          throw NoViableAltException(this);
        }
        setState(83); 
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
      } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
      setState(85);
      match(RiddleParser::Identifier);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncDefintionContext ------------------------------------------------------------------

RiddleParser::FuncDefintionContext::FuncDefintionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

RiddleParser::TheTypeNameContext* RiddleParser::FuncDefintionContext::theTypeName() {
  return getRuleContext<RiddleParser::TheTypeNameContext>(0);
}

tree::TerminalNode* RiddleParser::FuncDefintionContext::Identifier() {
  return getToken(RiddleParser::Identifier, 0);
}

tree::TerminalNode* RiddleParser::FuncDefintionContext::LeftParen() {
  return getToken(RiddleParser::LeftParen, 0);
}

tree::TerminalNode* RiddleParser::FuncDefintionContext::RightParen() {
  return getToken(RiddleParser::RightParen, 0);
}

RiddleParser::FuncBodyContext* RiddleParser::FuncDefintionContext::funcBody() {
  return getRuleContext<RiddleParser::FuncBodyContext>(0);
}

std::vector<RiddleParser::OneValDeclarationContext *> RiddleParser::FuncDefintionContext::oneValDeclaration() {
  return getRuleContexts<RiddleParser::OneValDeclarationContext>();
}

RiddleParser::OneValDeclarationContext* RiddleParser::FuncDefintionContext::oneValDeclaration(size_t i) {
  return getRuleContext<RiddleParser::OneValDeclarationContext>(i);
}

std::vector<RiddleParser::OneValDefintionContext *> RiddleParser::FuncDefintionContext::oneValDefintion() {
  return getRuleContexts<RiddleParser::OneValDefintionContext>();
}

RiddleParser::OneValDefintionContext* RiddleParser::FuncDefintionContext::oneValDefintion(size_t i) {
  return getRuleContext<RiddleParser::OneValDefintionContext>(i);
}

std::vector<tree::TerminalNode *> RiddleParser::FuncDefintionContext::Comma() {
  return getTokens(RiddleParser::Comma);
}

tree::TerminalNode* RiddleParser::FuncDefintionContext::Comma(size_t i) {
  return getToken(RiddleParser::Comma, i);
}


size_t RiddleParser::FuncDefintionContext::getRuleIndex() const {
  return RiddleParser::RuleFuncDefintion;
}

void RiddleParser::FuncDefintionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFuncDefintion(this);
}

void RiddleParser::FuncDefintionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFuncDefintion(this);
}


std::any RiddleParser::FuncDefintionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RiddleParserVisitor*>(visitor))
    return parserVisitor->visitFuncDefintion(this);
  else
    return visitor->visitChildren(this);
}

RiddleParser::FuncDefintionContext* RiddleParser::funcDefintion() {
  FuncDefintionContext *_localctx = _tracker.createInstance<FuncDefintionContext>(_ctx, getState());
  enterRule(_localctx, 10, RiddleParser::RuleFuncDefintion);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(88);
    theTypeName();
    setState(89);
    match(RiddleParser::Identifier);
    setState(90);
    match(RiddleParser::LeftParen);
    setState(106);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      setState(91);
      oneValDeclaration();
      setState(96);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(92);
          match(RiddleParser::Comma);
          setState(93);
          oneValDeclaration(); 
        }
        setState(98);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
      }

      setState(99);
      match(RiddleParser::Comma);
      setState(100);
      oneValDefintion();
      break;
    }

    case 2: {
      setState(102);
      oneValDefintion();

      setState(103);
      match(RiddleParser::Comma);
      setState(104);
      oneValDefintion();
      break;
    }

    default:
      break;
    }
    setState(108);
    match(RiddleParser::RightParen);
    setState(109);
    funcBody();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncExpressionContext ------------------------------------------------------------------

RiddleParser::FuncExpressionContext::FuncExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RiddleParser::FuncExpressionContext::Identifier() {
  return getToken(RiddleParser::Identifier, 0);
}

tree::TerminalNode* RiddleParser::FuncExpressionContext::LeftParen() {
  return getToken(RiddleParser::LeftParen, 0);
}

tree::TerminalNode* RiddleParser::FuncExpressionContext::RightParen() {
  return getToken(RiddleParser::RightParen, 0);
}

std::vector<RiddleParser::PrimaryExpressionContext *> RiddleParser::FuncExpressionContext::primaryExpression() {
  return getRuleContexts<RiddleParser::PrimaryExpressionContext>();
}

RiddleParser::PrimaryExpressionContext* RiddleParser::FuncExpressionContext::primaryExpression(size_t i) {
  return getRuleContext<RiddleParser::PrimaryExpressionContext>(i);
}

std::vector<tree::TerminalNode *> RiddleParser::FuncExpressionContext::Comma() {
  return getTokens(RiddleParser::Comma);
}

tree::TerminalNode* RiddleParser::FuncExpressionContext::Comma(size_t i) {
  return getToken(RiddleParser::Comma, i);
}


size_t RiddleParser::FuncExpressionContext::getRuleIndex() const {
  return RiddleParser::RuleFuncExpression;
}

void RiddleParser::FuncExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFuncExpression(this);
}

void RiddleParser::FuncExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFuncExpression(this);
}


std::any RiddleParser::FuncExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RiddleParserVisitor*>(visitor))
    return parserVisitor->visitFuncExpression(this);
  else
    return visitor->visitChildren(this);
}

RiddleParser::FuncExpressionContext* RiddleParser::funcExpression() {
  FuncExpressionContext *_localctx = _tracker.createInstance<FuncExpressionContext>(_ctx, getState());
  enterRule(_localctx, 12, RiddleParser::RuleFuncExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(111);
    match(RiddleParser::Identifier);
    setState(112);
    match(RiddleParser::LeftParen);
    setState(121);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == RiddleParser::True_

    || _la == RiddleParser::False_ || ((((_la - 75) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 75)) & 31) != 0)) {
      setState(113);
      primaryExpression();
      setState(118);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == RiddleParser::Comma) {
        setState(114);
        match(RiddleParser::Comma);
        setState(115);
        primaryExpression();
        setState(120);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(123);
    match(RiddleParser::RightParen);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncBodyContext ------------------------------------------------------------------

RiddleParser::FuncBodyContext::FuncBodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RiddleParser::FuncBodyContext::LeftBrace() {
  return getToken(RiddleParser::LeftBrace, 0);
}

tree::TerminalNode* RiddleParser::FuncBodyContext::RightBrace() {
  return getToken(RiddleParser::RightBrace, 0);
}

std::vector<RiddleParser::StatmentContext *> RiddleParser::FuncBodyContext::statment() {
  return getRuleContexts<RiddleParser::StatmentContext>();
}

RiddleParser::StatmentContext* RiddleParser::FuncBodyContext::statment(size_t i) {
  return getRuleContext<RiddleParser::StatmentContext>(i);
}


size_t RiddleParser::FuncBodyContext::getRuleIndex() const {
  return RiddleParser::RuleFuncBody;
}

void RiddleParser::FuncBodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFuncBody(this);
}

void RiddleParser::FuncBodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFuncBody(this);
}


std::any RiddleParser::FuncBodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RiddleParserVisitor*>(visitor))
    return parserVisitor->visitFuncBody(this);
  else
    return visitor->visitChildren(this);
}

RiddleParser::FuncBodyContext* RiddleParser::funcBody() {
  FuncBodyContext *_localctx = _tracker.createInstance<FuncBodyContext>(_ctx, getState());
  enterRule(_localctx, 14, RiddleParser::RuleFuncBody);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(125);
    match(RiddleParser::LeftBrace);
    setState(129);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 24) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 24)) & 36028797018964063) != 0)) {
      setState(126);
      statment();
      setState(131);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(132);
    match(RiddleParser::RightBrace);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OneValDeclarationContext ------------------------------------------------------------------

RiddleParser::OneValDeclarationContext::OneValDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

RiddleParser::TheTypeNameContext* RiddleParser::OneValDeclarationContext::theTypeName() {
  return getRuleContext<RiddleParser::TheTypeNameContext>(0);
}

tree::TerminalNode* RiddleParser::OneValDeclarationContext::Identifier() {
  return getToken(RiddleParser::Identifier, 0);
}


size_t RiddleParser::OneValDeclarationContext::getRuleIndex() const {
  return RiddleParser::RuleOneValDeclaration;
}

void RiddleParser::OneValDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOneValDeclaration(this);
}

void RiddleParser::OneValDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOneValDeclaration(this);
}


std::any RiddleParser::OneValDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RiddleParserVisitor*>(visitor))
    return parserVisitor->visitOneValDeclaration(this);
  else
    return visitor->visitChildren(this);
}

RiddleParser::OneValDeclarationContext* RiddleParser::oneValDeclaration() {
  OneValDeclarationContext *_localctx = _tracker.createInstance<OneValDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 16, RiddleParser::RuleOneValDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(134);
    theTypeName();
    setState(135);
    match(RiddleParser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OneValDefintionContext ------------------------------------------------------------------

RiddleParser::OneValDefintionContext::OneValDefintionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

RiddleParser::TheTypeNameContext* RiddleParser::OneValDefintionContext::theTypeName() {
  return getRuleContext<RiddleParser::TheTypeNameContext>(0);
}

tree::TerminalNode* RiddleParser::OneValDefintionContext::Identifier() {
  return getToken(RiddleParser::Identifier, 0);
}

tree::TerminalNode* RiddleParser::OneValDefintionContext::Assign() {
  return getToken(RiddleParser::Assign, 0);
}

RiddleParser::PrimaryExpressionContext* RiddleParser::OneValDefintionContext::primaryExpression() {
  return getRuleContext<RiddleParser::PrimaryExpressionContext>(0);
}


size_t RiddleParser::OneValDefintionContext::getRuleIndex() const {
  return RiddleParser::RuleOneValDefintion;
}

void RiddleParser::OneValDefintionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOneValDefintion(this);
}

void RiddleParser::OneValDefintionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOneValDefintion(this);
}


std::any RiddleParser::OneValDefintionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RiddleParserVisitor*>(visitor))
    return parserVisitor->visitOneValDefintion(this);
  else
    return visitor->visitChildren(this);
}

RiddleParser::OneValDefintionContext* RiddleParser::oneValDefintion() {
  OneValDefintionContext *_localctx = _tracker.createInstance<OneValDefintionContext>(_ctx, getState());
  enterRule(_localctx, 18, RiddleParser::RuleOneValDefintion);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(137);
    theTypeName();
    setState(138);
    match(RiddleParser::Identifier);
    setState(139);
    match(RiddleParser::Assign);
    setState(140);
    primaryExpression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ValDefintionContext ------------------------------------------------------------------

RiddleParser::ValDefintionContext::ValDefintionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

RiddleParser::TheTypeNameContext* RiddleParser::ValDefintionContext::theTypeName() {
  return getRuleContext<RiddleParser::TheTypeNameContext>(0);
}

std::vector<tree::TerminalNode *> RiddleParser::ValDefintionContext::Identifier() {
  return getTokens(RiddleParser::Identifier);
}

tree::TerminalNode* RiddleParser::ValDefintionContext::Identifier(size_t i) {
  return getToken(RiddleParser::Identifier, i);
}

std::vector<tree::TerminalNode *> RiddleParser::ValDefintionContext::Comma() {
  return getTokens(RiddleParser::Comma);
}

tree::TerminalNode* RiddleParser::ValDefintionContext::Comma(size_t i) {
  return getToken(RiddleParser::Comma, i);
}

std::vector<tree::TerminalNode *> RiddleParser::ValDefintionContext::Assign() {
  return getTokens(RiddleParser::Assign);
}

tree::TerminalNode* RiddleParser::ValDefintionContext::Assign(size_t i) {
  return getToken(RiddleParser::Assign, i);
}

std::vector<RiddleParser::PrimaryExpressionContext *> RiddleParser::ValDefintionContext::primaryExpression() {
  return getRuleContexts<RiddleParser::PrimaryExpressionContext>();
}

RiddleParser::PrimaryExpressionContext* RiddleParser::ValDefintionContext::primaryExpression(size_t i) {
  return getRuleContext<RiddleParser::PrimaryExpressionContext>(i);
}


size_t RiddleParser::ValDefintionContext::getRuleIndex() const {
  return RiddleParser::RuleValDefintion;
}

void RiddleParser::ValDefintionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterValDefintion(this);
}

void RiddleParser::ValDefintionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitValDefintion(this);
}


std::any RiddleParser::ValDefintionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RiddleParserVisitor*>(visitor))
    return parserVisitor->visitValDefintion(this);
  else
    return visitor->visitChildren(this);
}

RiddleParser::ValDefintionContext* RiddleParser::valDefintion() {
  ValDefintionContext *_localctx = _tracker.createInstance<ValDefintionContext>(_ctx, getState());
  enterRule(_localctx, 20, RiddleParser::RuleValDefintion);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(142);
    theTypeName();
    setState(147);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
    case 1: {
      setState(143);
      match(RiddleParser::Identifier);
      setState(144);
      match(RiddleParser::Assign);
      setState(145);
      primaryExpression();
      break;
    }

    case 2: {
      setState(146);
      match(RiddleParser::Identifier);
      break;
    }

    default:
      break;
    }
    setState(158);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == RiddleParser::Comma) {
      setState(149);
      match(RiddleParser::Comma);
      setState(154);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
      case 1: {
        setState(150);
        match(RiddleParser::Identifier);
        setState(151);
        match(RiddleParser::Assign);
        setState(152);
        primaryExpression();
        break;
      }

      case 2: {
        setState(153);
        match(RiddleParser::Identifier);
        break;
      }

      default:
        break;
      }
      setState(160);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentExpressionContext ------------------------------------------------------------------

RiddleParser::AssignmentExpressionContext::AssignmentExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

RiddleParser::IdentifierSetContext* RiddleParser::AssignmentExpressionContext::identifierSet() {
  return getRuleContext<RiddleParser::IdentifierSetContext>(0);
}

tree::TerminalNode* RiddleParser::AssignmentExpressionContext::Assign() {
  return getToken(RiddleParser::Assign, 0);
}

RiddleParser::PrimaryExpressionContext* RiddleParser::AssignmentExpressionContext::primaryExpression() {
  return getRuleContext<RiddleParser::PrimaryExpressionContext>(0);
}


size_t RiddleParser::AssignmentExpressionContext::getRuleIndex() const {
  return RiddleParser::RuleAssignmentExpression;
}

void RiddleParser::AssignmentExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignmentExpression(this);
}

void RiddleParser::AssignmentExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignmentExpression(this);
}


std::any RiddleParser::AssignmentExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RiddleParserVisitor*>(visitor))
    return parserVisitor->visitAssignmentExpression(this);
  else
    return visitor->visitChildren(this);
}

RiddleParser::AssignmentExpressionContext* RiddleParser::assignmentExpression() {
  AssignmentExpressionContext *_localctx = _tracker.createInstance<AssignmentExpressionContext>(_ctx, getState());
  enterRule(_localctx, 22, RiddleParser::RuleAssignmentExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(161);
    identifierSet();
    setState(162);
    match(RiddleParser::Assign);
    setState(163);
    primaryExpression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TheTypeNameContext ------------------------------------------------------------------

RiddleParser::TheTypeNameContext::TheTypeNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

RiddleParser::ClassNameContext* RiddleParser::TheTypeNameContext::className() {
  return getRuleContext<RiddleParser::ClassNameContext>(0);
}

RiddleParser::TypeSpecifierContext* RiddleParser::TheTypeNameContext::typeSpecifier() {
  return getRuleContext<RiddleParser::TypeSpecifierContext>(0);
}


size_t RiddleParser::TheTypeNameContext::getRuleIndex() const {
  return RiddleParser::RuleTheTypeName;
}

void RiddleParser::TheTypeNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTheTypeName(this);
}

void RiddleParser::TheTypeNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTheTypeName(this);
}


std::any RiddleParser::TheTypeNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RiddleParserVisitor*>(visitor))
    return parserVisitor->visitTheTypeName(this);
  else
    return visitor->visitChildren(this);
}

RiddleParser::TheTypeNameContext* RiddleParser::theTypeName() {
  TheTypeNameContext *_localctx = _tracker.createInstance<TheTypeNameContext>(_ctx, getState());
  enterRule(_localctx, 24, RiddleParser::RuleTheTypeName);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(167);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case RiddleParser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(165);
        className();
        break;
      }

      case RiddleParser::Int:
      case RiddleParser::String:
      case RiddleParser::Float:
      case RiddleParser::Char:
      case RiddleParser::Void:
      case RiddleParser::Any: {
        enterOuterAlt(_localctx, 2);
        setState(166);
        typeSpecifier();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeSpecifierContext ------------------------------------------------------------------

RiddleParser::TypeSpecifierContext::TypeSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RiddleParser::TypeSpecifierContext::Char() {
  return getToken(RiddleParser::Char, 0);
}

tree::TerminalNode* RiddleParser::TypeSpecifierContext::String() {
  return getToken(RiddleParser::String, 0);
}

tree::TerminalNode* RiddleParser::TypeSpecifierContext::Int() {
  return getToken(RiddleParser::Int, 0);
}

tree::TerminalNode* RiddleParser::TypeSpecifierContext::Float() {
  return getToken(RiddleParser::Float, 0);
}

tree::TerminalNode* RiddleParser::TypeSpecifierContext::Void() {
  return getToken(RiddleParser::Void, 0);
}

tree::TerminalNode* RiddleParser::TypeSpecifierContext::Any() {
  return getToken(RiddleParser::Any, 0);
}


size_t RiddleParser::TypeSpecifierContext::getRuleIndex() const {
  return RiddleParser::RuleTypeSpecifier;
}

void RiddleParser::TypeSpecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeSpecifier(this);
}

void RiddleParser::TypeSpecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeSpecifier(this);
}


std::any RiddleParser::TypeSpecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RiddleParserVisitor*>(visitor))
    return parserVisitor->visitTypeSpecifier(this);
  else
    return visitor->visitChildren(this);
}

RiddleParser::TypeSpecifierContext* RiddleParser::typeSpecifier() {
  TypeSpecifierContext *_localctx = _tracker.createInstance<TypeSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 26, RiddleParser::RuleTypeSpecifier);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(169);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1593835520) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassNameContext ------------------------------------------------------------------

RiddleParser::ClassNameContext::ClassNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RiddleParser::ClassNameContext::Identifier() {
  return getToken(RiddleParser::Identifier, 0);
}


size_t RiddleParser::ClassNameContext::getRuleIndex() const {
  return RiddleParser::RuleClassName;
}

void RiddleParser::ClassNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassName(this);
}

void RiddleParser::ClassNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassName(this);
}


std::any RiddleParser::ClassNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RiddleParserVisitor*>(visitor))
    return parserVisitor->visitClassName(this);
  else
    return visitor->visitChildren(this);
}

RiddleParser::ClassNameContext* RiddleParser::className() {
  ClassNameContext *_localctx = _tracker.createInstance<ClassNameContext>(_ctx, getState());
  enterRule(_localctx, 28, RiddleParser::RuleClassName);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(171);
    match(RiddleParser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TheOperatorContext ------------------------------------------------------------------

RiddleParser::TheOperatorContext::TheOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RiddleParser::TheOperatorContext::New() {
  return getToken(RiddleParser::New, 0);
}

tree::TerminalNode* RiddleParser::TheOperatorContext::LeftParen() {
  return getToken(RiddleParser::LeftParen, 0);
}

tree::TerminalNode* RiddleParser::TheOperatorContext::RightParen() {
  return getToken(RiddleParser::RightParen, 0);
}

tree::TerminalNode* RiddleParser::TheOperatorContext::Delete() {
  return getToken(RiddleParser::Delete, 0);
}

tree::TerminalNode* RiddleParser::TheOperatorContext::Plus() {
  return getToken(RiddleParser::Plus, 0);
}

tree::TerminalNode* RiddleParser::TheOperatorContext::Minus() {
  return getToken(RiddleParser::Minus, 0);
}

tree::TerminalNode* RiddleParser::TheOperatorContext::Star() {
  return getToken(RiddleParser::Star, 0);
}

tree::TerminalNode* RiddleParser::TheOperatorContext::Div() {
  return getToken(RiddleParser::Div, 0);
}

tree::TerminalNode* RiddleParser::TheOperatorContext::Mod() {
  return getToken(RiddleParser::Mod, 0);
}

tree::TerminalNode* RiddleParser::TheOperatorContext::Caret() {
  return getToken(RiddleParser::Caret, 0);
}

tree::TerminalNode* RiddleParser::TheOperatorContext::And() {
  return getToken(RiddleParser::And, 0);
}

tree::TerminalNode* RiddleParser::TheOperatorContext::Or() {
  return getToken(RiddleParser::Or, 0);
}

tree::TerminalNode* RiddleParser::TheOperatorContext::Tilde() {
  return getToken(RiddleParser::Tilde, 0);
}

tree::TerminalNode* RiddleParser::TheOperatorContext::Not() {
  return getToken(RiddleParser::Not, 0);
}

tree::TerminalNode* RiddleParser::TheOperatorContext::Assign() {
  return getToken(RiddleParser::Assign, 0);
}

tree::TerminalNode* RiddleParser::TheOperatorContext::Less() {
  return getToken(RiddleParser::Less, 0);
}

tree::TerminalNode* RiddleParser::TheOperatorContext::Greater() {
  return getToken(RiddleParser::Greater, 0);
}

tree::TerminalNode* RiddleParser::TheOperatorContext::PlusAssign() {
  return getToken(RiddleParser::PlusAssign, 0);
}

tree::TerminalNode* RiddleParser::TheOperatorContext::MinusAssign() {
  return getToken(RiddleParser::MinusAssign, 0);
}

tree::TerminalNode* RiddleParser::TheOperatorContext::StarAssign() {
  return getToken(RiddleParser::StarAssign, 0);
}

tree::TerminalNode* RiddleParser::TheOperatorContext::DivAssign() {
  return getToken(RiddleParser::DivAssign, 0);
}

tree::TerminalNode* RiddleParser::TheOperatorContext::ModAssign() {
  return getToken(RiddleParser::ModAssign, 0);
}

tree::TerminalNode* RiddleParser::TheOperatorContext::XorAssign() {
  return getToken(RiddleParser::XorAssign, 0);
}

tree::TerminalNode* RiddleParser::TheOperatorContext::AndAssign() {
  return getToken(RiddleParser::AndAssign, 0);
}

tree::TerminalNode* RiddleParser::TheOperatorContext::OrAssign() {
  return getToken(RiddleParser::OrAssign, 0);
}

tree::TerminalNode* RiddleParser::TheOperatorContext::LeftShiftAssign() {
  return getToken(RiddleParser::LeftShiftAssign, 0);
}

tree::TerminalNode* RiddleParser::TheOperatorContext::RightShiftAssign() {
  return getToken(RiddleParser::RightShiftAssign, 0);
}

tree::TerminalNode* RiddleParser::TheOperatorContext::Equal() {
  return getToken(RiddleParser::Equal, 0);
}

tree::TerminalNode* RiddleParser::TheOperatorContext::NotEqual() {
  return getToken(RiddleParser::NotEqual, 0);
}

tree::TerminalNode* RiddleParser::TheOperatorContext::LessEqual() {
  return getToken(RiddleParser::LessEqual, 0);
}

tree::TerminalNode* RiddleParser::TheOperatorContext::GreaterEqual() {
  return getToken(RiddleParser::GreaterEqual, 0);
}

tree::TerminalNode* RiddleParser::TheOperatorContext::AndAnd() {
  return getToken(RiddleParser::AndAnd, 0);
}

tree::TerminalNode* RiddleParser::TheOperatorContext::OrOr() {
  return getToken(RiddleParser::OrOr, 0);
}

tree::TerminalNode* RiddleParser::TheOperatorContext::PlusPlus() {
  return getToken(RiddleParser::PlusPlus, 0);
}

tree::TerminalNode* RiddleParser::TheOperatorContext::MinusMinus() {
  return getToken(RiddleParser::MinusMinus, 0);
}

tree::TerminalNode* RiddleParser::TheOperatorContext::Comma() {
  return getToken(RiddleParser::Comma, 0);
}

tree::TerminalNode* RiddleParser::TheOperatorContext::Arrow() {
  return getToken(RiddleParser::Arrow, 0);
}

tree::TerminalNode* RiddleParser::TheOperatorContext::LeftBracket() {
  return getToken(RiddleParser::LeftBracket, 0);
}

tree::TerminalNode* RiddleParser::TheOperatorContext::RightBracket() {
  return getToken(RiddleParser::RightBracket, 0);
}


size_t RiddleParser::TheOperatorContext::getRuleIndex() const {
  return RiddleParser::RuleTheOperator;
}

void RiddleParser::TheOperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTheOperator(this);
}

void RiddleParser::TheOperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTheOperator(this);
}


std::any RiddleParser::TheOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RiddleParserVisitor*>(visitor))
    return parserVisitor->visitTheOperator(this);
  else
    return visitor->visitChildren(this);
}

RiddleParser::TheOperatorContext* RiddleParser::theOperator() {
  TheOperatorContext *_localctx = _tracker.createInstance<TheOperatorContext>(_ctx, getState());
  enterRule(_localctx, 30, RiddleParser::RuleTheOperator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(220);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case RiddleParser::New: {
        enterOuterAlt(_localctx, 1);
        setState(173);
        match(RiddleParser::New);
        setState(176);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == RiddleParser::LeftParen) {
          setState(174);
          match(RiddleParser::LeftParen);
          setState(175);
          match(RiddleParser::RightParen);
        }
        break;
      }

      case RiddleParser::Delete: {
        enterOuterAlt(_localctx, 2);
        setState(178);
        match(RiddleParser::Delete);
        setState(181);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == RiddleParser::LeftParen) {
          setState(179);
          match(RiddleParser::LeftParen);
          setState(180);
          match(RiddleParser::RightParen);
        }
        break;
      }

      case RiddleParser::Plus: {
        enterOuterAlt(_localctx, 3);
        setState(183);
        match(RiddleParser::Plus);
        break;
      }

      case RiddleParser::Minus: {
        enterOuterAlt(_localctx, 4);
        setState(184);
        match(RiddleParser::Minus);
        break;
      }

      case RiddleParser::Star: {
        enterOuterAlt(_localctx, 5);
        setState(185);
        match(RiddleParser::Star);
        break;
      }

      case RiddleParser::Div: {
        enterOuterAlt(_localctx, 6);
        setState(186);
        match(RiddleParser::Div);
        break;
      }

      case RiddleParser::Mod: {
        enterOuterAlt(_localctx, 7);
        setState(187);
        match(RiddleParser::Mod);
        break;
      }

      case RiddleParser::Caret: {
        enterOuterAlt(_localctx, 8);
        setState(188);
        match(RiddleParser::Caret);
        break;
      }

      case RiddleParser::And: {
        enterOuterAlt(_localctx, 9);
        setState(189);
        match(RiddleParser::And);
        break;
      }

      case RiddleParser::Or: {
        enterOuterAlt(_localctx, 10);
        setState(190);
        match(RiddleParser::Or);
        break;
      }

      case RiddleParser::Tilde: {
        enterOuterAlt(_localctx, 11);
        setState(191);
        match(RiddleParser::Tilde);
        break;
      }

      case RiddleParser::Not: {
        enterOuterAlt(_localctx, 12);
        setState(192);
        match(RiddleParser::Not);
        break;
      }

      case RiddleParser::Assign: {
        enterOuterAlt(_localctx, 13);
        setState(193);
        match(RiddleParser::Assign);
        break;
      }

      case RiddleParser::Less: {
        enterOuterAlt(_localctx, 14);
        setState(194);
        match(RiddleParser::Less);
        break;
      }

      case RiddleParser::Greater: {
        enterOuterAlt(_localctx, 15);
        setState(195);
        match(RiddleParser::Greater);
        break;
      }

      case RiddleParser::PlusAssign: {
        enterOuterAlt(_localctx, 16);
        setState(196);
        match(RiddleParser::PlusAssign);
        break;
      }

      case RiddleParser::MinusAssign: {
        enterOuterAlt(_localctx, 17);
        setState(197);
        match(RiddleParser::MinusAssign);
        break;
      }

      case RiddleParser::StarAssign: {
        enterOuterAlt(_localctx, 18);
        setState(198);
        match(RiddleParser::StarAssign);
        break;
      }

      case RiddleParser::DivAssign: {
        enterOuterAlt(_localctx, 19);
        setState(199);
        match(RiddleParser::DivAssign);
        break;
      }

      case RiddleParser::ModAssign: {
        enterOuterAlt(_localctx, 20);
        setState(200);
        match(RiddleParser::ModAssign);
        break;
      }

      case RiddleParser::XorAssign: {
        enterOuterAlt(_localctx, 21);
        setState(201);
        match(RiddleParser::XorAssign);
        break;
      }

      case RiddleParser::AndAssign: {
        enterOuterAlt(_localctx, 22);
        setState(202);
        match(RiddleParser::AndAssign);
        break;
      }

      case RiddleParser::OrAssign: {
        enterOuterAlt(_localctx, 23);
        setState(203);
        match(RiddleParser::OrAssign);
        break;
      }

      case RiddleParser::LeftShiftAssign: {
        enterOuterAlt(_localctx, 24);
        setState(204);
        match(RiddleParser::LeftShiftAssign);
        break;
      }

      case RiddleParser::RightShiftAssign: {
        enterOuterAlt(_localctx, 25);
        setState(205);
        match(RiddleParser::RightShiftAssign);
        break;
      }

      case RiddleParser::Equal: {
        enterOuterAlt(_localctx, 26);
        setState(206);
        match(RiddleParser::Equal);
        break;
      }

      case RiddleParser::NotEqual: {
        enterOuterAlt(_localctx, 27);
        setState(207);
        match(RiddleParser::NotEqual);
        break;
      }

      case RiddleParser::LessEqual: {
        enterOuterAlt(_localctx, 28);
        setState(208);
        match(RiddleParser::LessEqual);
        break;
      }

      case RiddleParser::GreaterEqual: {
        enterOuterAlt(_localctx, 29);
        setState(209);
        match(RiddleParser::GreaterEqual);
        break;
      }

      case RiddleParser::AndAnd: {
        enterOuterAlt(_localctx, 30);
        setState(210);
        match(RiddleParser::AndAnd);
        break;
      }

      case RiddleParser::OrOr: {
        enterOuterAlt(_localctx, 31);
        setState(211);
        match(RiddleParser::OrOr);
        break;
      }

      case RiddleParser::PlusPlus: {
        enterOuterAlt(_localctx, 32);
        setState(212);
        match(RiddleParser::PlusPlus);
        break;
      }

      case RiddleParser::MinusMinus: {
        enterOuterAlt(_localctx, 33);
        setState(213);
        match(RiddleParser::MinusMinus);
        break;
      }

      case RiddleParser::Comma: {
        enterOuterAlt(_localctx, 34);
        setState(214);
        match(RiddleParser::Comma);
        break;
      }

      case RiddleParser::Arrow: {
        enterOuterAlt(_localctx, 35);
        setState(215);
        match(RiddleParser::Arrow);
        break;
      }

      case RiddleParser::LeftParen: {
        enterOuterAlt(_localctx, 36);
        setState(216);
        match(RiddleParser::LeftParen);
        setState(217);
        match(RiddleParser::RightParen);
        break;
      }

      case RiddleParser::LeftBracket: {
        enterOuterAlt(_localctx, 37);
        setState(218);
        match(RiddleParser::LeftBracket);
        setState(219);
        match(RiddleParser::RightBracket);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LiteralContext ------------------------------------------------------------------

RiddleParser::LiteralContext::LiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

RiddleParser::BoolLiteralContext* RiddleParser::LiteralContext::boolLiteral() {
  return getRuleContext<RiddleParser::BoolLiteralContext>(0);
}

RiddleParser::IntLiteralContext* RiddleParser::LiteralContext::intLiteral() {
  return getRuleContext<RiddleParser::IntLiteralContext>(0);
}

RiddleParser::CharLiteralContext* RiddleParser::LiteralContext::charLiteral() {
  return getRuleContext<RiddleParser::CharLiteralContext>(0);
}

RiddleParser::FloatLiteralContext* RiddleParser::LiteralContext::floatLiteral() {
  return getRuleContext<RiddleParser::FloatLiteralContext>(0);
}

RiddleParser::StrLiteralContext* RiddleParser::LiteralContext::strLiteral() {
  return getRuleContext<RiddleParser::StrLiteralContext>(0);
}


size_t RiddleParser::LiteralContext::getRuleIndex() const {
  return RiddleParser::RuleLiteral;
}

void RiddleParser::LiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLiteral(this);
}

void RiddleParser::LiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLiteral(this);
}


std::any RiddleParser::LiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RiddleParserVisitor*>(visitor))
    return parserVisitor->visitLiteral(this);
  else
    return visitor->visitChildren(this);
}

RiddleParser::LiteralContext* RiddleParser::literal() {
  LiteralContext *_localctx = _tracker.createInstance<LiteralContext>(_ctx, getState());
  enterRule(_localctx, 32, RiddleParser::RuleLiteral);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(227);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case RiddleParser::True_:
      case RiddleParser::False_: {
        enterOuterAlt(_localctx, 1);
        setState(222);
        boolLiteral();
        break;
      }

      case RiddleParser::IntegerLiteral: {
        enterOuterAlt(_localctx, 2);
        setState(223);
        intLiteral();
        break;
      }

      case RiddleParser::CharacterLiteral: {
        enterOuterAlt(_localctx, 3);
        setState(224);
        charLiteral();
        break;
      }

      case RiddleParser::FloatingLiteral: {
        enterOuterAlt(_localctx, 4);
        setState(225);
        floatLiteral();
        break;
      }

      case RiddleParser::StringLiteral: {
        enterOuterAlt(_localctx, 5);
        setState(226);
        strLiteral();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IntLiteralContext ------------------------------------------------------------------

RiddleParser::IntLiteralContext::IntLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RiddleParser::IntLiteralContext::IntegerLiteral() {
  return getToken(RiddleParser::IntegerLiteral, 0);
}


size_t RiddleParser::IntLiteralContext::getRuleIndex() const {
  return RiddleParser::RuleIntLiteral;
}

void RiddleParser::IntLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIntLiteral(this);
}

void RiddleParser::IntLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIntLiteral(this);
}


std::any RiddleParser::IntLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RiddleParserVisitor*>(visitor))
    return parserVisitor->visitIntLiteral(this);
  else
    return visitor->visitChildren(this);
}

RiddleParser::IntLiteralContext* RiddleParser::intLiteral() {
  IntLiteralContext *_localctx = _tracker.createInstance<IntLiteralContext>(_ctx, getState());
  enterRule(_localctx, 34, RiddleParser::RuleIntLiteral);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(229);
    match(RiddleParser::IntegerLiteral);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CharLiteralContext ------------------------------------------------------------------

RiddleParser::CharLiteralContext::CharLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RiddleParser::CharLiteralContext::CharacterLiteral() {
  return getToken(RiddleParser::CharacterLiteral, 0);
}


size_t RiddleParser::CharLiteralContext::getRuleIndex() const {
  return RiddleParser::RuleCharLiteral;
}

void RiddleParser::CharLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCharLiteral(this);
}

void RiddleParser::CharLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCharLiteral(this);
}


std::any RiddleParser::CharLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RiddleParserVisitor*>(visitor))
    return parserVisitor->visitCharLiteral(this);
  else
    return visitor->visitChildren(this);
}

RiddleParser::CharLiteralContext* RiddleParser::charLiteral() {
  CharLiteralContext *_localctx = _tracker.createInstance<CharLiteralContext>(_ctx, getState());
  enterRule(_localctx, 36, RiddleParser::RuleCharLiteral);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(231);
    match(RiddleParser::CharacterLiteral);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FloatLiteralContext ------------------------------------------------------------------

RiddleParser::FloatLiteralContext::FloatLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RiddleParser::FloatLiteralContext::FloatingLiteral() {
  return getToken(RiddleParser::FloatingLiteral, 0);
}


size_t RiddleParser::FloatLiteralContext::getRuleIndex() const {
  return RiddleParser::RuleFloatLiteral;
}

void RiddleParser::FloatLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFloatLiteral(this);
}

void RiddleParser::FloatLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFloatLiteral(this);
}


std::any RiddleParser::FloatLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RiddleParserVisitor*>(visitor))
    return parserVisitor->visitFloatLiteral(this);
  else
    return visitor->visitChildren(this);
}

RiddleParser::FloatLiteralContext* RiddleParser::floatLiteral() {
  FloatLiteralContext *_localctx = _tracker.createInstance<FloatLiteralContext>(_ctx, getState());
  enterRule(_localctx, 38, RiddleParser::RuleFloatLiteral);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(233);
    match(RiddleParser::FloatingLiteral);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StrLiteralContext ------------------------------------------------------------------

RiddleParser::StrLiteralContext::StrLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RiddleParser::StrLiteralContext::StringLiteral() {
  return getToken(RiddleParser::StringLiteral, 0);
}


size_t RiddleParser::StrLiteralContext::getRuleIndex() const {
  return RiddleParser::RuleStrLiteral;
}

void RiddleParser::StrLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStrLiteral(this);
}

void RiddleParser::StrLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStrLiteral(this);
}


std::any RiddleParser::StrLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RiddleParserVisitor*>(visitor))
    return parserVisitor->visitStrLiteral(this);
  else
    return visitor->visitChildren(this);
}

RiddleParser::StrLiteralContext* RiddleParser::strLiteral() {
  StrLiteralContext *_localctx = _tracker.createInstance<StrLiteralContext>(_ctx, getState());
  enterRule(_localctx, 40, RiddleParser::RuleStrLiteral);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(235);
    match(RiddleParser::StringLiteral);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BoolLiteralContext ------------------------------------------------------------------

RiddleParser::BoolLiteralContext::BoolLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RiddleParser::BoolLiteralContext::True_() {
  return getToken(RiddleParser::True_, 0);
}

tree::TerminalNode* RiddleParser::BoolLiteralContext::False_() {
  return getToken(RiddleParser::False_, 0);
}


size_t RiddleParser::BoolLiteralContext::getRuleIndex() const {
  return RiddleParser::RuleBoolLiteral;
}

void RiddleParser::BoolLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBoolLiteral(this);
}

void RiddleParser::BoolLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBoolLiteral(this);
}


std::any RiddleParser::BoolLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RiddleParserVisitor*>(visitor))
    return parserVisitor->visitBoolLiteral(this);
  else
    return visitor->visitChildren(this);
}

RiddleParser::BoolLiteralContext* RiddleParser::boolLiteral() {
  BoolLiteralContext *_localctx = _tracker.createInstance<BoolLiteralContext>(_ctx, getState());
  enterRule(_localctx, 42, RiddleParser::RuleBoolLiteral);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(237);
    _la = _input->LA(1);
    if (!(_la == RiddleParser::True_

    || _la == RiddleParser::False_)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

void RiddleParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  riddleparserParserInitialize();
#else
  ::antlr4::internal::call_once(riddleparserParserOnceFlag, riddleparserParserInitialize);
#endif
}
