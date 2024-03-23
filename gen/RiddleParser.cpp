
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
            "program", "newline_statment", "statment", "print", "primaryExpression",
            "idExpression", "variableDefine", "ifExpression", "while", "funcDefine",
            "funcBody", "block", "expression", "typeLiteral", "basicType", "literal",
            "strLiteral", "charLiteral", "intLiteral", "floatLiteral", "boolenLiteral"
    },
    std::vector<std::string>{
            "", "'var'", "'val'", "'fun'", "'if'", "'else'", "'false'", "'true'",
            "'while'", "'print'", "'int'", "'float'", "'char'", "'bool'", "'string'",
            "'('", "')'", "'['", "']'", "'{'", "'}'", "'+'", "'-'", "'*'", "'/'",
            "'%'", "'^'", "'&'", "'|'", "'~'", "'!'", "'='", "'<'", "'>'", "'<<'",
            "'>>'", "'+='", "'-='", "'*='", "'/='", "'%='", "'^='", "'&='", "'|='",
            "'<<='", "'>>='", "'=='", "'!='", "'<='", "'>='", "", "", "'++'",
            "'--'", "','", "'\\u003F'", "':'", "';'", "'.'", "", "", "", "", "",
            "", "'r'", "", "", "", "", "", "'\\n'"
    },
    std::vector<std::string>{
            "", "Var", "Val", "Fun", "If", "Else", "False", "True", "While", "Print",
            "Int", "Float", "Char", "Boolen", "String", "LeftParen", "RightParen",
            "LeftBracket", "RightBracket", "LeftBrace", "RightBrace", "Plus",
            "Minus", "Star", "Div", "Mod", "Caret", "And", "Or", "Tilde", "Not",
            "Assign", "Less", "Greater", "LeftShift", "RightShift", "PlusAssign",
            "MinusAssign", "StarAssign", "DivAssign", "ModAssign", "XorAssign",
            "AndAssign", "OrAssign", "LeftShiftAssign", "RightShiftAssign", "Equal",
            "NotEqual", "LessEqual", "GreaterEqual", "AndAnd", "OrOr", "PlusPlus",
            "MinusMinus", "Comma", "Question", "Colon", "Semi", "Dot", "IntegerLiteral",
            "DecimalSequence", "OctalSequence", "BinarySequence", "HexadecimalSequence",
            "StringLiteral", "StringPrefix", "CharLiteral", "EscapeCharacter",
            "FloatLiteral", "Identfier", "Whitespace", "NewLine", "Newline", "BlockComment",
            "LineComment"
    }
  );
  static const int32_t serializedATNSegment[] = {
          4, 1, 74, 311, 2, 0, 7, 0, 2, 1, 7, 1, 2, 2, 7, 2, 2, 3, 7, 3, 2, 4, 7, 4, 2, 5, 7, 5, 2, 6, 7, 6, 2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
          14, 2, 15, 7, 15, 2, 16, 7, 16, 2, 17, 7, 17, 2, 18, 7, 18, 2, 19, 7, 19, 2, 20, 7, 20, 1, 0, 5,
          0, 44, 8, 0, 10, 0, 12, 0, 47, 9, 0, 1, 0, 3, 0, 50, 8, 0, 1, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 3, 1,
          58, 8, 1, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 3, 2, 68, 8, 2, 1, 2, 1, 2, 1, 2, 3, 2, 73,
          8, 2, 5, 2, 75, 8, 2, 10, 2, 12, 2, 78, 9, 2, 1, 3, 1, 3, 1, 3, 1, 3, 1, 3, 1, 4, 1, 4, 1, 4, 1, 4, 1,
          4, 1, 4, 1, 4, 3, 4, 92, 8, 4, 1, 5, 1, 5, 1, 5, 1, 5, 1, 5, 1, 5, 5, 5, 100, 8, 5, 10, 5, 12, 5, 103,
          9, 5, 1, 6, 1, 6, 1, 6, 1, 6, 3, 6, 109, 8, 6, 1, 6, 1, 6, 1, 6, 1, 6, 3, 6, 115, 8, 6, 5, 6, 117, 8,
          6, 10, 6, 12, 6, 120, 9, 6, 1, 7, 1, 7, 1, 7, 1, 7, 1, 7, 1, 7, 1, 7, 3, 7, 129, 8, 7, 1, 8, 1, 8, 1,
          8, 1, 8, 1, 8, 1, 8, 1, 9, 1, 9, 1, 9, 1, 9, 1, 9, 1, 9, 5, 9, 143, 8, 9, 10, 9, 12, 9, 146, 9, 9, 1,
          9, 1, 9, 1, 9, 1, 10, 1, 10, 5, 10, 153, 8, 10, 10, 10, 12, 10, 156, 9, 10, 1, 10, 1, 10, 1, 11,
          1, 11, 5, 11, 162, 8, 11, 10, 11, 12, 11, 165, 9, 11, 1, 11, 1, 11, 1, 12, 1, 12, 1, 12, 1, 12,
          1, 12, 1, 12, 1, 12, 1, 12, 1, 12, 1, 12, 1, 12, 1, 12, 1, 12, 1, 12, 1, 12, 1, 12, 1, 12, 1, 12,
          1, 12, 1, 12, 1, 12, 1, 12, 1, 12, 1, 12, 1, 12, 1, 12, 1, 12, 3, 12, 196, 8, 12, 1, 12, 1, 12,
          1, 12, 1, 12, 1, 12, 1, 12, 1, 12, 1, 12, 1, 12, 1, 12, 1, 12, 1, 12, 1, 12, 1, 12, 1, 12, 1, 12,
          1, 12, 1, 12, 1, 12, 1, 12, 1, 12, 1, 12, 1, 12, 1, 12, 1, 12, 1, 12, 1, 12, 1, 12, 1, 12, 1, 12,
          1, 12, 1, 12, 1, 12, 1, 12, 1, 12, 1, 12, 1, 12, 1, 12, 1, 12, 1, 12, 1, 12, 1, 12, 1, 12, 1, 12,
          1, 12, 1, 12, 1, 12, 1, 12, 1, 12, 1, 12, 1, 12, 1, 12, 1, 12, 1, 12, 1, 12, 1, 12, 1, 12, 1, 12,
          1, 12, 1, 12, 1, 12, 1, 12, 1, 12, 1, 12, 1, 12, 1, 12, 1, 12, 1, 12, 1, 12, 1, 12, 1, 12, 1, 12,
          1, 12, 1, 12, 1, 12, 1, 12, 1, 12, 1, 12, 1, 12, 1, 12, 1, 12, 1, 12, 1, 12, 1, 12, 1, 12, 1, 12,
          1, 12, 5, 12, 285, 8, 12, 10, 12, 12, 12, 288, 9, 12, 1, 13, 1, 13, 1, 14, 1, 14, 1, 15, 1, 15,
          1, 15, 1, 15, 1, 15, 3, 15, 299, 8, 15, 1, 16, 1, 16, 1, 17, 1, 17, 1, 18, 1, 18, 1, 19, 1, 19,
          1, 20, 1, 20, 1, 20, 0, 3, 4, 10, 24, 21, 0, 2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28,
          30, 32, 34, 36, 38, 40, 0, 3, 1, 0, 1, 2, 1, 0, 10, 14, 1, 0, 6, 7, 354, 0, 45, 1, 0, 0, 0, 2, 57,
          1, 0, 0, 0, 4, 67, 1, 0, 0, 0, 6, 79, 1, 0, 0, 0, 8, 91, 1, 0, 0, 0, 10, 93, 1, 0, 0, 0, 12, 104, 1,
          0, 0, 0, 14, 121, 1, 0, 0, 0, 16, 130, 1, 0, 0, 0, 18, 136, 1, 0, 0, 0, 20, 150, 1, 0, 0, 0, 22,
          159, 1, 0, 0, 0, 24, 195, 1, 0, 0, 0, 26, 289, 1, 0, 0, 0, 28, 291, 1, 0, 0, 0, 30, 298, 1, 0, 0,
          0, 32, 300, 1, 0, 0, 0, 34, 302, 1, 0, 0, 0, 36, 304, 1, 0, 0, 0, 38, 306, 1, 0, 0, 0, 40, 308,
          1, 0, 0, 0, 42, 44, 3, 2, 1, 0, 43, 42, 1, 0, 0, 0, 44, 47, 1, 0, 0, 0, 45, 43, 1, 0, 0, 0, 45, 46,
          1, 0, 0, 0, 46, 49, 1, 0, 0, 0, 47, 45, 1, 0, 0, 0, 48, 50, 3, 4, 2, 0, 49, 48, 1, 0, 0, 0, 49, 50,
          1, 0, 0, 0, 50, 51, 1, 0, 0, 0, 51, 52, 5, 0, 0, 1, 52, 1, 1, 0, 0, 0, 53, 54, 3, 4, 2, 0, 54, 55,
          5, 71, 0, 0, 55, 58, 1, 0, 0, 0, 56, 58, 5, 71, 0, 0, 57, 53, 1, 0, 0, 0, 57, 56, 1, 0, 0, 0, 58,
          3, 1, 0, 0, 0, 59, 60, 6, 2, -1, 0, 60, 68, 3, 12, 6, 0, 61, 68, 3, 24, 12, 0, 62, 68, 3, 22, 11,
          0, 63, 68, 3, 18, 9, 0, 64, 68, 3, 16, 8, 0, 65, 68, 3, 6, 3, 0, 66, 68, 5, 57, 0, 0, 67, 59, 1,
          0, 0, 0, 67, 61, 1, 0, 0, 0, 67, 62, 1, 0, 0, 0, 67, 63, 1, 0, 0, 0, 67, 64, 1, 0, 0, 0, 67, 65, 1,
          0, 0, 0, 67, 66, 1, 0, 0, 0, 68, 76, 1, 0, 0, 0, 69, 70, 10, 2, 0, 0, 70, 72, 5, 57, 0, 0, 71, 73,
          3, 4, 2, 0, 72, 71, 1, 0, 0, 0, 72, 73, 1, 0, 0, 0, 73, 75, 1, 0, 0, 0, 74, 69, 1, 0, 0, 0, 75, 78,
          1, 0, 0, 0, 76, 74, 1, 0, 0, 0, 76, 77, 1, 0, 0, 0, 77, 5, 1, 0, 0, 0, 78, 76, 1, 0, 0, 0, 79, 80,
          5, 9, 0, 0, 80, 81, 5, 15, 0, 0, 81, 82, 3, 24, 12, 0, 82, 83, 5, 16, 0, 0, 83, 7, 1, 0, 0, 0, 84,
          92, 3, 30, 15, 0, 85, 92, 3, 10, 5, 0, 86, 87, 5, 15, 0, 0, 87, 88, 3, 24, 12, 0, 88, 89, 5, 16,
          0, 0, 89, 92, 1, 0, 0, 0, 90, 92, 3, 14, 7, 0, 91, 84, 1, 0, 0, 0, 91, 85, 1, 0, 0, 0, 91, 86, 1,
          0, 0, 0, 91, 90, 1, 0, 0, 0, 92, 9, 1, 0, 0, 0, 93, 94, 6, 5, -1, 0, 94, 95, 5, 69, 0, 0, 95, 101,
          1, 0, 0, 0, 96, 97, 10, 1, 0, 0, 97, 98, 5, 58, 0, 0, 98, 100, 3, 10, 5, 2, 99, 96, 1, 0, 0, 0, 100,
          103, 1, 0, 0, 0, 101, 99, 1, 0, 0, 0, 101, 102, 1, 0, 0, 0, 102, 11, 1, 0, 0, 0, 103, 101, 1, 0,
          0, 0, 104, 105, 7, 0, 0, 0, 105, 108, 5, 69, 0, 0, 106, 107, 5, 31, 0, 0, 107, 109, 3, 24, 12,
          0, 108, 106, 1, 0, 0, 0, 108, 109, 1, 0, 0, 0, 109, 118, 1, 0, 0, 0, 110, 111, 5, 54, 0, 0, 111,
          114, 5, 69, 0, 0, 112, 113, 5, 31, 0, 0, 113, 115, 3, 24, 12, 0, 114, 112, 1, 0, 0, 0, 114, 115,
          1, 0, 0, 0, 115, 117, 1, 0, 0, 0, 116, 110, 1, 0, 0, 0, 117, 120, 1, 0, 0, 0, 118, 116, 1, 0, 0,
          0, 118, 119, 1, 0, 0, 0, 119, 13, 1, 0, 0, 0, 120, 118, 1, 0, 0, 0, 121, 122, 5, 4, 0, 0, 122,
          123, 5, 15, 0, 0, 123, 124, 3, 24, 12, 0, 124, 125, 5, 16, 0, 0, 125, 128, 3, 4, 2, 0, 126, 127,
          5, 5, 0, 0, 127, 129, 3, 4, 2, 0, 128, 126, 1, 0, 0, 0, 128, 129, 1, 0, 0, 0, 129, 15, 1, 0, 0,
          0, 130, 131, 5, 8, 0, 0, 131, 132, 5, 15, 0, 0, 132, 133, 3, 24, 12, 0, 133, 134, 5, 16, 0, 0,
          134, 135, 3, 4, 2, 0, 135, 17, 1, 0, 0, 0, 136, 137, 5, 3, 0, 0, 137, 138, 5, 69, 0, 0, 138, 144,
          5, 15, 0, 0, 139, 140, 5, 69, 0, 0, 140, 141, 5, 56, 0, 0, 141, 143, 3, 26, 13, 0, 142, 139,
          1, 0, 0, 0, 143, 146, 1, 0, 0, 0, 144, 142, 1, 0, 0, 0, 144, 145, 1, 0, 0, 0, 145, 147, 1, 0, 0,
          0, 146, 144, 1, 0, 0, 0, 147, 148, 5, 16, 0, 0, 148, 149, 3, 20, 10, 0, 149, 19, 1, 0, 0, 0, 150,
          154, 5, 19, 0, 0, 151, 153, 3, 4, 2, 0, 152, 151, 1, 0, 0, 0, 153, 156, 1, 0, 0, 0, 154, 152,
          1, 0, 0, 0, 154, 155, 1, 0, 0, 0, 155, 157, 1, 0, 0, 0, 156, 154, 1, 0, 0, 0, 157, 158, 5, 20,
          0, 0, 158, 21, 1, 0, 0, 0, 159, 163, 5, 19, 0, 0, 160, 162, 3, 4, 2, 0, 161, 160, 1, 0, 0, 0, 162,
          165, 1, 0, 0, 0, 163, 161, 1, 0, 0, 0, 163, 164, 1, 0, 0, 0, 164, 166, 1, 0, 0, 0, 165, 163, 1,
          0, 0, 0, 166, 167, 5, 20, 0, 0, 167, 23, 1, 0, 0, 0, 168, 169, 6, 12, -1, 0, 169, 196, 3, 8, 4,
          0, 170, 171, 3, 10, 5, 0, 171, 172, 5, 17, 0, 0, 172, 173, 3, 24, 12, 0, 173, 174, 5, 18, 0,
          0, 174, 196, 1, 0, 0, 0, 175, 176, 3, 10, 5, 0, 176, 177, 5, 52, 0, 0, 177, 196, 1, 0, 0, 0, 178,
          179, 3, 10, 5, 0, 179, 180, 5, 53, 0, 0, 180, 196, 1, 0, 0, 0, 181, 182, 5, 52, 0, 0, 182, 196,
          3, 10, 5, 0, 183, 184, 5, 53, 0, 0, 184, 196, 3, 10, 5, 0, 185, 186, 5, 21, 0, 0, 186, 196, 3,
          24, 12, 34, 187, 188, 5, 22, 0, 0, 188, 196, 3, 24, 12, 33, 189, 190, 5, 30, 0, 0, 190, 196,
          3, 24, 12, 32, 191, 192, 5, 29, 0, 0, 192, 196, 3, 24, 12, 31, 193, 194, 5, 27, 0, 0, 194, 196,
          3, 10, 5, 0, 195, 168, 1, 0, 0, 0, 195, 170, 1, 0, 0, 0, 195, 175, 1, 0, 0, 0, 195, 178, 1, 0,
          0, 0, 195, 181, 1, 0, 0, 0, 195, 183, 1, 0, 0, 0, 195, 185, 1, 0, 0, 0, 195, 187, 1, 0, 0, 0, 195,
          189, 1, 0, 0, 0, 195, 191, 1, 0, 0, 0, 195, 193, 1, 0, 0, 0, 196, 286, 1, 0, 0, 0, 197, 198, 10,
          29, 0, 0, 198, 199, 5, 25, 0, 0, 199, 285, 3, 24, 12, 30, 200, 201, 10, 28, 0, 0, 201, 202,
          5, 23, 0, 0, 202, 285, 3, 24, 12, 29, 203, 204, 10, 27, 0, 0, 204, 205, 5, 24, 0, 0, 205, 285,
          3, 24, 12, 28, 206, 207, 10, 26, 0, 0, 207, 208, 5, 21, 0, 0, 208, 285, 3, 24, 12, 27, 209,
          210, 10, 25, 0, 0, 210, 211, 5, 22, 0, 0, 211, 285, 3, 24, 12, 26, 212, 213, 10, 24, 0, 0, 213,
          214, 5, 34, 0, 0, 214, 285, 3, 24, 12, 25, 215, 216, 10, 23, 0, 0, 216, 217, 5, 35, 0, 0, 217,
          285, 3, 24, 12, 24, 218, 219, 10, 22, 0, 0, 219, 220, 5, 32, 0, 0, 220, 285, 3, 24, 12, 23,
          221, 222, 10, 21, 0, 0, 222, 223, 5, 33, 0, 0, 223, 285, 3, 24, 12, 22, 224, 225, 10, 20, 0,
          0, 225, 226, 5, 48, 0, 0, 226, 285, 3, 24, 12, 21, 227, 228, 10, 19, 0, 0, 228, 229, 5, 49,
          0, 0, 229, 285, 3, 24, 12, 20, 230, 231, 10, 18, 0, 0, 231, 232, 5, 46, 0, 0, 232, 285, 3, 24,
          12, 19, 233, 234, 10, 17, 0, 0, 234, 235, 5, 47, 0, 0, 235, 285, 3, 24, 12, 18, 236, 237, 10,
          16, 0, 0, 237, 238, 5, 27, 0, 0, 238, 285, 3, 24, 12, 17, 239, 240, 10, 15, 0, 0, 240, 241,
          5, 26, 0, 0, 241, 285, 3, 24, 12, 16, 242, 243, 10, 14, 0, 0, 243, 244, 5, 28, 0, 0, 244, 285,
          3, 24, 12, 15, 245, 246, 10, 13, 0, 0, 246, 247, 5, 50, 0, 0, 247, 285, 3, 24, 12, 14, 248,
          249, 10, 12, 0, 0, 249, 250, 5, 51, 0, 0, 250, 285, 3, 24, 12, 13, 251, 252, 10, 11, 0, 0, 252,
          253, 5, 31, 0, 0, 253, 285, 3, 24, 12, 11, 254, 255, 10, 10, 0, 0, 255, 256, 5, 36, 0, 0, 256,
          285, 3, 24, 12, 10, 257, 258, 10, 9, 0, 0, 258, 259, 5, 37, 0, 0, 259, 285, 3, 24, 12, 9, 260,
          261, 10, 8, 0, 0, 261, 262, 5, 39, 0, 0, 262, 285, 3, 24, 12, 8, 263, 264, 10, 7, 0, 0, 264,
          265, 5, 40, 0, 0, 265, 285, 3, 24, 12, 7, 266, 267, 10, 6, 0, 0, 267, 268, 5, 41, 0, 0, 268,
          285, 3, 24, 12, 6, 269, 270, 10, 5, 0, 0, 270, 271, 5, 42, 0, 0, 271, 285, 3, 24, 12, 5, 272,
          273, 10, 4, 0, 0, 273, 274, 5, 43, 0, 0, 274, 285, 3, 24, 12, 4, 275, 276, 10, 3, 0, 0, 276,
          277, 5, 44, 0, 0, 277, 285, 3, 24, 12, 3, 278, 279, 10, 2, 0, 0, 279, 280, 5, 45, 0, 0, 280,
          285, 3, 24, 12, 2, 281, 282, 10, 1, 0, 0, 282, 283, 5, 54, 0, 0, 283, 285, 3, 24, 12, 2, 284,
          197, 1, 0, 0, 0, 284, 200, 1, 0, 0, 0, 284, 203, 1, 0, 0, 0, 284, 206, 1, 0, 0, 0, 284, 209, 1,
          0, 0, 0, 284, 212, 1, 0, 0, 0, 284, 215, 1, 0, 0, 0, 284, 218, 1, 0, 0, 0, 284, 221, 1, 0, 0, 0,
          284, 224, 1, 0, 0, 0, 284, 227, 1, 0, 0, 0, 284, 230, 1, 0, 0, 0, 284, 233, 1, 0, 0, 0, 284, 236,
          1, 0, 0, 0, 284, 239, 1, 0, 0, 0, 284, 242, 1, 0, 0, 0, 284, 245, 1, 0, 0, 0, 284, 248, 1, 0, 0,
          0, 284, 251, 1, 0, 0, 0, 284, 254, 1, 0, 0, 0, 284, 257, 1, 0, 0, 0, 284, 260, 1, 0, 0, 0, 284,
          263, 1, 0, 0, 0, 284, 266, 1, 0, 0, 0, 284, 269, 1, 0, 0, 0, 284, 272, 1, 0, 0, 0, 284, 275, 1,
          0, 0, 0, 284, 278, 1, 0, 0, 0, 284, 281, 1, 0, 0, 0, 285, 288, 1, 0, 0, 0, 286, 284, 1, 0, 0, 0,
          286, 287, 1, 0, 0, 0, 287, 25, 1, 0, 0, 0, 288, 286, 1, 0, 0, 0, 289, 290, 3, 28, 14, 0, 290,
          27, 1, 0, 0, 0, 291, 292, 7, 1, 0, 0, 292, 29, 1, 0, 0, 0, 293, 299, 3, 36, 18, 0, 294, 299, 3,
          32, 16, 0, 295, 299, 3, 34, 17, 0, 296, 299, 3, 38, 19, 0, 297, 299, 3, 40, 20, 0, 298, 293,
          1, 0, 0, 0, 298, 294, 1, 0, 0, 0, 298, 295, 1, 0, 0, 0, 298, 296, 1, 0, 0, 0, 298, 297, 1, 0, 0,
          0, 299, 31, 1, 0, 0, 0, 300, 301, 5, 64, 0, 0, 301, 33, 1, 0, 0, 0, 302, 303, 5, 66, 0, 0, 303,
          35, 1, 0, 0, 0, 304, 305, 5, 59, 0, 0, 305, 37, 1, 0, 0, 0, 306, 307, 5, 68, 0, 0, 307, 39, 1,
          0, 0, 0, 308, 309, 7, 2, 0, 0, 309, 41, 1, 0, 0, 0, 19, 45, 49, 57, 67, 72, 76, 91, 101, 108,
          114, 118, 128, 144, 154, 163, 195, 284, 286, 298
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
    for(size_t i=0;i < count;i++){
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

tree::TerminalNode *RiddleParser::ProgramContext::EOF(){
    return getToken(RiddleParser::EOF, 0);
}

std::vector<RiddleParser::Newline_statmentContext *> RiddleParser::ProgramContext::newline_statment(){
    return getRuleContexts<RiddleParser::Newline_statmentContext>();
}

RiddleParser::Newline_statmentContext *RiddleParser::ProgramContext::newline_statment(size_t i){
    return getRuleContext<RiddleParser::Newline_statmentContext>(i);
}

RiddleParser::StatmentContext *RiddleParser::ProgramContext::statment(){
    return getRuleContext<RiddleParser::StatmentContext>(0);
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
      size_t alt;
    enterOuterAlt(_localctx, 1);
      setState(45);
      _errHandler->sync(this);
      alt=getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
      while(alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER){
          if(alt == 1){
              setState(42);
              newline_statment();
          }
          setState(47);
          _errHandler->sync(this);
          alt=getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
      }
      setState(49);
    _errHandler->sync(this);

    _la = _input->LA(1);
      if((((_la & ~0x3fULL) == 0) &&
          ((1ULL << _la) & 734086741013070814) != 0) || ((((_la-64) & ~0x3fULL) == 0) &&
                                                         ((1ULL << (_la-64)) & 53) != 0)){
          setState(48);
          statment(0);
      }
      setState(51);
      match(RiddleParser::EOF);

  }
  catch(RecognitionException &e){
      _errHandler->reportError(this, e);
      _localctx->exception=std::current_exception();
      _errHandler->recover(this, _localctx->exception);
  }

    return _localctx;
}

//----------------- Newline_statmentContext ------------------------------------------------------------------

RiddleParser::Newline_statmentContext::Newline_statmentContext(ParserRuleContext *parent, size_t invokingState)
        :ParserRuleContext(parent, invokingState){
}

RiddleParser::StatmentContext *RiddleParser::Newline_statmentContext::statment(){
    return getRuleContext<RiddleParser::StatmentContext>(0);
}

tree::TerminalNode *RiddleParser::Newline_statmentContext::NewLine(){
    return getToken(RiddleParser::NewLine, 0);
}


size_t RiddleParser::Newline_statmentContext::getRuleIndex() const{
    return RiddleParser::RuleNewline_statment;
}

void RiddleParser::Newline_statmentContext::enterRule(tree::ParseTreeListener *listener){
    auto parserListener=dynamic_cast<RiddleParserListener *>(listener);
    if(parserListener != nullptr)
        parserListener->enterNewline_statment(this);
}

void RiddleParser::Newline_statmentContext::exitRule(tree::ParseTreeListener *listener){
    auto parserListener=dynamic_cast<RiddleParserListener *>(listener);
    if(parserListener != nullptr)
        parserListener->exitNewline_statment(this);
}


std::any RiddleParser::Newline_statmentContext::accept(tree::ParseTreeVisitor *visitor){
    if(auto parserVisitor=dynamic_cast<RiddleParserVisitor *>(visitor))
        return parserVisitor->visitNewline_statment(this);
    else
        return visitor->visitChildren(this);
}

RiddleParser::Newline_statmentContext *RiddleParser::newline_statment(){
    Newline_statmentContext *_localctx=_tracker.createInstance<Newline_statmentContext>(_ctx, getState());
    enterRule(_localctx, 2, RiddleParser::RuleNewline_statment);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit=finally([=]{
#endif
        exitRule();
    });
    try{
        setState(57);
        _errHandler->sync(this);
        switch(_input->LA(1)){
            case RiddleParser::Var:
            case RiddleParser::Val:
            case RiddleParser::Fun:
            case RiddleParser::If:
            case RiddleParser::False:
            case RiddleParser::True:
            case RiddleParser::While:
            case RiddleParser::Print:
            case RiddleParser::LeftParen:
            case RiddleParser::LeftBrace:
            case RiddleParser::Plus:
            case RiddleParser::Minus:
            case RiddleParser::And:
            case RiddleParser::Tilde:
            case RiddleParser::Not:
            case RiddleParser::PlusPlus:
            case RiddleParser::MinusMinus:
            case RiddleParser::Semi:
            case RiddleParser::IntegerLiteral:
            case RiddleParser::StringLiteral:
            case RiddleParser::CharLiteral:
            case RiddleParser::FloatLiteral:
            case RiddleParser::Identfier:{
                enterOuterAlt(_localctx, 1);
                setState(53);
                statment(0);
                setState(54);
                match(RiddleParser::NewLine);
                break;
            }

            case RiddleParser::NewLine:{
                enterOuterAlt(_localctx, 2);
                setState(56);
                match(RiddleParser::NewLine);
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

//----------------- StatmentContext ------------------------------------------------------------------

RiddleParser::StatmentContext::StatmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

RiddleParser::VariableDefineContext *RiddleParser::StatmentContext::variableDefine(){
    return getRuleContext<RiddleParser::VariableDefineContext>(0);
}

RiddleParser::ExpressionContext *RiddleParser::StatmentContext::expression(){
    return getRuleContext<RiddleParser::ExpressionContext>(0);
}

RiddleParser::BlockContext *RiddleParser::StatmentContext::block(){
    return getRuleContext<RiddleParser::BlockContext>(0);
}

RiddleParser::FuncDefineContext *RiddleParser::StatmentContext::funcDefine(){
    return getRuleContext<RiddleParser::FuncDefineContext>(0);
}

RiddleParser::WhileContext *RiddleParser::StatmentContext::while_(){
    return getRuleContext<RiddleParser::WhileContext>(0);
}

RiddleParser::PrintContext *RiddleParser::StatmentContext::print(){
    return getRuleContext<RiddleParser::PrintContext>(0);
}

tree::TerminalNode* RiddleParser::StatmentContext::Semi() {
  return getToken(RiddleParser::Semi, 0);
}

std::vector<RiddleParser::StatmentContext *> RiddleParser::StatmentContext::statment(){
    return getRuleContexts<RiddleParser::StatmentContext>();
}

RiddleParser::StatmentContext *RiddleParser::StatmentContext::statment(size_t i){
    return getRuleContext<RiddleParser::StatmentContext>(i);
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
    return statment(0);
}

RiddleParser::StatmentContext *RiddleParser::statment(int precedence){
    ParserRuleContext *parentContext=_ctx;
    size_t parentState=getState();
    RiddleParser::StatmentContext *_localctx=_tracker.createInstance<StatmentContext>(_ctx, parentState);
    RiddleParser::StatmentContext *previousContext=_localctx;
    (void)previousContext; // Silence compiler, in case the context is not used by generated code.
    size_t startState=4;
    enterRecursionRule(_localctx, 4, RiddleParser::RuleStatment, precedence);


#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
      unrollRecursionContexts(parentContext);
  });
  try {
      size_t alt;
      enterOuterAlt(_localctx, 1);
      setState(67);
    _errHandler->sync(this);
      switch(_input->LA(1)){
          case RiddleParser::Var:
          case RiddleParser::Val:{
              setState(60);
              variableDefine();
              break;
          }

          case RiddleParser::If:
          case RiddleParser::False:
          case RiddleParser::True:
          case RiddleParser::LeftParen:
          case RiddleParser::Plus:
          case RiddleParser::Minus:
          case RiddleParser::And:
          case RiddleParser::Tilde:
          case RiddleParser::Not:
          case RiddleParser::PlusPlus:
          case RiddleParser::MinusMinus:
          case RiddleParser::IntegerLiteral:
          case RiddleParser::StringLiteral:
          case RiddleParser::CharLiteral:
          case RiddleParser::FloatLiteral:
          case RiddleParser::Identfier:{
              setState(61);
              expression(0);
              break;
          }

          case RiddleParser::LeftBrace:{
              setState(62);
              block();
              break;
          }

          case RiddleParser::Fun:{
              setState(63);
              funcDefine();
              break;
          }

          case RiddleParser::While:{
              setState(64);
              while_();
              break;
          }

          case RiddleParser::Print:{
              setState(65);
              print();
              break;
          }

          case RiddleParser::Semi:{
              setState(66);
        match(RiddleParser::Semi);
        break;
          }

          default:
              throw NoViableAltException(this);
      }
      _ctx->stop=_input->LT(-1);
      setState(76);
      _errHandler->sync(this);
      alt=getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
      while(alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER){
          if(alt == 1){
              if(!_parseListeners.empty())
                  triggerExitRuleEvent();
              previousContext=_localctx;
              _localctx=_tracker.createInstance<StatmentContext>(parentContext, parentState);
              pushNewRecursionContext(_localctx, startState, RuleStatment);
              setState(69);

              if(!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
              setState(70);
              match(RiddleParser::Semi);
              setState(72);
              _errHandler->sync(this);

              switch(getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)){
                  case 1:{
                      setState(71);
                      statment(0);
                      break;
                  }

                  default:
                      break;
              }
          }
          setState(78);
          _errHandler->sync(this);
          alt=getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
      }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
    return _localctx;
}

//----------------- PrintContext ------------------------------------------------------------------

RiddleParser::PrintContext::PrintContext(ParserRuleContext *parent, size_t invokingState)
        :ParserRuleContext(parent, invokingState){
}

tree::TerminalNode *RiddleParser::PrintContext::Print(){
    return getToken(RiddleParser::Print, 0);
}

tree::TerminalNode *RiddleParser::PrintContext::LeftParen(){
    return getToken(RiddleParser::LeftParen, 0);
}

RiddleParser::ExpressionContext *RiddleParser::PrintContext::expression(){
    return getRuleContext<RiddleParser::ExpressionContext>(0);
}

tree::TerminalNode *RiddleParser::PrintContext::RightParen(){
    return getToken(RiddleParser::RightParen, 0);
}


size_t RiddleParser::PrintContext::getRuleIndex() const{
    return RiddleParser::RulePrint;
}

void RiddleParser::PrintContext::enterRule(tree::ParseTreeListener *listener){
    auto parserListener=dynamic_cast<RiddleParserListener *>(listener);
    if(parserListener != nullptr)
        parserListener->enterPrint(this);
}

void RiddleParser::PrintContext::exitRule(tree::ParseTreeListener *listener){
    auto parserListener=dynamic_cast<RiddleParserListener *>(listener);
    if(parserListener != nullptr)
        parserListener->exitPrint(this);
}


std::any RiddleParser::PrintContext::accept(tree::ParseTreeVisitor *visitor){
    if(auto parserVisitor=dynamic_cast<RiddleParserVisitor *>(visitor))
        return parserVisitor->visitPrint(this);
    else
        return visitor->visitChildren(this);
}

RiddleParser::PrintContext *RiddleParser::print(){
    PrintContext *_localctx=_tracker.createInstance<PrintContext>(_ctx, getState());
    enterRule(_localctx, 6, RiddleParser::RulePrint);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit=finally([=]{
#endif
        exitRule();
    });
    try{
        enterOuterAlt(_localctx, 1);
        setState(79);
        match(RiddleParser::Print);
        setState(80);
        match(RiddleParser::LeftParen);
        setState(81);
        expression(0);
        setState(82);
        match(RiddleParser::RightParen);

    }
    catch(RecognitionException &e){
        _errHandler->reportError(this, e);
        _localctx->exception=std::current_exception();
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

tree::TerminalNode *RiddleParser::PrimaryExpressionContext::LeftParen(){
    return getToken(RiddleParser::LeftParen, 0);
}

RiddleParser::ExpressionContext *RiddleParser::PrimaryExpressionContext::expression(){
    return getRuleContext<RiddleParser::ExpressionContext>(0);
}

tree::TerminalNode *RiddleParser::PrimaryExpressionContext::RightParen(){
    return getToken(RiddleParser::RightParen, 0);
}

RiddleParser::IfExpressionContext *RiddleParser::PrimaryExpressionContext::ifExpression(){
    return getRuleContext<RiddleParser::IfExpressionContext>(0);
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
    enterRule(_localctx, 8, RiddleParser::RulePrimaryExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
      setState(91);
    _errHandler->sync(this);
      switch(_input->LA(1)){
          case RiddleParser::False:
          case RiddleParser::True:
          case RiddleParser::IntegerLiteral:
          case RiddleParser::StringLiteral:
          case RiddleParser::CharLiteral:
          case RiddleParser::FloatLiteral:{
              enterOuterAlt(_localctx, 1);
              setState(84);
              literal();
              break;
          }

          case RiddleParser::Identfier:{
              enterOuterAlt(_localctx, 2);
              setState(85);
              idExpression(0);
              break;
          }

          case RiddleParser::LeftParen:{
              enterOuterAlt(_localctx, 3);
              setState(86);
              match(RiddleParser::LeftParen);
              setState(87);
              expression(0);
              setState(88);
              match(RiddleParser::RightParen);
              break;
          }

          case RiddleParser::If:{
              enterOuterAlt(_localctx, 4);
              setState(90);
              ifExpression();
              break;
          }

    default:
        throw NoViableAltException(this);
      }

  }
  catch(RecognitionException &e){
      _errHandler->reportError(this, e);
      _localctx->exception=std::current_exception();
      _errHandler->recover(this, _localctx->exception);
  }

    return _localctx;
}

//----------------- IdExpressionContext ------------------------------------------------------------------

RiddleParser::IdExpressionContext::IdExpressionContext(ParserRuleContext *parent, size_t invokingState)
        :ParserRuleContext(parent, invokingState){
}

tree::TerminalNode *RiddleParser::IdExpressionContext::Identfier(){
    return getToken(RiddleParser::Identfier, 0);
}

std::vector<RiddleParser::IdExpressionContext *> RiddleParser::IdExpressionContext::idExpression(){
    return getRuleContexts<RiddleParser::IdExpressionContext>();
}

RiddleParser::IdExpressionContext *RiddleParser::IdExpressionContext::idExpression(size_t i){
    return getRuleContext<RiddleParser::IdExpressionContext>(i);
}

tree::TerminalNode *RiddleParser::IdExpressionContext::Dot(){
    return getToken(RiddleParser::Dot, 0);
}


size_t RiddleParser::IdExpressionContext::getRuleIndex() const{
    return RiddleParser::RuleIdExpression;
}

void RiddleParser::IdExpressionContext::enterRule(tree::ParseTreeListener *listener){
    auto parserListener=dynamic_cast<RiddleParserListener *>(listener);
    if(parserListener != nullptr)
        parserListener->enterIdExpression(this);
}

void RiddleParser::IdExpressionContext::exitRule(tree::ParseTreeListener *listener){
    auto parserListener=dynamic_cast<RiddleParserListener *>(listener);
    if(parserListener != nullptr)
        parserListener->exitIdExpression(this);
}


std::any RiddleParser::IdExpressionContext::accept(tree::ParseTreeVisitor *visitor){
    if(auto parserVisitor=dynamic_cast<RiddleParserVisitor *>(visitor))
        return parserVisitor->visitIdExpression(this);
    else
        return visitor->visitChildren(this);
}


RiddleParser::IdExpressionContext *RiddleParser::idExpression(){
    return idExpression(0);
}

RiddleParser::IdExpressionContext *RiddleParser::idExpression(int precedence){
    ParserRuleContext *parentContext=_ctx;
    size_t parentState=getState();
    RiddleParser::IdExpressionContext *_localctx=_tracker.createInstance<IdExpressionContext>(_ctx, parentState);
    RiddleParser::IdExpressionContext *previousContext=_localctx;
    (void)previousContext; // Silence compiler, in case the context is not used by generated code.
    size_t startState=10;
    enterRecursionRule(_localctx, 10, RiddleParser::RuleIdExpression, precedence);



#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit=finally([=]{
#endif
        unrollRecursionContexts(parentContext);
    });
    try{
        size_t alt;
        enterOuterAlt(_localctx, 1);
        setState(94);
        match(RiddleParser::Identfier);
        _ctx->stop=_input->LT(-1);
        setState(101);
        _errHandler->sync(this);
        alt=getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
        while(alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER){
            if(alt == 1){
                if(!_parseListeners.empty())
                    triggerExitRuleEvent();
                previousContext=_localctx;
                _localctx=_tracker.createInstance<IdExpressionContext>(parentContext, parentState);
                pushNewRecursionContext(_localctx, startState, RuleIdExpression);
        setState(96);

                if(!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(97);
        match(RiddleParser::Dot);
        setState(98);
                idExpression(2);
            }
            setState(103);
            _errHandler->sync(this);
            alt=getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
        }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- VariableDefineContext ------------------------------------------------------------------

RiddleParser::VariableDefineContext::VariableDefineContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode *RiddleParser::VariableDefineContext::Var(){
    return getToken(RiddleParser::Var, 0);
}

tree::TerminalNode *RiddleParser::VariableDefineContext::Val(){
    return getToken(RiddleParser::Val, 0);
}

std::vector<tree::TerminalNode *> RiddleParser::VariableDefineContext::Identfier(){
    return getTokens(RiddleParser::Identfier);
}

tree::TerminalNode *RiddleParser::VariableDefineContext::Identfier(size_t i){
    return getToken(RiddleParser::Identfier, i);
}

std::vector<tree::TerminalNode *> RiddleParser::VariableDefineContext::Comma(){
    return getTokens(RiddleParser::Comma);
}

tree::TerminalNode *RiddleParser::VariableDefineContext::Comma(size_t i){
    return getToken(RiddleParser::Comma, i);
}

std::vector<tree::TerminalNode *> RiddleParser::VariableDefineContext::Assign(){
    return getTokens(RiddleParser::Assign);
}

tree::TerminalNode *RiddleParser::VariableDefineContext::Assign(size_t i){
    return getToken(RiddleParser::Assign, i);
}

std::vector<RiddleParser::ExpressionContext *> RiddleParser::VariableDefineContext::expression(){
    return getRuleContexts<RiddleParser::ExpressionContext>();
}

RiddleParser::ExpressionContext *RiddleParser::VariableDefineContext::expression(size_t i){
    return getRuleContext<RiddleParser::ExpressionContext>(i);
}


size_t RiddleParser::VariableDefineContext::getRuleIndex() const{
    return RiddleParser::RuleVariableDefine;
}

void RiddleParser::VariableDefineContext::enterRule(tree::ParseTreeListener *listener){
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
      parserListener->enterVariableDefine(this);
}

void RiddleParser::VariableDefineContext::exitRule(tree::ParseTreeListener *listener){
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
      parserListener->exitVariableDefine(this);
}


std::any RiddleParser::VariableDefineContext::accept(tree::ParseTreeVisitor *visitor){
  if (auto parserVisitor = dynamic_cast<RiddleParserVisitor*>(visitor))
      return parserVisitor->visitVariableDefine(this);
  else
    return visitor->visitChildren(this);
}

RiddleParser::VariableDefineContext *RiddleParser::variableDefine(){
    VariableDefineContext *_localctx=_tracker.createInstance<VariableDefineContext>(_ctx, getState());
    enterRule(_localctx, 12, RiddleParser::RuleVariableDefine);
    size_t _la=0;

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
      setState(104);
      _la=_input->LA(1);
      if(!(_la == RiddleParser::Var

           || _la == RiddleParser::Val)){
          _errHandler->recoverInline(this);
      } else{
          _errHandler->reportMatch(this);
          consume();
    }

      setState(105);
      match(RiddleParser::Identfier);
      setState(108);
      _errHandler->sync(this);

      switch(getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)){
          case 1:{
              setState(106);
              match(RiddleParser::Assign);
              setState(107);
              expression(0);
              break;
          }

          default:
              break;
      }
      setState(118);
      _errHandler->sync(this);
      alt=getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
      while(alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER){
          if(alt == 1){
              setState(110);
              match(RiddleParser::Comma);

              setState(111);
              match(RiddleParser::Identfier);
              setState(114);
              _errHandler->sync(this);

              switch(getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)){
                  case 1:{
                      setState(112);
                      match(RiddleParser::Assign);
                      setState(113);
                      expression(0);
                      break;
                  }

                  default:
                      break;
              }
          }
          setState(120);
          _errHandler->sync(this);
          alt=getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    }

  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfExpressionContext ------------------------------------------------------------------

RiddleParser::IfExpressionContext::IfExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode *RiddleParser::IfExpressionContext::If(){
    return getToken(RiddleParser::If, 0);
}

tree::TerminalNode *RiddleParser::IfExpressionContext::LeftParen(){
    return getToken(RiddleParser::LeftParen, 0);
}

RiddleParser::ExpressionContext *RiddleParser::IfExpressionContext::expression(){
    return getRuleContext<RiddleParser::ExpressionContext>(0);
}

tree::TerminalNode *RiddleParser::IfExpressionContext::RightParen(){
    return getToken(RiddleParser::RightParen, 0);
}

std::vector<RiddleParser::StatmentContext *> RiddleParser::IfExpressionContext::statment(){
    return getRuleContexts<RiddleParser::StatmentContext>();
}

RiddleParser::StatmentContext *RiddleParser::IfExpressionContext::statment(size_t i){
    return getRuleContext<RiddleParser::StatmentContext>(i);
}

tree::TerminalNode *RiddleParser::IfExpressionContext::Else(){
    return getToken(RiddleParser::Else, 0);
}


size_t RiddleParser::IfExpressionContext::getRuleIndex() const{
    return RiddleParser::RuleIfExpression;
}

void RiddleParser::IfExpressionContext::enterRule(tree::ParseTreeListener *listener){
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
      parserListener->enterIfExpression(this);
}

void RiddleParser::IfExpressionContext::exitRule(tree::ParseTreeListener *listener){
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
      parserListener->exitIfExpression(this);
}


std::any RiddleParser::IfExpressionContext::accept(tree::ParseTreeVisitor *visitor){
  if (auto parserVisitor = dynamic_cast<RiddleParserVisitor*>(visitor))
      return parserVisitor->visitIfExpression(this);
  else
    return visitor->visitChildren(this);
}

RiddleParser::IfExpressionContext *RiddleParser::ifExpression(){
    IfExpressionContext *_localctx=_tracker.createInstance<IfExpressionContext>(_ctx, getState());
    enterRule(_localctx, 14, RiddleParser::RuleIfExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
      enterOuterAlt(_localctx, 1);
      setState(121);
      match(RiddleParser::If);
      setState(122);
      match(RiddleParser::LeftParen);
      setState(123);
      expression(0);
      setState(124);
      match(RiddleParser::RightParen);
      setState(125);
      statment(0);
      setState(128);
      _errHandler->sync(this);

      switch(getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)){
          case 1:{
              setState(126);
              match(RiddleParser::Else);
              setState(127);
              statment(0);
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

//----------------- WhileContext ------------------------------------------------------------------

RiddleParser::WhileContext::WhileContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode *RiddleParser::WhileContext::While(){
    return getToken(RiddleParser::While, 0);
}

tree::TerminalNode *RiddleParser::WhileContext::LeftParen(){
  return getToken(RiddleParser::LeftParen, 0);
}

RiddleParser::ExpressionContext *RiddleParser::WhileContext::expression(){
    return getRuleContext<RiddleParser::ExpressionContext>(0);
}

tree::TerminalNode *RiddleParser::WhileContext::RightParen(){
  return getToken(RiddleParser::RightParen, 0);
}

RiddleParser::StatmentContext *RiddleParser::WhileContext::statment(){
    return getRuleContext<RiddleParser::StatmentContext>(0);
}


size_t RiddleParser::WhileContext::getRuleIndex() const{
    return RiddleParser::RuleWhile;
}

void RiddleParser::WhileContext::enterRule(tree::ParseTreeListener *listener){
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
      parserListener->enterWhile(this);
}

void RiddleParser::WhileContext::exitRule(tree::ParseTreeListener *listener){
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
      parserListener->exitWhile(this);
}


std::any RiddleParser::WhileContext::accept(tree::ParseTreeVisitor *visitor){
  if (auto parserVisitor = dynamic_cast<RiddleParserVisitor*>(visitor))
      return parserVisitor->visitWhile(this);
  else
    return visitor->visitChildren(this);
}

RiddleParser::WhileContext *RiddleParser::while_(){
    WhileContext *_localctx=_tracker.createInstance<WhileContext>(_ctx, getState());
    enterRule(_localctx, 16, RiddleParser::RuleWhile);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
      setState(130);
      match(RiddleParser::While);
      setState(131);
    match(RiddleParser::LeftParen);
      setState(132);
      expression(0);
      setState(133);
    match(RiddleParser::RightParen);
      setState(134);
      statment(0);

  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncDefineContext ------------------------------------------------------------------

RiddleParser::FuncDefineContext::FuncDefineContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode *RiddleParser::FuncDefineContext::Fun(){
    return getToken(RiddleParser::Fun, 0);
}

std::vector<tree::TerminalNode *> RiddleParser::FuncDefineContext::Identfier(){
    return getTokens(RiddleParser::Identfier);
}

tree::TerminalNode *RiddleParser::FuncDefineContext::Identfier(size_t i){
    return getToken(RiddleParser::Identfier, i);
}

tree::TerminalNode *RiddleParser::FuncDefineContext::LeftParen(){
  return getToken(RiddleParser::LeftParen, 0);
}

tree::TerminalNode *RiddleParser::FuncDefineContext::RightParen(){
  return getToken(RiddleParser::RightParen, 0);
}

RiddleParser::FuncBodyContext *RiddleParser::FuncDefineContext::funcBody(){
    return getRuleContext<RiddleParser::FuncBodyContext>(0);
}

std::vector<tree::TerminalNode *> RiddleParser::FuncDefineContext::Colon(){
    return getTokens(RiddleParser::Colon);
}

tree::TerminalNode *RiddleParser::FuncDefineContext::Colon(size_t i){
    return getToken(RiddleParser::Colon, i);
}

std::vector<RiddleParser::TypeLiteralContext *> RiddleParser::FuncDefineContext::typeLiteral(){
    return getRuleContexts<RiddleParser::TypeLiteralContext>();
}

RiddleParser::TypeLiteralContext *RiddleParser::FuncDefineContext::typeLiteral(size_t i){
    return getRuleContext<RiddleParser::TypeLiteralContext>(i);
}


size_t RiddleParser::FuncDefineContext::getRuleIndex() const{
    return RiddleParser::RuleFuncDefine;
}

void RiddleParser::FuncDefineContext::enterRule(tree::ParseTreeListener *listener){
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
      parserListener->enterFuncDefine(this);
}

void RiddleParser::FuncDefineContext::exitRule(tree::ParseTreeListener *listener){
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
      parserListener->exitFuncDefine(this);
}


std::any RiddleParser::FuncDefineContext::accept(tree::ParseTreeVisitor *visitor){
  if (auto parserVisitor = dynamic_cast<RiddleParserVisitor*>(visitor))
      return parserVisitor->visitFuncDefine(this);
  else
    return visitor->visitChildren(this);
}

RiddleParser::FuncDefineContext *RiddleParser::funcDefine(){
    FuncDefineContext *_localctx=_tracker.createInstance<FuncDefineContext>(_ctx, getState());
    enterRule(_localctx, 18, RiddleParser::RuleFuncDefine);
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
      setState(136);
      match(RiddleParser::Fun);
      setState(137);
      match(RiddleParser::Identfier);
      setState(138);
      match(RiddleParser::LeftParen);
      setState(144);
      _errHandler->sync(this);
      _la=_input->LA(1);
      while(_la == RiddleParser::Identfier){
          setState(139);
          match(RiddleParser::Identfier);
          setState(140);
          match(RiddleParser::Colon);
          setState(141);
          typeLiteral();
          setState(146);
          _errHandler->sync(this);
          _la=_input->LA(1);
      }
      setState(147);
    match(RiddleParser::RightParen);
      setState(148);
      funcBody();

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
    enterRule(_localctx, 20, RiddleParser::RuleFuncBody);
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
      setState(150);
    match(RiddleParser::LeftBrace);
      setState(154);
    _errHandler->sync(this);
    _la = _input->LA(1);
      while((((_la & ~0x3fULL) == 0) &&
             ((1ULL << _la) & 734086741013070814) != 0) || ((((_la-64) & ~0x3fULL) == 0) &&
                                                            ((1ULL << (_la-64)) & 53) != 0)){
          setState(151);
          statment(0);
          setState(156);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
      setState(157);
    match(RiddleParser::RightBrace);

  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

RiddleParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode *RiddleParser::BlockContext::LeftBrace(){
    return getToken(RiddleParser::LeftBrace, 0);
}

tree::TerminalNode *RiddleParser::BlockContext::RightBrace(){
    return getToken(RiddleParser::RightBrace, 0);
}

std::vector<RiddleParser::StatmentContext *> RiddleParser::BlockContext::statment(){
    return getRuleContexts<RiddleParser::StatmentContext>();
}

RiddleParser::StatmentContext *RiddleParser::BlockContext::statment(size_t i){
    return getRuleContext<RiddleParser::StatmentContext>(i);
}


size_t RiddleParser::BlockContext::getRuleIndex() const{
    return RiddleParser::RuleBlock;
}

void RiddleParser::BlockContext::enterRule(tree::ParseTreeListener *listener){
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
      parserListener->enterBlock(this);
}

void RiddleParser::BlockContext::exitRule(tree::ParseTreeListener *listener){
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
      parserListener->exitBlock(this);
}


std::any RiddleParser::BlockContext::accept(tree::ParseTreeVisitor *visitor){
  if (auto parserVisitor = dynamic_cast<RiddleParserVisitor*>(visitor))
      return parserVisitor->visitBlock(this);
  else
    return visitor->visitChildren(this);
}

RiddleParser::BlockContext *RiddleParser::block(){
    BlockContext *_localctx=_tracker.createInstance<BlockContext>(_ctx, getState());
    enterRule(_localctx, 22, RiddleParser::RuleBlock);
    size_t _la=0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
      setState(159);
      match(RiddleParser::LeftBrace);
      setState(163);
      _errHandler->sync(this);
      _la=_input->LA(1);
      while((((_la & ~0x3fULL) == 0) &&
             ((1ULL << _la) & 734086741013070814) != 0) || ((((_la-64) & ~0x3fULL) == 0) &&
                                                            ((1ULL << (_la-64)) & 53) != 0)){
          setState(160);
          statment(0);
          setState(165);
          _errHandler->sync(this);
          _la=_input->LA(1);
      }
      setState(166);
      match(RiddleParser::RightBrace);

  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

RiddleParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t RiddleParser::ExpressionContext::getRuleIndex() const{
    return RiddleParser::RuleExpression;
}

void RiddleParser::ExpressionContext::copyFrom(ExpressionContext *ctx){
    ParserRuleContext::copyFrom(ctx);
}

//----------------- MinusAssignExpressionContext ------------------------------------------------------------------

std::vector<RiddleParser::ExpressionContext *> RiddleParser::MinusAssignExpressionContext::expression(){
    return getRuleContexts<RiddleParser::ExpressionContext>();
}

RiddleParser::ExpressionContext *RiddleParser::MinusAssignExpressionContext::expression(size_t i){
    return getRuleContext<RiddleParser::ExpressionContext>(i);
}

tree::TerminalNode *RiddleParser::MinusAssignExpressionContext::MinusAssign(){
    return getToken(RiddleParser::MinusAssign, 0);
}

RiddleParser::MinusAssignExpressionContext::MinusAssignExpressionContext(ExpressionContext *ctx){ copyFrom(ctx); }

void RiddleParser::MinusAssignExpressionContext::enterRule(tree::ParseTreeListener *listener){
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
      parserListener->enterMinusAssignExpression(this);
}

void RiddleParser::MinusAssignExpressionContext::exitRule(tree::ParseTreeListener *listener){
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
      parserListener->exitMinusAssignExpression(this);
}

std::any RiddleParser::MinusAssignExpressionContext::accept(tree::ParseTreeVisitor *visitor){
  if (auto parserVisitor = dynamic_cast<RiddleParserVisitor*>(visitor))
      return parserVisitor->visitMinusAssignExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AndAssignExpressionContext ------------------------------------------------------------------

std::vector<RiddleParser::ExpressionContext *> RiddleParser::AndAssignExpressionContext::expression(){
    return getRuleContexts<RiddleParser::ExpressionContext>();
}

RiddleParser::ExpressionContext *RiddleParser::AndAssignExpressionContext::expression(size_t i){
    return getRuleContext<RiddleParser::ExpressionContext>(i);
}

tree::TerminalNode *RiddleParser::AndAssignExpressionContext::AndAssign(){
    return getToken(RiddleParser::AndAssign, 0);
}

RiddleParser::AndAssignExpressionContext::AndAssignExpressionContext(ExpressionContext *ctx){ copyFrom(ctx); }

void RiddleParser::AndAssignExpressionContext::enterRule(tree::ParseTreeListener *listener){
    auto parserListener=dynamic_cast<RiddleParserListener *>(listener);
    if(parserListener != nullptr)
        parserListener->enterAndAssignExpression(this);
}

void RiddleParser::AndAssignExpressionContext::exitRule(tree::ParseTreeListener *listener){
    auto parserListener=dynamic_cast<RiddleParserListener *>(listener);
    if(parserListener != nullptr)
        parserListener->exitAndAssignExpression(this);
}

std::any RiddleParser::AndAssignExpressionContext::accept(tree::ParseTreeVisitor *visitor){
    if(auto parserVisitor=dynamic_cast<RiddleParserVisitor *>(visitor))
        return parserVisitor->visitAndAssignExpression(this);
    else
        return visitor->visitChildren(this);
}
//----------------- OrAssignExpressionContext ------------------------------------------------------------------

std::vector<RiddleParser::ExpressionContext *> RiddleParser::OrAssignExpressionContext::expression(){
    return getRuleContexts<RiddleParser::ExpressionContext>();
}

RiddleParser::ExpressionContext *RiddleParser::OrAssignExpressionContext::expression(size_t i){
    return getRuleContext<RiddleParser::ExpressionContext>(i);
}

tree::TerminalNode *RiddleParser::OrAssignExpressionContext::OrAssign(){
    return getToken(RiddleParser::OrAssign, 0);
}

RiddleParser::OrAssignExpressionContext::OrAssignExpressionContext(ExpressionContext *ctx){ copyFrom(ctx); }

void RiddleParser::OrAssignExpressionContext::enterRule(tree::ParseTreeListener *listener){
    auto parserListener=dynamic_cast<RiddleParserListener *>(listener);
    if(parserListener != nullptr)
        parserListener->enterOrAssignExpression(this);
}

void RiddleParser::OrAssignExpressionContext::exitRule(tree::ParseTreeListener *listener){
    auto parserListener=dynamic_cast<RiddleParserListener *>(listener);
    if(parserListener != nullptr)
        parserListener->exitOrAssignExpression(this);
}

std::any RiddleParser::OrAssignExpressionContext::accept(tree::ParseTreeVisitor *visitor){
    if(auto parserVisitor=dynamic_cast<RiddleParserVisitor *>(visitor))
        return parserVisitor->visitOrAssignExpression(this);
    else
        return visitor->visitChildren(this);
}
//----------------- RightShiftAssignExpressionContext ------------------------------------------------------------------

std::vector<RiddleParser::ExpressionContext *> RiddleParser::RightShiftAssignExpressionContext::expression(){
    return getRuleContexts<RiddleParser::ExpressionContext>();
}

RiddleParser::ExpressionContext *RiddleParser::RightShiftAssignExpressionContext::expression(size_t i){
    return getRuleContext<RiddleParser::ExpressionContext>(i);
}

tree::TerminalNode *RiddleParser::RightShiftAssignExpressionContext::RightShiftAssign(){
    return getToken(RiddleParser::RightShiftAssign, 0);
}

RiddleParser::RightShiftAssignExpressionContext::RightShiftAssignExpressionContext(ExpressionContext *ctx){
    copyFrom(ctx);
}

void RiddleParser::RightShiftAssignExpressionContext::enterRule(tree::ParseTreeListener *listener){
    auto parserListener=dynamic_cast<RiddleParserListener *>(listener);
    if(parserListener != nullptr)
        parserListener->enterRightShiftAssignExpression(this);
}

void RiddleParser::RightShiftAssignExpressionContext::exitRule(tree::ParseTreeListener *listener){
    auto parserListener=dynamic_cast<RiddleParserListener *>(listener);
    if(parserListener != nullptr)
        parserListener->exitRightShiftAssignExpression(this);
}

std::any RiddleParser::RightShiftAssignExpressionContext::accept(tree::ParseTreeVisitor *visitor){
    if(auto parserVisitor=dynamic_cast<RiddleParserVisitor *>(visitor))
        return parserVisitor->visitRightShiftAssignExpression(this);
    else
        return visitor->visitChildren(this);
}
//----------------- NegativeExpressionContext ------------------------------------------------------------------

tree::TerminalNode *RiddleParser::NegativeExpressionContext::Minus(){
    return getToken(RiddleParser::Minus, 0);
}

RiddleParser::ExpressionContext *RiddleParser::NegativeExpressionContext::expression(){
    return getRuleContext<RiddleParser::ExpressionContext>(0);
}

RiddleParser::NegativeExpressionContext::NegativeExpressionContext(ExpressionContext *ctx){ copyFrom(ctx); }

void RiddleParser::NegativeExpressionContext::enterRule(tree::ParseTreeListener *listener){
    auto parserListener=dynamic_cast<RiddleParserListener *>(listener);
    if(parserListener != nullptr)
        parserListener->enterNegativeExpression(this);
}

void RiddleParser::NegativeExpressionContext::exitRule(tree::ParseTreeListener *listener){
    auto parserListener=dynamic_cast<RiddleParserListener *>(listener);
    if(parserListener != nullptr)
        parserListener->exitNegativeExpression(this);
}

std::any RiddleParser::NegativeExpressionContext::accept(tree::ParseTreeVisitor *visitor){
    if(auto parserVisitor=dynamic_cast<RiddleParserVisitor *>(visitor))
        return parserVisitor->visitNegativeExpression(this);
    else
        return visitor->visitChildren(this);
}
//----------------- MinusExpressionContext ------------------------------------------------------------------

std::vector<RiddleParser::ExpressionContext *> RiddleParser::MinusExpressionContext::expression(){
    return getRuleContexts<RiddleParser::ExpressionContext>();
}

RiddleParser::ExpressionContext *RiddleParser::MinusExpressionContext::expression(size_t i){
    return getRuleContext<RiddleParser::ExpressionContext>(i);
}

tree::TerminalNode *RiddleParser::MinusExpressionContext::Minus(){
    return getToken(RiddleParser::Minus, 0);
}

RiddleParser::MinusExpressionContext::MinusExpressionContext(ExpressionContext *ctx){ copyFrom(ctx); }

void RiddleParser::MinusExpressionContext::enterRule(tree::ParseTreeListener *listener){
    auto parserListener=dynamic_cast<RiddleParserListener *>(listener);
    if(parserListener != nullptr)
        parserListener->enterMinusExpression(this);
}

void RiddleParser::MinusExpressionContext::exitRule(tree::ParseTreeListener *listener){
    auto parserListener=dynamic_cast<RiddleParserListener *>(listener);
    if(parserListener != nullptr)
        parserListener->exitMinusExpression(this);
}

std::any RiddleParser::MinusExpressionContext::accept(tree::ParseTreeVisitor *visitor){
    if(auto parserVisitor=dynamic_cast<RiddleParserVisitor *>(visitor))
        return parserVisitor->visitMinusExpression(this);
    else
        return visitor->visitChildren(this);
}
//----------------- TildeExpressionContext ------------------------------------------------------------------

tree::TerminalNode *RiddleParser::TildeExpressionContext::Tilde(){
    return getToken(RiddleParser::Tilde, 0);
}

RiddleParser::ExpressionContext *RiddleParser::TildeExpressionContext::expression(){
    return getRuleContext<RiddleParser::ExpressionContext>(0);
}

RiddleParser::TildeExpressionContext::TildeExpressionContext(ExpressionContext *ctx){ copyFrom(ctx); }

void RiddleParser::TildeExpressionContext::enterRule(tree::ParseTreeListener *listener){
    auto parserListener=dynamic_cast<RiddleParserListener *>(listener);
    if(parserListener != nullptr)
        parserListener->enterTildeExpression(this);
}

void RiddleParser::TildeExpressionContext::exitRule(tree::ParseTreeListener *listener){
    auto parserListener=dynamic_cast<RiddleParserListener *>(listener);
    if(parserListener != nullptr)
        parserListener->exitTildeExpression(this);
}

std::any RiddleParser::TildeExpressionContext::accept(tree::ParseTreeVisitor *visitor){
    if(auto parserVisitor=dynamic_cast<RiddleParserVisitor *>(visitor))
        return parserVisitor->visitTildeExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LessExpressionContext ------------------------------------------------------------------

std::vector<RiddleParser::ExpressionContext *> RiddleParser::LessExpressionContext::expression(){
    return getRuleContexts<RiddleParser::ExpressionContext>();
}

RiddleParser::ExpressionContext *RiddleParser::LessExpressionContext::expression(size_t i){
    return getRuleContext<RiddleParser::ExpressionContext>(i);
}

tree::TerminalNode *RiddleParser::LessExpressionContext::Less(){
    return getToken(RiddleParser::Less, 0);
}

RiddleParser::LessExpressionContext::LessExpressionContext(ExpressionContext *ctx){ copyFrom(ctx); }

void RiddleParser::LessExpressionContext::enterRule(tree::ParseTreeListener *listener){
    auto parserListener=dynamic_cast<RiddleParserListener *>(listener);
    if(parserListener != nullptr)
        parserListener->enterLessExpression(this);
}

void RiddleParser::LessExpressionContext::exitRule(tree::ParseTreeListener *listener){
    auto parserListener=dynamic_cast<RiddleParserListener *>(listener);
    if(parserListener != nullptr)
        parserListener->exitLessExpression(this);
}

std::any RiddleParser::LessExpressionContext::accept(tree::ParseTreeVisitor *visitor){
    if(auto parserVisitor=dynamic_cast<RiddleParserVisitor *>(visitor))
        return parserVisitor->visitLessExpression(this);
    else
        return visitor->visitChildren(this);
}
//----------------- LeftPlusPlusExoressionContext ------------------------------------------------------------------

tree::TerminalNode *RiddleParser::LeftPlusPlusExoressionContext::PlusPlus(){
    return getToken(RiddleParser::PlusPlus, 0);
}

RiddleParser::IdExpressionContext *RiddleParser::LeftPlusPlusExoressionContext::idExpression(){
    return getRuleContext<RiddleParser::IdExpressionContext>(0);
}

RiddleParser::LeftPlusPlusExoressionContext::LeftPlusPlusExoressionContext(ExpressionContext *ctx){ copyFrom(ctx); }

void RiddleParser::LeftPlusPlusExoressionContext::enterRule(tree::ParseTreeListener *listener){
    auto parserListener=dynamic_cast<RiddleParserListener *>(listener);
    if(parserListener != nullptr)
        parserListener->enterLeftPlusPlusExoression(this);
}

void RiddleParser::LeftPlusPlusExoressionContext::exitRule(tree::ParseTreeListener *listener){
    auto parserListener=dynamic_cast<RiddleParserListener *>(listener);
    if(parserListener != nullptr)
        parserListener->exitLeftPlusPlusExoression(this);
}

std::any RiddleParser::LeftPlusPlusExoressionContext::accept(tree::ParseTreeVisitor *visitor){
    if(auto parserVisitor=dynamic_cast<RiddleParserVisitor *>(visitor))
        return parserVisitor->visitLeftPlusPlusExoression(this);
    else
        return visitor->visitChildren(this);
}
//----------------- LeftMinusMinusExpressionContext ------------------------------------------------------------------

tree::TerminalNode *RiddleParser::LeftMinusMinusExpressionContext::MinusMinus(){
    return getToken(RiddleParser::MinusMinus, 0);
}

RiddleParser::IdExpressionContext *RiddleParser::LeftMinusMinusExpressionContext::idExpression(){
    return getRuleContext<RiddleParser::IdExpressionContext>(0);
}

RiddleParser::LeftMinusMinusExpressionContext::LeftMinusMinusExpressionContext(ExpressionContext *ctx){ copyFrom(ctx); }

void RiddleParser::LeftMinusMinusExpressionContext::enterRule(tree::ParseTreeListener *listener){
    auto parserListener=dynamic_cast<RiddleParserListener *>(listener);
    if(parserListener != nullptr)
        parserListener->enterLeftMinusMinusExpression(this);
}

void RiddleParser::LeftMinusMinusExpressionContext::exitRule(tree::ParseTreeListener *listener){
    auto parserListener=dynamic_cast<RiddleParserListener *>(listener);
    if(parserListener != nullptr)
        parserListener->exitLeftMinusMinusExpression(this);
}

std::any RiddleParser::LeftMinusMinusExpressionContext::accept(tree::ParseTreeVisitor *visitor){
    if(auto parserVisitor=dynamic_cast<RiddleParserVisitor *>(visitor))
        return parserVisitor->visitLeftMinusMinusExpression(this);
    else
        return visitor->visitChildren(this);
}
//----------------- ModExpressionContext ------------------------------------------------------------------

std::vector<RiddleParser::ExpressionContext *> RiddleParser::ModExpressionContext::expression(){
    return getRuleContexts<RiddleParser::ExpressionContext>();
}

RiddleParser::ExpressionContext *RiddleParser::ModExpressionContext::expression(size_t i){
    return getRuleContext<RiddleParser::ExpressionContext>(i);
}

tree::TerminalNode *RiddleParser::ModExpressionContext::Mod(){
    return getToken(RiddleParser::Mod, 0);
}

RiddleParser::ModExpressionContext::ModExpressionContext(ExpressionContext *ctx){ copyFrom(ctx); }

void RiddleParser::ModExpressionContext::enterRule(tree::ParseTreeListener *listener){
    auto parserListener=dynamic_cast<RiddleParserListener *>(listener);
    if(parserListener != nullptr)
        parserListener->enterModExpression(this);
}

void RiddleParser::ModExpressionContext::exitRule(tree::ParseTreeListener *listener){
    auto parserListener=dynamic_cast<RiddleParserListener *>(listener);
    if(parserListener != nullptr)
        parserListener->exitModExpression(this);
}

std::any RiddleParser::ModExpressionContext::accept(tree::ParseTreeVisitor *visitor){
    if(auto parserVisitor=dynamic_cast<RiddleParserVisitor *>(visitor))
        return parserVisitor->visitModExpression(this);
    else
        return visitor->visitChildren(this);
}
//----------------- NotExpressionContext ------------------------------------------------------------------

tree::TerminalNode *RiddleParser::NotExpressionContext::Not(){
    return getToken(RiddleParser::Not, 0);
}

RiddleParser::ExpressionContext *RiddleParser::NotExpressionContext::expression(){
    return getRuleContext<RiddleParser::ExpressionContext>(0);
}

RiddleParser::NotExpressionContext::NotExpressionContext(ExpressionContext *ctx){ copyFrom(ctx); }

void RiddleParser::NotExpressionContext::enterRule(tree::ParseTreeListener *listener){
    auto parserListener=dynamic_cast<RiddleParserListener *>(listener);
    if(parserListener != nullptr)
        parserListener->enterNotExpression(this);
}

void RiddleParser::NotExpressionContext::exitRule(tree::ParseTreeListener *listener){
    auto parserListener=dynamic_cast<RiddleParserListener *>(listener);
    if(parserListener != nullptr)
        parserListener->exitNotExpression(this);
}

std::any RiddleParser::NotExpressionContext::accept(tree::ParseTreeVisitor *visitor){
    if(auto parserVisitor=dynamic_cast<RiddleParserVisitor *>(visitor))
        return parserVisitor->visitNotExpression(this);
    else
        return visitor->visitChildren(this);
}
//----------------- DivExpressionContext ------------------------------------------------------------------

std::vector<RiddleParser::ExpressionContext *> RiddleParser::DivExpressionContext::expression(){
    return getRuleContexts<RiddleParser::ExpressionContext>();
}

RiddleParser::ExpressionContext *RiddleParser::DivExpressionContext::expression(size_t i){
    return getRuleContext<RiddleParser::ExpressionContext>(i);
}

tree::TerminalNode *RiddleParser::DivExpressionContext::Div(){
    return getToken(RiddleParser::Div, 0);
}

RiddleParser::DivExpressionContext::DivExpressionContext(ExpressionContext *ctx){ copyFrom(ctx); }

void RiddleParser::DivExpressionContext::enterRule(tree::ParseTreeListener *listener){
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
      parserListener->enterDivExpression(this);
}

void RiddleParser::DivExpressionContext::exitRule(tree::ParseTreeListener *listener){
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
      parserListener->exitDivExpression(this);
}

std::any RiddleParser::DivExpressionContext::accept(tree::ParseTreeVisitor *visitor){
  if (auto parserVisitor = dynamic_cast<RiddleParserVisitor*>(visitor))
      return parserVisitor->visitDivExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PlusAssignExpressionContext ------------------------------------------------------------------

std::vector<RiddleParser::ExpressionContext *> RiddleParser::PlusAssignExpressionContext::expression(){
    return getRuleContexts<RiddleParser::ExpressionContext>();
}

RiddleParser::ExpressionContext *RiddleParser::PlusAssignExpressionContext::expression(size_t i){
    return getRuleContext<RiddleParser::ExpressionContext>(i);
}

tree::TerminalNode *RiddleParser::PlusAssignExpressionContext::PlusAssign(){
    return getToken(RiddleParser::PlusAssign, 0);
}

RiddleParser::PlusAssignExpressionContext::PlusAssignExpressionContext(ExpressionContext *ctx){ copyFrom(ctx); }

void RiddleParser::PlusAssignExpressionContext::enterRule(tree::ParseTreeListener *listener){
    auto parserListener=dynamic_cast<RiddleParserListener *>(listener);
    if(parserListener != nullptr)
        parserListener->enterPlusAssignExpression(this);
}

void RiddleParser::PlusAssignExpressionContext::exitRule(tree::ParseTreeListener *listener){
    auto parserListener=dynamic_cast<RiddleParserListener *>(listener);
    if(parserListener != nullptr)
        parserListener->exitPlusAssignExpression(this);
}

std::any RiddleParser::PlusAssignExpressionContext::accept(tree::ParseTreeVisitor *visitor){
    if(auto parserVisitor=dynamic_cast<RiddleParserVisitor *>(visitor))
        return parserVisitor->visitPlusAssignExpression(this);
    else
        return visitor->visitChildren(this);
}
//----------------- RightShiftExpressionContext ------------------------------------------------------------------

std::vector<RiddleParser::ExpressionContext *> RiddleParser::RightShiftExpressionContext::expression(){
    return getRuleContexts<RiddleParser::ExpressionContext>();
}

RiddleParser::ExpressionContext *RiddleParser::RightShiftExpressionContext::expression(size_t i){
    return getRuleContext<RiddleParser::ExpressionContext>(i);
}

tree::TerminalNode *RiddleParser::RightShiftExpressionContext::RightShift(){
    return getToken(RiddleParser::RightShift, 0);
}

RiddleParser::RightShiftExpressionContext::RightShiftExpressionContext(ExpressionContext *ctx){ copyFrom(ctx); }

void RiddleParser::RightShiftExpressionContext::enterRule(tree::ParseTreeListener *listener){
    auto parserListener=dynamic_cast<RiddleParserListener *>(listener);
    if(parserListener != nullptr)
        parserListener->enterRightShiftExpression(this);
}

void RiddleParser::RightShiftExpressionContext::exitRule(tree::ParseTreeListener *listener){
    auto parserListener=dynamic_cast<RiddleParserListener *>(listener);
    if(parserListener != nullptr)
        parserListener->exitRightShiftExpression(this);
}

std::any RiddleParser::RightShiftExpressionContext::accept(tree::ParseTreeVisitor *visitor){
    if(auto parserVisitor=dynamic_cast<RiddleParserVisitor *>(visitor))
        return parserVisitor->visitRightShiftExpression(this);
    else
        return visitor->visitChildren(this);
}
//----------------- AndExpressionContext ------------------------------------------------------------------

std::vector<RiddleParser::ExpressionContext *> RiddleParser::AndExpressionContext::expression(){
    return getRuleContexts<RiddleParser::ExpressionContext>();
}

RiddleParser::ExpressionContext *RiddleParser::AndExpressionContext::expression(size_t i){
    return getRuleContext<RiddleParser::ExpressionContext>(i);
}

tree::TerminalNode *RiddleParser::AndExpressionContext::And(){
    return getToken(RiddleParser::And, 0);
}

RiddleParser::AndExpressionContext::AndExpressionContext(ExpressionContext *ctx){ copyFrom(ctx); }

void RiddleParser::AndExpressionContext::enterRule(tree::ParseTreeListener *listener){
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
      parserListener->enterAndExpression(this);
}

void RiddleParser::AndExpressionContext::exitRule(tree::ParseTreeListener *listener){
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
      parserListener->exitAndExpression(this);
}

std::any RiddleParser::AndExpressionContext::accept(tree::ParseTreeVisitor *visitor){
  if (auto parserVisitor = dynamic_cast<RiddleParserVisitor*>(visitor))
      return parserVisitor->visitAndExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DivAssignEpxressionContext ------------------------------------------------------------------

std::vector<RiddleParser::ExpressionContext *> RiddleParser::DivAssignEpxressionContext::expression(){
    return getRuleContexts<RiddleParser::ExpressionContext>();
}

RiddleParser::ExpressionContext *RiddleParser::DivAssignEpxressionContext::expression(size_t i){
    return getRuleContext<RiddleParser::ExpressionContext>(i);
}

tree::TerminalNode *RiddleParser::DivAssignEpxressionContext::DivAssign(){
    return getToken(RiddleParser::DivAssign, 0);
}

RiddleParser::DivAssignEpxressionContext::DivAssignEpxressionContext(ExpressionContext *ctx){ copyFrom(ctx); }

void RiddleParser::DivAssignEpxressionContext::enterRule(tree::ParseTreeListener *listener){
    auto parserListener=dynamic_cast<RiddleParserListener *>(listener);
    if(parserListener != nullptr)
        parserListener->enterDivAssignEpxression(this);
}

void RiddleParser::DivAssignEpxressionContext::exitRule(tree::ParseTreeListener *listener){
    auto parserListener=dynamic_cast<RiddleParserListener *>(listener);
    if(parserListener != nullptr)
        parserListener->exitDivAssignEpxression(this);
}

std::any RiddleParser::DivAssignEpxressionContext::accept(tree::ParseTreeVisitor *visitor){
    if(auto parserVisitor=dynamic_cast<RiddleParserVisitor *>(visitor))
        return parserVisitor->visitDivAssignEpxression(this);
    else
        return visitor->visitChildren(this);
}
//----------------- LeftShiftExpressionContext ------------------------------------------------------------------

std::vector<RiddleParser::ExpressionContext *> RiddleParser::LeftShiftExpressionContext::expression(){
    return getRuleContexts<RiddleParser::ExpressionContext>();
}

RiddleParser::ExpressionContext *RiddleParser::LeftShiftExpressionContext::expression(size_t i){
    return getRuleContext<RiddleParser::ExpressionContext>(i);
}

tree::TerminalNode *RiddleParser::LeftShiftExpressionContext::LeftShift(){
    return getToken(RiddleParser::LeftShift, 0);
}

RiddleParser::LeftShiftExpressionContext::LeftShiftExpressionContext(ExpressionContext *ctx){ copyFrom(ctx); }

void RiddleParser::LeftShiftExpressionContext::enterRule(tree::ParseTreeListener *listener){
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
      parserListener->enterLeftShiftExpression(this);
}

void RiddleParser::LeftShiftExpressionContext::exitRule(tree::ParseTreeListener *listener){
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
      parserListener->exitLeftShiftExpression(this);
}

std::any RiddleParser::LeftShiftExpressionContext::accept(tree::ParseTreeVisitor *visitor){
  if (auto parserVisitor = dynamic_cast<RiddleParserVisitor*>(visitor))
      return parserVisitor->visitLeftShiftExpression(this);
  else
      return visitor->visitChildren(this);
}
//----------------- AndAndExpressionContext ------------------------------------------------------------------

std::vector<RiddleParser::ExpressionContext *> RiddleParser::AndAndExpressionContext::expression(){
    return getRuleContexts<RiddleParser::ExpressionContext>();
}

RiddleParser::ExpressionContext *RiddleParser::AndAndExpressionContext::expression(size_t i){
    return getRuleContext<RiddleParser::ExpressionContext>(i);
}

tree::TerminalNode *RiddleParser::AndAndExpressionContext::AndAnd(){
    return getToken(RiddleParser::AndAnd, 0);
}

RiddleParser::AndAndExpressionContext::AndAndExpressionContext(ExpressionContext *ctx){ copyFrom(ctx); }

void RiddleParser::AndAndExpressionContext::enterRule(tree::ParseTreeListener *listener){
    auto parserListener=dynamic_cast<RiddleParserListener *>(listener);
    if(parserListener != nullptr)
        parserListener->enterAndAndExpression(this);
}

void RiddleParser::AndAndExpressionContext::exitRule(tree::ParseTreeListener *listener){
    auto parserListener=dynamic_cast<RiddleParserListener *>(listener);
    if(parserListener != nullptr)
        parserListener->exitAndAndExpression(this);
}

std::any RiddleParser::AndAndExpressionContext::accept(tree::ParseTreeVisitor *visitor){
    if(auto parserVisitor=dynamic_cast<RiddleParserVisitor *>(visitor))
        return parserVisitor->visitAndAndExpression(this);
    else
        return visitor->visitChildren(this);
}
//----------------- PositiveExpressionContext ------------------------------------------------------------------

tree::TerminalNode *RiddleParser::PositiveExpressionContext::Plus(){
    return getToken(RiddleParser::Plus, 0);
}

RiddleParser::ExpressionContext *RiddleParser::PositiveExpressionContext::expression(){
    return getRuleContext<RiddleParser::ExpressionContext>(0);
}

RiddleParser::PositiveExpressionContext::PositiveExpressionContext(ExpressionContext *ctx){ copyFrom(ctx); }

void RiddleParser::PositiveExpressionContext::enterRule(tree::ParseTreeListener *listener){
    auto parserListener=dynamic_cast<RiddleParserListener *>(listener);
    if(parserListener != nullptr)
        parserListener->enterPositiveExpression(this);
}

void RiddleParser::PositiveExpressionContext::exitRule(tree::ParseTreeListener *listener){
    auto parserListener=dynamic_cast<RiddleParserListener *>(listener);
    if(parserListener != nullptr)
        parserListener->exitPositiveExpression(this);
}

std::any RiddleParser::PositiveExpressionContext::accept(tree::ParseTreeVisitor *visitor){
    if(auto parserVisitor=dynamic_cast<RiddleParserVisitor *>(visitor))
        return parserVisitor->visitPositiveExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PlusExpressionContext ------------------------------------------------------------------

std::vector<RiddleParser::ExpressionContext *> RiddleParser::PlusExpressionContext::expression(){
    return getRuleContexts<RiddleParser::ExpressionContext>();
}

RiddleParser::ExpressionContext *RiddleParser::PlusExpressionContext::expression(size_t i){
    return getRuleContext<RiddleParser::ExpressionContext>(i);
}

tree::TerminalNode *RiddleParser::PlusExpressionContext::Plus(){
    return getToken(RiddleParser::Plus, 0);
}

RiddleParser::PlusExpressionContext::PlusExpressionContext(ExpressionContext *ctx){ copyFrom(ctx); }

void RiddleParser::PlusExpressionContext::enterRule(tree::ParseTreeListener *listener){
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
      parserListener->enterPlusExpression(this);
}

void RiddleParser::PlusExpressionContext::exitRule(tree::ParseTreeListener *listener){
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
      parserListener->exitPlusExpression(this);
}

std::any RiddleParser::PlusExpressionContext::accept(tree::ParseTreeVisitor *visitor){
  if (auto parserVisitor = dynamic_cast<RiddleParserVisitor*>(visitor))
      return parserVisitor->visitPlusExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LessEqualExpressionContext ------------------------------------------------------------------

std::vector<RiddleParser::ExpressionContext *> RiddleParser::LessEqualExpressionContext::expression(){
    return getRuleContexts<RiddleParser::ExpressionContext>();
}

RiddleParser::ExpressionContext *RiddleParser::LessEqualExpressionContext::expression(size_t i){
    return getRuleContext<RiddleParser::ExpressionContext>(i);
}

tree::TerminalNode *RiddleParser::LessEqualExpressionContext::LessEqual(){
    return getToken(RiddleParser::LessEqual, 0);
}

RiddleParser::LessEqualExpressionContext::LessEqualExpressionContext(ExpressionContext *ctx){ copyFrom(ctx); }

void RiddleParser::LessEqualExpressionContext::enterRule(tree::ParseTreeListener *listener){
    auto parserListener=dynamic_cast<RiddleParserListener *>(listener);
    if(parserListener != nullptr)
        parserListener->enterLessEqualExpression(this);
}

void RiddleParser::LessEqualExpressionContext::exitRule(tree::ParseTreeListener *listener){
    auto parserListener=dynamic_cast<RiddleParserListener *>(listener);
    if(parserListener != nullptr)
        parserListener->exitLessEqualExpression(this);
}

std::any RiddleParser::LessEqualExpressionContext::accept(tree::ParseTreeVisitor *visitor){
    if(auto parserVisitor=dynamic_cast<RiddleParserVisitor *>(visitor))
        return parserVisitor->visitLessEqualExpression(this);
    else
        return visitor->visitChildren(this);
}
//----------------- EqualExpressionContext ------------------------------------------------------------------

std::vector<RiddleParser::ExpressionContext *> RiddleParser::EqualExpressionContext::expression(){
    return getRuleContexts<RiddleParser::ExpressionContext>();
}

RiddleParser::ExpressionContext *RiddleParser::EqualExpressionContext::expression(size_t i){
    return getRuleContext<RiddleParser::ExpressionContext>(i);
}

tree::TerminalNode *RiddleParser::EqualExpressionContext::Equal(){
    return getToken(RiddleParser::Equal, 0);
}

RiddleParser::EqualExpressionContext::EqualExpressionContext(ExpressionContext *ctx){ copyFrom(ctx); }

void RiddleParser::EqualExpressionContext::enterRule(tree::ParseTreeListener *listener){
    auto parserListener=dynamic_cast<RiddleParserListener *>(listener);
    if(parserListener != nullptr)
        parserListener->enterEqualExpression(this);
}

void RiddleParser::EqualExpressionContext::exitRule(tree::ParseTreeListener *listener){
    auto parserListener=dynamic_cast<RiddleParserListener *>(listener);
    if(parserListener != nullptr)
        parserListener->exitEqualExpression(this);
}

std::any RiddleParser::EqualExpressionContext::accept(tree::ParseTreeVisitor *visitor){
    if(auto parserVisitor=dynamic_cast<RiddleParserVisitor *>(visitor))
        return parserVisitor->visitEqualExpression(this);
    else
        return visitor->visitChildren(this);
}
//----------------- T_primaryExpressionContext ------------------------------------------------------------------

RiddleParser::PrimaryExpressionContext *RiddleParser::T_primaryExpressionContext::primaryExpression(){
    return getRuleContext<RiddleParser::PrimaryExpressionContext>(0);
}

RiddleParser::T_primaryExpressionContext::T_primaryExpressionContext(ExpressionContext *ctx){ copyFrom(ctx); }

void RiddleParser::T_primaryExpressionContext::enterRule(tree::ParseTreeListener *listener){
    auto parserListener=dynamic_cast<RiddleParserListener *>(listener);
    if(parserListener != nullptr)
        parserListener->enterT_primaryExpression(this);
}

void RiddleParser::T_primaryExpressionContext::exitRule(tree::ParseTreeListener *listener){
    auto parserListener=dynamic_cast<RiddleParserListener *>(listener);
    if(parserListener != nullptr)
        parserListener->exitT_primaryExpression(this);
}

std::any RiddleParser::T_primaryExpressionContext::accept(tree::ParseTreeVisitor *visitor){
    if(auto parserVisitor=dynamic_cast<RiddleParserVisitor *>(visitor))
        return parserVisitor->visitT_primaryExpression(this);
    else
        return visitor->visitChildren(this);
}
//----------------- OrOrExpressionContext ------------------------------------------------------------------

std::vector<RiddleParser::ExpressionContext *> RiddleParser::OrOrExpressionContext::expression(){
    return getRuleContexts<RiddleParser::ExpressionContext>();
}

RiddleParser::ExpressionContext *RiddleParser::OrOrExpressionContext::expression(size_t i){
    return getRuleContext<RiddleParser::ExpressionContext>(i);
}

tree::TerminalNode *RiddleParser::OrOrExpressionContext::OrOr(){
    return getToken(RiddleParser::OrOr, 0);
}

RiddleParser::OrOrExpressionContext::OrOrExpressionContext(ExpressionContext *ctx){ copyFrom(ctx); }

void RiddleParser::OrOrExpressionContext::enterRule(tree::ParseTreeListener *listener){
    auto parserListener=dynamic_cast<RiddleParserListener *>(listener);
    if(parserListener != nullptr)
        parserListener->enterOrOrExpression(this);
}

void RiddleParser::OrOrExpressionContext::exitRule(tree::ParseTreeListener *listener){
    auto parserListener=dynamic_cast<RiddleParserListener *>(listener);
    if(parserListener != nullptr)
        parserListener->exitOrOrExpression(this);
}

std::any RiddleParser::OrOrExpressionContext::accept(tree::ParseTreeVisitor *visitor){
    if(auto parserVisitor=dynamic_cast<RiddleParserVisitor *>(visitor))
        return parserVisitor->visitOrOrExpression(this);
    else
        return visitor->visitChildren(this);
}
//----------------- ModAssignExpressionContext ------------------------------------------------------------------

std::vector<RiddleParser::ExpressionContext *> RiddleParser::ModAssignExpressionContext::expression(){
    return getRuleContexts<RiddleParser::ExpressionContext>();
}

RiddleParser::ExpressionContext *RiddleParser::ModAssignExpressionContext::expression(size_t i){
    return getRuleContext<RiddleParser::ExpressionContext>(i);
}

tree::TerminalNode *RiddleParser::ModAssignExpressionContext::ModAssign(){
    return getToken(RiddleParser::ModAssign, 0);
}

RiddleParser::ModAssignExpressionContext::ModAssignExpressionContext(ExpressionContext *ctx){ copyFrom(ctx); }

void RiddleParser::ModAssignExpressionContext::enterRule(tree::ParseTreeListener *listener){
    auto parserListener=dynamic_cast<RiddleParserListener *>(listener);
    if(parserListener != nullptr)
        parserListener->enterModAssignExpression(this);
}

void RiddleParser::ModAssignExpressionContext::exitRule(tree::ParseTreeListener *listener){
    auto parserListener=dynamic_cast<RiddleParserListener *>(listener);
    if(parserListener != nullptr)
        parserListener->exitModAssignExpression(this);
}

std::any RiddleParser::ModAssignExpressionContext::accept(tree::ParseTreeVisitor *visitor){
    if(auto parserVisitor=dynamic_cast<RiddleParserVisitor *>(visitor))
        return parserVisitor->visitModAssignExpression(this);
    else
        return visitor->visitChildren(this);
}
//----------------- AssignExpressionContext ------------------------------------------------------------------

std::vector<RiddleParser::ExpressionContext *> RiddleParser::AssignExpressionContext::expression(){
    return getRuleContexts<RiddleParser::ExpressionContext>();
}

RiddleParser::ExpressionContext *RiddleParser::AssignExpressionContext::expression(size_t i){
    return getRuleContext<RiddleParser::ExpressionContext>(i);
}

tree::TerminalNode *RiddleParser::AssignExpressionContext::Assign(){
    return getToken(RiddleParser::Assign, 0);
}

RiddleParser::AssignExpressionContext::AssignExpressionContext(ExpressionContext *ctx){ copyFrom(ctx); }

void RiddleParser::AssignExpressionContext::enterRule(tree::ParseTreeListener *listener){
    auto parserListener=dynamic_cast<RiddleParserListener *>(listener);
    if(parserListener != nullptr)
        parserListener->enterAssignExpression(this);
}

void RiddleParser::AssignExpressionContext::exitRule(tree::ParseTreeListener *listener){
    auto parserListener=dynamic_cast<RiddleParserListener *>(listener);
    if(parserListener != nullptr)
        parserListener->exitAssignExpression(this);
}

std::any RiddleParser::AssignExpressionContext::accept(tree::ParseTreeVisitor *visitor){
    if(auto parserVisitor=dynamic_cast<RiddleParserVisitor *>(visitor))
        return parserVisitor->visitAssignExpression(this);
    else
        return visitor->visitChildren(this);
}
//----------------- NotEqualExpressionContext ------------------------------------------------------------------

std::vector<RiddleParser::ExpressionContext *> RiddleParser::NotEqualExpressionContext::expression(){
    return getRuleContexts<RiddleParser::ExpressionContext>();
}

RiddleParser::ExpressionContext *RiddleParser::NotEqualExpressionContext::expression(size_t i){
    return getRuleContext<RiddleParser::ExpressionContext>(i);
}

tree::TerminalNode *RiddleParser::NotEqualExpressionContext::NotEqual(){
    return getToken(RiddleParser::NotEqual, 0);
}

RiddleParser::NotEqualExpressionContext::NotEqualExpressionContext(ExpressionContext *ctx){ copyFrom(ctx); }

void RiddleParser::NotEqualExpressionContext::enterRule(tree::ParseTreeListener *listener){
    auto parserListener=dynamic_cast<RiddleParserListener *>(listener);
    if(parserListener != nullptr)
        parserListener->enterNotEqualExpression(this);
}

void RiddleParser::NotEqualExpressionContext::exitRule(tree::ParseTreeListener *listener){
    auto parserListener=dynamic_cast<RiddleParserListener *>(listener);
    if(parserListener != nullptr)
        parserListener->exitNotEqualExpression(this);
}

std::any RiddleParser::NotEqualExpressionContext::accept(tree::ParseTreeVisitor *visitor){
    if(auto parserVisitor=dynamic_cast<RiddleParserVisitor *>(visitor))
        return parserVisitor->visitNotEqualExpression(this);
    else
        return visitor->visitChildren(this);
}
//----------------- XorAssignExpressionContext ------------------------------------------------------------------

std::vector<RiddleParser::ExpressionContext *> RiddleParser::XorAssignExpressionContext::expression(){
    return getRuleContexts<RiddleParser::ExpressionContext>();
}

RiddleParser::ExpressionContext *RiddleParser::XorAssignExpressionContext::expression(size_t i){
    return getRuleContext<RiddleParser::ExpressionContext>(i);
}

tree::TerminalNode *RiddleParser::XorAssignExpressionContext::XorAssign(){
    return getToken(RiddleParser::XorAssign, 0);
}

RiddleParser::XorAssignExpressionContext::XorAssignExpressionContext(ExpressionContext *ctx){ copyFrom(ctx); }

void RiddleParser::XorAssignExpressionContext::enterRule(tree::ParseTreeListener *listener){
    auto parserListener=dynamic_cast<RiddleParserListener *>(listener);
    if(parserListener != nullptr)
        parserListener->enterXorAssignExpression(this);
}

void RiddleParser::XorAssignExpressionContext::exitRule(tree::ParseTreeListener *listener){
    auto parserListener=dynamic_cast<RiddleParserListener *>(listener);
    if(parserListener != nullptr)
        parserListener->exitXorAssignExpression(this);
}

std::any RiddleParser::XorAssignExpressionContext::accept(tree::ParseTreeVisitor *visitor){
    if(auto parserVisitor=dynamic_cast<RiddleParserVisitor *>(visitor))
        return parserVisitor->visitXorAssignExpression(this);
    else
        return visitor->visitChildren(this);
}
//----------------- CommaExpressionContext ------------------------------------------------------------------

std::vector<RiddleParser::ExpressionContext *> RiddleParser::CommaExpressionContext::expression(){
    return getRuleContexts<RiddleParser::ExpressionContext>();
}

RiddleParser::ExpressionContext *RiddleParser::CommaExpressionContext::expression(size_t i){
    return getRuleContext<RiddleParser::ExpressionContext>(i);
}

tree::TerminalNode *RiddleParser::CommaExpressionContext::Comma(){
    return getToken(RiddleParser::Comma, 0);
}

RiddleParser::CommaExpressionContext::CommaExpressionContext(ExpressionContext *ctx){ copyFrom(ctx); }

void RiddleParser::CommaExpressionContext::enterRule(tree::ParseTreeListener *listener){
    auto parserListener=dynamic_cast<RiddleParserListener *>(listener);
    if(parserListener != nullptr)
        parserListener->enterCommaExpression(this);
}

void RiddleParser::CommaExpressionContext::exitRule(tree::ParseTreeListener *listener){
    auto parserListener=dynamic_cast<RiddleParserListener *>(listener);
    if(parserListener != nullptr)
        parserListener->exitCommaExpression(this);
}

std::any RiddleParser::CommaExpressionContext::accept(tree::ParseTreeVisitor *visitor){
    if(auto parserVisitor=dynamic_cast<RiddleParserVisitor *>(visitor))
        return parserVisitor->visitCommaExpression(this);
    else
        return visitor->visitChildren(this);
}
//----------------- OrExpressionContext ------------------------------------------------------------------

std::vector<RiddleParser::ExpressionContext *> RiddleParser::OrExpressionContext::expression(){
    return getRuleContexts<RiddleParser::ExpressionContext>();
}

RiddleParser::ExpressionContext *RiddleParser::OrExpressionContext::expression(size_t i){
    return getRuleContext<RiddleParser::ExpressionContext>(i);
}

tree::TerminalNode *RiddleParser::OrExpressionContext::Or(){
    return getToken(RiddleParser::Or, 0);
}

RiddleParser::OrExpressionContext::OrExpressionContext(ExpressionContext *ctx){ copyFrom(ctx); }

void RiddleParser::OrExpressionContext::enterRule(tree::ParseTreeListener *listener){
    auto parserListener=dynamic_cast<RiddleParserListener *>(listener);
    if(parserListener != nullptr)
        parserListener->enterOrExpression(this);
}

void RiddleParser::OrExpressionContext::exitRule(tree::ParseTreeListener *listener){
    auto parserListener=dynamic_cast<RiddleParserListener *>(listener);
    if(parserListener != nullptr)
        parserListener->exitOrExpression(this);
}

std::any RiddleParser::OrExpressionContext::accept(tree::ParseTreeVisitor *visitor){
    if(auto parserVisitor=dynamic_cast<RiddleParserVisitor *>(visitor))
        return parserVisitor->visitOrExpression(this);
    else
        return visitor->visitChildren(this);
}
//----------------- RightPlusPlusExoressionContext ------------------------------------------------------------------

RiddleParser::IdExpressionContext *RiddleParser::RightPlusPlusExoressionContext::idExpression(){
    return getRuleContext<RiddleParser::IdExpressionContext>(0);
}

tree::TerminalNode *RiddleParser::RightPlusPlusExoressionContext::PlusPlus(){
    return getToken(RiddleParser::PlusPlus, 0);
}

RiddleParser::RightPlusPlusExoressionContext::RightPlusPlusExoressionContext(ExpressionContext *ctx){ copyFrom(ctx); }

void RiddleParser::RightPlusPlusExoressionContext::enterRule(tree::ParseTreeListener *listener){
    auto parserListener=dynamic_cast<RiddleParserListener *>(listener);
    if(parserListener != nullptr)
        parserListener->enterRightPlusPlusExoression(this);
}

void RiddleParser::RightPlusPlusExoressionContext::exitRule(tree::ParseTreeListener *listener){
    auto parserListener=dynamic_cast<RiddleParserListener *>(listener);
    if(parserListener != nullptr)
        parserListener->exitRightPlusPlusExoression(this);
}

std::any RiddleParser::RightPlusPlusExoressionContext::accept(tree::ParseTreeVisitor *visitor){
    if(auto parserVisitor=dynamic_cast<RiddleParserVisitor *>(visitor))
        return parserVisitor->visitRightPlusPlusExoression(this);
    else
        return visitor->visitChildren(this);
}
//----------------- LeftShiftAssignExpressionContext ------------------------------------------------------------------

std::vector<RiddleParser::ExpressionContext *> RiddleParser::LeftShiftAssignExpressionContext::expression(){
    return getRuleContexts<RiddleParser::ExpressionContext>();
}

RiddleParser::ExpressionContext *RiddleParser::LeftShiftAssignExpressionContext::expression(size_t i){
    return getRuleContext<RiddleParser::ExpressionContext>(i);
}

tree::TerminalNode *RiddleParser::LeftShiftAssignExpressionContext::LeftShiftAssign(){
    return getToken(RiddleParser::LeftShiftAssign, 0);
}

RiddleParser::LeftShiftAssignExpressionContext::LeftShiftAssignExpressionContext(ExpressionContext *ctx){
    copyFrom(ctx);
}

void RiddleParser::LeftShiftAssignExpressionContext::enterRule(tree::ParseTreeListener *listener){
    auto parserListener=dynamic_cast<RiddleParserListener *>(listener);
    if(parserListener != nullptr)
        parserListener->enterLeftShiftAssignExpression(this);
}

void RiddleParser::LeftShiftAssignExpressionContext::exitRule(tree::ParseTreeListener *listener){
    auto parserListener=dynamic_cast<RiddleParserListener *>(listener);
    if(parserListener != nullptr)
        parserListener->exitLeftShiftAssignExpression(this);
}

std::any RiddleParser::LeftShiftAssignExpressionContext::accept(tree::ParseTreeVisitor *visitor){
    if(auto parserVisitor=dynamic_cast<RiddleParserVisitor *>(visitor))
        return parserVisitor->visitLeftShiftAssignExpression(this);
    else
        return visitor->visitChildren(this);
}
//----------------- CallExpressionContext ------------------------------------------------------------------

RiddleParser::IdExpressionContext *RiddleParser::CallExpressionContext::idExpression(){
    return getRuleContext<RiddleParser::IdExpressionContext>(0);
}

tree::TerminalNode *RiddleParser::CallExpressionContext::LeftBracket(){
    return getToken(RiddleParser::LeftBracket, 0);
}

RiddleParser::ExpressionContext *RiddleParser::CallExpressionContext::expression(){
    return getRuleContext<RiddleParser::ExpressionContext>(0);
}

tree::TerminalNode *RiddleParser::CallExpressionContext::RightBracket(){
    return getToken(RiddleParser::RightBracket, 0);
}

RiddleParser::CallExpressionContext::CallExpressionContext(ExpressionContext *ctx){ copyFrom(ctx); }

void RiddleParser::CallExpressionContext::enterRule(tree::ParseTreeListener *listener){
    auto parserListener=dynamic_cast<RiddleParserListener *>(listener);
    if(parserListener != nullptr)
        parserListener->enterCallExpression(this);
}

void RiddleParser::CallExpressionContext::exitRule(tree::ParseTreeListener *listener){
    auto parserListener=dynamic_cast<RiddleParserListener *>(listener);
    if(parserListener != nullptr)
        parserListener->exitCallExpression(this);
}

std::any RiddleParser::CallExpressionContext::accept(tree::ParseTreeVisitor *visitor){
    if(auto parserVisitor=dynamic_cast<RiddleParserVisitor *>(visitor))
        return parserVisitor->visitCallExpression(this);
    else
        return visitor->visitChildren(this);
}
//----------------- GreaterExpressionContext ------------------------------------------------------------------

std::vector<RiddleParser::ExpressionContext *> RiddleParser::GreaterExpressionContext::expression(){
    return getRuleContexts<RiddleParser::ExpressionContext>();
}

RiddleParser::ExpressionContext *RiddleParser::GreaterExpressionContext::expression(size_t i){
    return getRuleContext<RiddleParser::ExpressionContext>(i);
}

tree::TerminalNode *RiddleParser::GreaterExpressionContext::Greater(){
    return getToken(RiddleParser::Greater, 0);
}

RiddleParser::GreaterExpressionContext::GreaterExpressionContext(ExpressionContext *ctx){ copyFrom(ctx); }

void RiddleParser::GreaterExpressionContext::enterRule(tree::ParseTreeListener *listener){
    auto parserListener=dynamic_cast<RiddleParserListener *>(listener);
    if(parserListener != nullptr)
        parserListener->enterGreaterExpression(this);
}

void RiddleParser::GreaterExpressionContext::exitRule(tree::ParseTreeListener *listener){
    auto parserListener=dynamic_cast<RiddleParserListener *>(listener);
    if(parserListener != nullptr)
        parserListener->exitGreaterExpression(this);
}

std::any RiddleParser::GreaterExpressionContext::accept(tree::ParseTreeVisitor *visitor){
    if(auto parserVisitor=dynamic_cast<RiddleParserVisitor *>(visitor))
        return parserVisitor->visitGreaterExpression(this);
    else
        return visitor->visitChildren(this);
}
//----------------- RightMinusMinusExpressionContext ------------------------------------------------------------------

RiddleParser::IdExpressionContext *RiddleParser::RightMinusMinusExpressionContext::idExpression(){
    return getRuleContext<RiddleParser::IdExpressionContext>(0);
}

tree::TerminalNode *RiddleParser::RightMinusMinusExpressionContext::MinusMinus(){
    return getToken(RiddleParser::MinusMinus, 0);
}

RiddleParser::RightMinusMinusExpressionContext::RightMinusMinusExpressionContext(ExpressionContext *ctx){
    copyFrom(ctx);
}

void RiddleParser::RightMinusMinusExpressionContext::enterRule(tree::ParseTreeListener *listener){
    auto parserListener=dynamic_cast<RiddleParserListener *>(listener);
    if(parserListener != nullptr)
        parserListener->enterRightMinusMinusExpression(this);
}

void RiddleParser::RightMinusMinusExpressionContext::exitRule(tree::ParseTreeListener *listener){
    auto parserListener=dynamic_cast<RiddleParserListener *>(listener);
    if(parserListener != nullptr)
        parserListener->exitRightMinusMinusExpression(this);
}

std::any RiddleParser::RightMinusMinusExpressionContext::accept(tree::ParseTreeVisitor *visitor){
    if(auto parserVisitor=dynamic_cast<RiddleParserVisitor *>(visitor))
        return parserVisitor->visitRightMinusMinusExpression(this);
    else
        return visitor->visitChildren(this);
}
//----------------- QuoteExpressionContext ------------------------------------------------------------------

tree::TerminalNode *RiddleParser::QuoteExpressionContext::And(){
    return getToken(RiddleParser::And, 0);
}

RiddleParser::IdExpressionContext *RiddleParser::QuoteExpressionContext::idExpression(){
    return getRuleContext<RiddleParser::IdExpressionContext>(0);
}

RiddleParser::QuoteExpressionContext::QuoteExpressionContext(ExpressionContext *ctx){ copyFrom(ctx); }

void RiddleParser::QuoteExpressionContext::enterRule(tree::ParseTreeListener *listener){
    auto parserListener=dynamic_cast<RiddleParserListener *>(listener);
    if(parserListener != nullptr)
        parserListener->enterQuoteExpression(this);
}

void RiddleParser::QuoteExpressionContext::exitRule(tree::ParseTreeListener *listener){
    auto parserListener=dynamic_cast<RiddleParserListener *>(listener);
    if(parserListener != nullptr)
        parserListener->exitQuoteExpression(this);
}

std::any RiddleParser::QuoteExpressionContext::accept(tree::ParseTreeVisitor *visitor){
    if(auto parserVisitor=dynamic_cast<RiddleParserVisitor *>(visitor))
        return parserVisitor->visitQuoteExpression(this);
    else
        return visitor->visitChildren(this);
}
//----------------- GreaterEqualExpressionContext ------------------------------------------------------------------

std::vector<RiddleParser::ExpressionContext *> RiddleParser::GreaterEqualExpressionContext::expression(){
    return getRuleContexts<RiddleParser::ExpressionContext>();
}

RiddleParser::ExpressionContext *RiddleParser::GreaterEqualExpressionContext::expression(size_t i){
    return getRuleContext<RiddleParser::ExpressionContext>(i);
}

tree::TerminalNode *RiddleParser::GreaterEqualExpressionContext::GreaterEqual(){
    return getToken(RiddleParser::GreaterEqual, 0);
}

RiddleParser::GreaterEqualExpressionContext::GreaterEqualExpressionContext(ExpressionContext *ctx){ copyFrom(ctx); }

void RiddleParser::GreaterEqualExpressionContext::enterRule(tree::ParseTreeListener *listener){
    auto parserListener=dynamic_cast<RiddleParserListener *>(listener);
    if(parserListener != nullptr)
        parserListener->enterGreaterEqualExpression(this);
}

void RiddleParser::GreaterEqualExpressionContext::exitRule(tree::ParseTreeListener *listener){
    auto parserListener=dynamic_cast<RiddleParserListener *>(listener);
    if(parserListener != nullptr)
        parserListener->exitGreaterEqualExpression(this);
}

std::any RiddleParser::GreaterEqualExpressionContext::accept(tree::ParseTreeVisitor *visitor){
    if(auto parserVisitor=dynamic_cast<RiddleParserVisitor *>(visitor))
        return parserVisitor->visitGreaterEqualExpression(this);
    else
        return visitor->visitChildren(this);
}
//----------------- CaretExpressionContext ------------------------------------------------------------------

std::vector<RiddleParser::ExpressionContext *> RiddleParser::CaretExpressionContext::expression(){
    return getRuleContexts<RiddleParser::ExpressionContext>();
}

RiddleParser::ExpressionContext *RiddleParser::CaretExpressionContext::expression(size_t i){
    return getRuleContext<RiddleParser::ExpressionContext>(i);
}

tree::TerminalNode *RiddleParser::CaretExpressionContext::Caret(){
    return getToken(RiddleParser::Caret, 0);
}

RiddleParser::CaretExpressionContext::CaretExpressionContext(ExpressionContext *ctx){ copyFrom(ctx); }

void RiddleParser::CaretExpressionContext::enterRule(tree::ParseTreeListener *listener){
    auto parserListener=dynamic_cast<RiddleParserListener *>(listener);
    if(parserListener != nullptr)
        parserListener->enterCaretExpression(this);
}

void RiddleParser::CaretExpressionContext::exitRule(tree::ParseTreeListener *listener){
    auto parserListener=dynamic_cast<RiddleParserListener *>(listener);
    if(parserListener != nullptr)
        parserListener->exitCaretExpression(this);
}

std::any RiddleParser::CaretExpressionContext::accept(tree::ParseTreeVisitor *visitor){
    if(auto parserVisitor=dynamic_cast<RiddleParserVisitor *>(visitor))
        return parserVisitor->visitCaretExpression(this);
    else
        return visitor->visitChildren(this);
}
//----------------- StarExpressionContext ------------------------------------------------------------------

std::vector<RiddleParser::ExpressionContext *> RiddleParser::StarExpressionContext::expression(){
    return getRuleContexts<RiddleParser::ExpressionContext>();
}

RiddleParser::ExpressionContext *RiddleParser::StarExpressionContext::expression(size_t i){
    return getRuleContext<RiddleParser::ExpressionContext>(i);
}

tree::TerminalNode *RiddleParser::StarExpressionContext::Star(){
    return getToken(RiddleParser::Star, 0);
}

RiddleParser::StarExpressionContext::StarExpressionContext(ExpressionContext *ctx){ copyFrom(ctx); }

void RiddleParser::StarExpressionContext::enterRule(tree::ParseTreeListener *listener){
    auto parserListener=dynamic_cast<RiddleParserListener *>(listener);
    if(parserListener != nullptr)
        parserListener->enterStarExpression(this);
}

void RiddleParser::StarExpressionContext::exitRule(tree::ParseTreeListener *listener){
    auto parserListener=dynamic_cast<RiddleParserListener *>(listener);
    if(parserListener != nullptr)
        parserListener->exitStarExpression(this);
}

std::any RiddleParser::StarExpressionContext::accept(tree::ParseTreeVisitor *visitor){
    if(auto parserVisitor=dynamic_cast<RiddleParserVisitor *>(visitor))
        return parserVisitor->visitStarExpression(this);
    else
        return visitor->visitChildren(this);
}

RiddleParser::ExpressionContext *RiddleParser::expression(){
    return expression(0);
}

RiddleParser::ExpressionContext *RiddleParser::expression(int precedence){
    ParserRuleContext *parentContext=_ctx;
    size_t parentState=getState();
    RiddleParser::ExpressionContext *_localctx=_tracker.createInstance<ExpressionContext>(_ctx, parentState);
    RiddleParser::ExpressionContext *previousContext=_localctx;
    (void)previousContext; // Silence compiler, in case the context is not used by generated code.
    size_t startState=24;
    enterRecursionRule(_localctx, 24, RiddleParser::RuleExpression, precedence);


#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit=finally([=]{
#endif
        unrollRecursionContexts(parentContext);
    });
    try{
        size_t alt;
        enterOuterAlt(_localctx, 1);
        setState(195);
        _errHandler->sync(this);
        switch(getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)){
            case 1:{
                _localctx=_tracker.createInstance<T_primaryExpressionContext>(_localctx);
                _ctx=_localctx;
                previousContext=_localctx;

                setState(169);
                primaryExpression();
                break;
            }

            case 2:{
                _localctx=_tracker.createInstance<CallExpressionContext>(_localctx);
                _ctx=_localctx;
                previousContext=_localctx;
                setState(170);
                idExpression(0);
                setState(171);
                match(RiddleParser::LeftBracket);
                setState(172);
                expression(0);
                setState(173);
                match(RiddleParser::RightBracket);
                break;
            }

            case 3:{
                _localctx=_tracker.createInstance<RightPlusPlusExoressionContext>(_localctx);
                _ctx=_localctx;
                previousContext=_localctx;
                setState(175);
                idExpression(0);
                setState(176);
                match(RiddleParser::PlusPlus);
                break;
            }

            case 4:{
                _localctx=_tracker.createInstance<RightMinusMinusExpressionContext>(_localctx);
                _ctx=_localctx;
                previousContext=_localctx;
                setState(178);
                idExpression(0);
                setState(179);
                match(RiddleParser::MinusMinus);
                break;
            }

            case 5:{
                _localctx=_tracker.createInstance<LeftPlusPlusExoressionContext>(_localctx);
                _ctx=_localctx;
                previousContext=_localctx;
                setState(181);
                match(RiddleParser::PlusPlus);
                setState(182);
                idExpression(0);
                break;
            }

            case 6:{
                _localctx=_tracker.createInstance<LeftMinusMinusExpressionContext>(_localctx);
                _ctx=_localctx;
                previousContext=_localctx;
                setState(183);
                match(RiddleParser::MinusMinus);
                setState(184);
                idExpression(0);
                break;
            }

            case 7:{
                _localctx=_tracker.createInstance<PositiveExpressionContext>(_localctx);
                _ctx=_localctx;
                previousContext=_localctx;
                setState(185);
                match(RiddleParser::Plus);
                setState(186);
                expression(34);
                break;
            }

            case 8:{
                _localctx=_tracker.createInstance<NegativeExpressionContext>(_localctx);
                _ctx=_localctx;
                previousContext=_localctx;
                setState(187);
                match(RiddleParser::Minus);
                setState(188);
                expression(33);
                break;
            }

            case 9:{
                _localctx=_tracker.createInstance<NotExpressionContext>(_localctx);
                _ctx=_localctx;
                previousContext=_localctx;
                setState(189);
                match(RiddleParser::Not);
                setState(190);
                expression(32);
                break;
            }

            case 10:{
                _localctx=_tracker.createInstance<TildeExpressionContext>(_localctx);
                _ctx=_localctx;
                previousContext=_localctx;
                setState(191);
                match(RiddleParser::Tilde);
                setState(192);
                expression(31);
                break;
            }

            case 11:{
                _localctx=_tracker.createInstance<QuoteExpressionContext>(_localctx);
                _ctx=_localctx;
                previousContext=_localctx;
                setState(193);
                match(RiddleParser::And);
                setState(194);
                idExpression(0);
                break;
            }

            default:
                break;
        }
        _ctx->stop=_input->LT(-1);
        setState(286);
        _errHandler->sync(this);
        alt=getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx);
        while(alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER){
            if(alt == 1){
                if(!_parseListeners.empty())
                    triggerExitRuleEvent();
                previousContext=_localctx;
                setState(284);
                _errHandler->sync(this);
                switch(getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx)){
                    case 1:{
                        auto newContext=_tracker.createInstance<ModExpressionContext>(
                                _tracker.createInstance<ExpressionContext>(parentContext, parentState));
                        _localctx=newContext;
                        pushNewRecursionContext(newContext, startState, RuleExpression);
                        setState(197);

                        if(!(precpred(_ctx, 29))) throw FailedPredicateException(this, "precpred(_ctx, 29)");
                        setState(198);
                        match(RiddleParser::Mod);
                        setState(199);
                        expression(30);
                        break;
                    }

                    case 2:{
                        auto newContext=_tracker.createInstance<StarExpressionContext>(
                                _tracker.createInstance<ExpressionContext>(parentContext, parentState));
                        _localctx=newContext;
                        pushNewRecursionContext(newContext, startState, RuleExpression);
                        setState(200);

                        if(!(precpred(_ctx, 28))) throw FailedPredicateException(this, "precpred(_ctx, 28)");
                        setState(201);
                        match(RiddleParser::Star);
                        setState(202);
                        expression(29);
                        break;
                    }

                    case 3:{
                        auto newContext=_tracker.createInstance<DivExpressionContext>(
                                _tracker.createInstance<ExpressionContext>(parentContext, parentState));
                        _localctx=newContext;
                        pushNewRecursionContext(newContext, startState, RuleExpression);
                        setState(203);

                        if(!(precpred(_ctx, 27))) throw FailedPredicateException(this, "precpred(_ctx, 27)");
                        setState(204);
                        match(RiddleParser::Div);
                        setState(205);
                        expression(28);
                        break;
                    }

                    case 4:{
                        auto newContext=_tracker.createInstance<PlusExpressionContext>(
                                _tracker.createInstance<ExpressionContext>(parentContext, parentState));
                        _localctx=newContext;
                        pushNewRecursionContext(newContext, startState, RuleExpression);
                        setState(206);

                        if(!(precpred(_ctx, 26))) throw FailedPredicateException(this, "precpred(_ctx, 26)");
                        setState(207);
                        match(RiddleParser::Plus);
                        setState(208);
                        expression(27);
                        break;
                    }

                    case 5:{
                        auto newContext=_tracker.createInstance<MinusExpressionContext>(
                                _tracker.createInstance<ExpressionContext>(parentContext, parentState));
                        _localctx=newContext;
                        pushNewRecursionContext(newContext, startState, RuleExpression);
                        setState(209);

                        if(!(precpred(_ctx, 25))) throw FailedPredicateException(this, "precpred(_ctx, 25)");
                        setState(210);
                        match(RiddleParser::Minus);
                        setState(211);
                        expression(26);
                        break;
                    }

                    case 6:{
                        auto newContext=_tracker.createInstance<LeftShiftExpressionContext>(
                                _tracker.createInstance<ExpressionContext>(parentContext, parentState));
                        _localctx=newContext;
                        pushNewRecursionContext(newContext, startState, RuleExpression);
                        setState(212);

                        if(!(precpred(_ctx, 24))) throw FailedPredicateException(this, "precpred(_ctx, 24)");
                        setState(213);
                        match(RiddleParser::LeftShift);
                        setState(214);
                        expression(25);
                        break;
                    }

                    case 7:{
                        auto newContext=_tracker.createInstance<RightShiftExpressionContext>(
                                _tracker.createInstance<ExpressionContext>(parentContext, parentState));
                        _localctx=newContext;
                        pushNewRecursionContext(newContext, startState, RuleExpression);
                        setState(215);

                        if(!(precpred(_ctx, 23))) throw FailedPredicateException(this, "precpred(_ctx, 23)");
                        setState(216);
                        match(RiddleParser::RightShift);
                        setState(217);
                        expression(24);
                        break;
                    }

                    case 8:{
                        auto newContext=_tracker.createInstance<LessExpressionContext>(
                                _tracker.createInstance<ExpressionContext>(parentContext, parentState));
                        _localctx=newContext;
                        pushNewRecursionContext(newContext, startState, RuleExpression);
                        setState(218);

                        if(!(precpred(_ctx, 22))) throw FailedPredicateException(this, "precpred(_ctx, 22)");
                        setState(219);
                        match(RiddleParser::Less);
                        setState(220);
                        expression(23);
                        break;
                    }

                    case 9:{
                        auto newContext=_tracker.createInstance<GreaterExpressionContext>(
                                _tracker.createInstance<ExpressionContext>(parentContext, parentState));
                        _localctx=newContext;
                        pushNewRecursionContext(newContext, startState, RuleExpression);
                        setState(221);

                        if(!(precpred(_ctx, 21))) throw FailedPredicateException(this, "precpred(_ctx, 21)");
                        setState(222);
                        match(RiddleParser::Greater);
                        setState(223);
                        expression(22);
                        break;
                    }

                    case 10:{
                        auto newContext=_tracker.createInstance<LessEqualExpressionContext>(
                                _tracker.createInstance<ExpressionContext>(parentContext, parentState));
                        _localctx=newContext;
                        pushNewRecursionContext(newContext, startState, RuleExpression);
                        setState(224);

                        if(!(precpred(_ctx, 20))) throw FailedPredicateException(this, "precpred(_ctx, 20)");
                        setState(225);
                        match(RiddleParser::LessEqual);
                        setState(226);
                        expression(21);
                        break;
                    }

                    case 11:{
                        auto newContext=_tracker.createInstance<GreaterEqualExpressionContext>(
                                _tracker.createInstance<ExpressionContext>(parentContext, parentState));
                        _localctx=newContext;
                        pushNewRecursionContext(newContext, startState, RuleExpression);
                        setState(227);

                        if(!(precpred(_ctx, 19))) throw FailedPredicateException(this, "precpred(_ctx, 19)");
                        setState(228);
                        match(RiddleParser::GreaterEqual);
                        setState(229);
                        expression(20);
                        break;
                    }

                    case 12:{
                        auto newContext=_tracker.createInstance<EqualExpressionContext>(
                                _tracker.createInstance<ExpressionContext>(parentContext, parentState));
                        _localctx=newContext;
                        pushNewRecursionContext(newContext, startState, RuleExpression);
                        setState(230);

                        if(!(precpred(_ctx, 18))) throw FailedPredicateException(this, "precpred(_ctx, 18)");
                        setState(231);
                        match(RiddleParser::Equal);
                        setState(232);
                        expression(19);
                        break;
                    }

                    case 13:{
                        auto newContext=_tracker.createInstance<NotEqualExpressionContext>(
                                _tracker.createInstance<ExpressionContext>(parentContext, parentState));
                        _localctx=newContext;
                        pushNewRecursionContext(newContext, startState, RuleExpression);
                        setState(233);

                        if(!(precpred(_ctx, 17))) throw FailedPredicateException(this, "precpred(_ctx, 17)");
                        setState(234);
                        match(RiddleParser::NotEqual);
                        setState(235);
                        expression(18);
                        break;
                    }

                    case 14:{
                        auto newContext=_tracker.createInstance<AndExpressionContext>(
                                _tracker.createInstance<ExpressionContext>(parentContext, parentState));
                        _localctx=newContext;
                        pushNewRecursionContext(newContext, startState, RuleExpression);
                        setState(236);

                        if(!(precpred(_ctx, 16))) throw FailedPredicateException(this, "precpred(_ctx, 16)");
                        setState(237);
                        match(RiddleParser::And);
                        setState(238);
                        expression(17);
                        break;
                    }

                    case 15:{
                        auto newContext=_tracker.createInstance<CaretExpressionContext>(
                                _tracker.createInstance<ExpressionContext>(parentContext, parentState));
                        _localctx=newContext;
                        pushNewRecursionContext(newContext, startState, RuleExpression);
                        setState(239);

                        if(!(precpred(_ctx, 15))) throw FailedPredicateException(this, "precpred(_ctx, 15)");
                        setState(240);
                        match(RiddleParser::Caret);
                        setState(241);
                        expression(16);
                        break;
                    }

                    case 16:{
                        auto newContext=_tracker.createInstance<OrExpressionContext>(
                                _tracker.createInstance<ExpressionContext>(parentContext, parentState));
                        _localctx=newContext;
                        pushNewRecursionContext(newContext, startState, RuleExpression);
                        setState(242);

                        if(!(precpred(_ctx, 14))) throw FailedPredicateException(this, "precpred(_ctx, 14)");
                        setState(243);
                        match(RiddleParser::Or);
                        setState(244);
                        expression(15);
                        break;
                    }

                    case 17:{
                        auto newContext=_tracker.createInstance<AndAndExpressionContext>(
                                _tracker.createInstance<ExpressionContext>(parentContext, parentState));
                        _localctx=newContext;
                        pushNewRecursionContext(newContext, startState, RuleExpression);
                        setState(245);

                        if(!(precpred(_ctx, 13))) throw FailedPredicateException(this, "precpred(_ctx, 13)");
                        setState(246);
                        match(RiddleParser::AndAnd);
                        setState(247);
                        expression(14);
                        break;
                    }

                    case 18:{
                        auto newContext=_tracker.createInstance<OrOrExpressionContext>(
                                _tracker.createInstance<ExpressionContext>(parentContext, parentState));
                        _localctx=newContext;
                        pushNewRecursionContext(newContext, startState, RuleExpression);
                        setState(248);

                        if(!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
                        setState(249);
                        match(RiddleParser::OrOr);
                        setState(250);
                        expression(13);
                        break;
                    }

                    case 19:{
                        auto newContext=_tracker.createInstance<AssignExpressionContext>(
                                _tracker.createInstance<ExpressionContext>(parentContext, parentState));
                        _localctx=newContext;
                        pushNewRecursionContext(newContext, startState, RuleExpression);
                        setState(251);

                        if(!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
                        setState(252);
                        match(RiddleParser::Assign);
                        setState(253);
                        expression(11);
                        break;
                    }

                    case 20:{
                        auto newContext=_tracker.createInstance<PlusAssignExpressionContext>(
                                _tracker.createInstance<ExpressionContext>(parentContext, parentState));
                        _localctx=newContext;
                        pushNewRecursionContext(newContext, startState, RuleExpression);
                        setState(254);

                        if(!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
                        setState(255);
                        match(RiddleParser::PlusAssign);
                        setState(256);
                        expression(10);
                        break;
                    }

                    case 21:{
                        auto newContext=_tracker.createInstance<MinusAssignExpressionContext>(
                                _tracker.createInstance<ExpressionContext>(parentContext, parentState));
                        _localctx=newContext;
                        pushNewRecursionContext(newContext, startState, RuleExpression);
                        setState(257);

                        if(!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
                        setState(258);
                        match(RiddleParser::MinusAssign);
                        setState(259);
                        expression(9);
                        break;
                    }

                    case 22:{
                        auto newContext=_tracker.createInstance<DivAssignEpxressionContext>(
                                _tracker.createInstance<ExpressionContext>(parentContext, parentState));
                        _localctx=newContext;
                        pushNewRecursionContext(newContext, startState, RuleExpression);
                        setState(260);

                        if(!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
                        setState(261);
                        match(RiddleParser::DivAssign);
                        setState(262);
                        expression(8);
                        break;
                    }

                    case 23:{
                        auto newContext=_tracker.createInstance<ModAssignExpressionContext>(
                                _tracker.createInstance<ExpressionContext>(parentContext, parentState));
                        _localctx=newContext;
                        pushNewRecursionContext(newContext, startState, RuleExpression);
                        setState(263);

                        if(!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
                        setState(264);
                        match(RiddleParser::ModAssign);
                        setState(265);
                        expression(7);
                        break;
                    }

                    case 24:{
                        auto newContext=_tracker.createInstance<XorAssignExpressionContext>(
                                _tracker.createInstance<ExpressionContext>(parentContext, parentState));
                        _localctx=newContext;
                        pushNewRecursionContext(newContext, startState, RuleExpression);
                        setState(266);

                        if(!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
                        setState(267);
                        match(RiddleParser::XorAssign);
                        setState(268);
                        expression(6);
                        break;
                    }

                    case 25:{
                        auto newContext=_tracker.createInstance<AndAssignExpressionContext>(
                                _tracker.createInstance<ExpressionContext>(parentContext, parentState));
                        _localctx=newContext;
                        pushNewRecursionContext(newContext, startState, RuleExpression);
                        setState(269);

                        if(!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
                        setState(270);
                        match(RiddleParser::AndAssign);
                        setState(271);
                        expression(5);
                        break;
                    }

                    case 26:{
                        auto newContext=_tracker.createInstance<OrAssignExpressionContext>(
                                _tracker.createInstance<ExpressionContext>(parentContext, parentState));
                        _localctx=newContext;
                        pushNewRecursionContext(newContext, startState, RuleExpression);
                        setState(272);

                        if(!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
                        setState(273);
                        match(RiddleParser::OrAssign);
                        setState(274);
                        expression(4);
                        break;
                    }

                    case 27:{
                        auto newContext=_tracker.createInstance<LeftShiftAssignExpressionContext>(
                                _tracker.createInstance<ExpressionContext>(parentContext, parentState));
                        _localctx=newContext;
                        pushNewRecursionContext(newContext, startState, RuleExpression);
                        setState(275);

                        if(!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
                        setState(276);
                        match(RiddleParser::LeftShiftAssign);
                        setState(277);
                        expression(3);
                        break;
                    }

                    case 28:{
                        auto newContext=_tracker.createInstance<RightShiftAssignExpressionContext>(
                                _tracker.createInstance<ExpressionContext>(parentContext, parentState));
                        _localctx=newContext;
                        pushNewRecursionContext(newContext, startState, RuleExpression);
                        setState(278);

                        if(!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
                        setState(279);
                        match(RiddleParser::RightShiftAssign);
                        setState(280);
                        expression(2);
                        break;
                    }

                    case 29:{
                        auto newContext=_tracker.createInstance<CommaExpressionContext>(
                                _tracker.createInstance<ExpressionContext>(parentContext, parentState));
                        _localctx=newContext;
                        pushNewRecursionContext(newContext, startState, RuleExpression);
                        setState(281);

                        if(!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
                        setState(282);
                        match(RiddleParser::Comma);
                        setState(283);
                        expression(2);
                        break;
                    }

                    default:
                        break;
                }
            }
            setState(288);
            _errHandler->sync(this);
            alt=getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx);
        }
    }
    catch(RecognitionException &e){
        _errHandler->reportError(this, e);
        _localctx->exception=std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }
    return _localctx;
}

//----------------- TypeLiteralContext ------------------------------------------------------------------

RiddleParser::TypeLiteralContext::TypeLiteralContext(ParserRuleContext *parent, size_t invokingState)
        :ParserRuleContext(parent, invokingState){
}

RiddleParser::BasicTypeContext *RiddleParser::TypeLiteralContext::basicType(){
    return getRuleContext<RiddleParser::BasicTypeContext>(0);
}


size_t RiddleParser::TypeLiteralContext::getRuleIndex() const{
    return RiddleParser::RuleTypeLiteral;
}

void RiddleParser::TypeLiteralContext::enterRule(tree::ParseTreeListener *listener){
    auto parserListener=dynamic_cast<RiddleParserListener *>(listener);
    if(parserListener != nullptr)
        parserListener->enterTypeLiteral(this);
}

void RiddleParser::TypeLiteralContext::exitRule(tree::ParseTreeListener *listener){
    auto parserListener=dynamic_cast<RiddleParserListener *>(listener);
    if(parserListener != nullptr)
        parserListener->exitTypeLiteral(this);
}


std::any RiddleParser::TypeLiteralContext::accept(tree::ParseTreeVisitor *visitor){
    if(auto parserVisitor=dynamic_cast<RiddleParserVisitor *>(visitor))
        return parserVisitor->visitTypeLiteral(this);
    else
        return visitor->visitChildren(this);
}

RiddleParser::TypeLiteralContext *RiddleParser::typeLiteral(){
    TypeLiteralContext *_localctx=_tracker.createInstance<TypeLiteralContext>(_ctx, getState());
    enterRule(_localctx, 26, RiddleParser::RuleTypeLiteral);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit=finally([=]{
#endif
        exitRule();
    });
    try{
        enterOuterAlt(_localctx, 1);
        setState(289);
        basicType();

    }
    catch(RecognitionException &e){
        _errHandler->reportError(this, e);
        _localctx->exception=std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- BasicTypeContext ------------------------------------------------------------------

RiddleParser::BasicTypeContext::BasicTypeContext(ParserRuleContext *parent, size_t invokingState)
        :ParserRuleContext(parent, invokingState){
}

tree::TerminalNode *RiddleParser::BasicTypeContext::Int(){
    return getToken(RiddleParser::Int, 0);
}

tree::TerminalNode *RiddleParser::BasicTypeContext::Char(){
    return getToken(RiddleParser::Char, 0);
}

tree::TerminalNode *RiddleParser::BasicTypeContext::Float(){
    return getToken(RiddleParser::Float, 0);
}

tree::TerminalNode *RiddleParser::BasicTypeContext::Boolen(){
    return getToken(RiddleParser::Boolen, 0);
}

tree::TerminalNode *RiddleParser::BasicTypeContext::String(){
    return getToken(RiddleParser::String, 0);
}


size_t RiddleParser::BasicTypeContext::getRuleIndex() const{
    return RiddleParser::RuleBasicType;
}

void RiddleParser::BasicTypeContext::enterRule(tree::ParseTreeListener *listener){
    auto parserListener=dynamic_cast<RiddleParserListener *>(listener);
    if(parserListener != nullptr)
        parserListener->enterBasicType(this);
}

void RiddleParser::BasicTypeContext::exitRule(tree::ParseTreeListener *listener){
    auto parserListener=dynamic_cast<RiddleParserListener *>(listener);
    if(parserListener != nullptr)
        parserListener->exitBasicType(this);
}


std::any RiddleParser::BasicTypeContext::accept(tree::ParseTreeVisitor *visitor){
    if(auto parserVisitor=dynamic_cast<RiddleParserVisitor *>(visitor))
        return parserVisitor->visitBasicType(this);
    else
        return visitor->visitChildren(this);
}

RiddleParser::BasicTypeContext *RiddleParser::basicType(){
    BasicTypeContext *_localctx=_tracker.createInstance<BasicTypeContext>(_ctx, getState());
    enterRule(_localctx, 28, RiddleParser::RuleBasicType);
    size_t _la=0;

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit=finally([=]{
#endif
        exitRule();
    });
    try{
        enterOuterAlt(_localctx, 1);
        setState(291);
        _la=_input->LA(1);
        if(!((((_la & ~0x3fULL) == 0) &&
              ((1ULL << _la) & 31744) != 0))){
            _errHandler->recoverInline(this);
        } else{
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

//----------------- LiteralContext ------------------------------------------------------------------

RiddleParser::LiteralContext::LiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

RiddleParser::IntLiteralContext* RiddleParser::LiteralContext::intLiteral() {
  return getRuleContext<RiddleParser::IntLiteralContext>(0);
}

RiddleParser::StrLiteralContext *RiddleParser::LiteralContext::strLiteral(){
    return getRuleContext<RiddleParser::StrLiteralContext>(0);
}

RiddleParser::CharLiteralContext* RiddleParser::LiteralContext::charLiteral() {
  return getRuleContext<RiddleParser::CharLiteralContext>(0);
}

RiddleParser::FloatLiteralContext* RiddleParser::LiteralContext::floatLiteral() {
  return getRuleContext<RiddleParser::FloatLiteralContext>(0);
}

RiddleParser::BoolenLiteralContext *RiddleParser::LiteralContext::boolenLiteral(){
    return getRuleContext<RiddleParser::BoolenLiteralContext>(0);
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
    enterRule(_localctx, 30, RiddleParser::RuleLiteral);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
      setState(298);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
        case RiddleParser::IntegerLiteral:{
        enterOuterAlt(_localctx, 1);
            setState(293);
            intLiteral();
        break;
      }

        case RiddleParser::StringLiteral:{
        enterOuterAlt(_localctx, 2);
            setState(294);
            strLiteral();
        break;
      }

        case RiddleParser::CharLiteral:{
        enterOuterAlt(_localctx, 3);
            setState(295);
        charLiteral();
        break;
      }

        case RiddleParser::FloatLiteral:{
        enterOuterAlt(_localctx, 4);
            setState(296);
        floatLiteral();
        break;
      }

        case RiddleParser::False:
        case RiddleParser::True:{
        enterOuterAlt(_localctx, 5);
            setState(297);
            boolenLiteral();
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

//----------------- StrLiteralContext ------------------------------------------------------------------

RiddleParser::StrLiteralContext::StrLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode *RiddleParser::StrLiteralContext::StringLiteral(){
    return getToken(RiddleParser::StringLiteral, 0);
}


size_t RiddleParser::StrLiteralContext::getRuleIndex() const{
    return RiddleParser::RuleStrLiteral;
}

void RiddleParser::StrLiteralContext::enterRule(tree::ParseTreeListener *listener){
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
      parserListener->enterStrLiteral(this);
}

void RiddleParser::StrLiteralContext::exitRule(tree::ParseTreeListener *listener){
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
      parserListener->exitStrLiteral(this);
}


std::any RiddleParser::StrLiteralContext::accept(tree::ParseTreeVisitor *visitor){
  if (auto parserVisitor = dynamic_cast<RiddleParserVisitor*>(visitor))
      return parserVisitor->visitStrLiteral(this);
  else
    return visitor->visitChildren(this);
}

RiddleParser::StrLiteralContext *RiddleParser::strLiteral(){
    StrLiteralContext *_localctx=_tracker.createInstance<StrLiteralContext>(_ctx, getState());
    enterRule(_localctx, 32, RiddleParser::RuleStrLiteral);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
      setState(300);
      match(RiddleParser::StringLiteral);

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

tree::TerminalNode *RiddleParser::CharLiteralContext::CharLiteral(){
    return getToken(RiddleParser::CharLiteral, 0);
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
    enterRule(_localctx, 34, RiddleParser::RuleCharLiteral);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
      setState(302);
      match(RiddleParser::CharLiteral);

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

tree::TerminalNode *RiddleParser::IntLiteralContext::IntegerLiteral(){
    return getToken(RiddleParser::IntegerLiteral, 0);
}


size_t RiddleParser::IntLiteralContext::getRuleIndex() const{
    return RiddleParser::RuleIntLiteral;
}

void RiddleParser::IntLiteralContext::enterRule(tree::ParseTreeListener *listener){
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
      parserListener->enterIntLiteral(this);
}

void RiddleParser::IntLiteralContext::exitRule(tree::ParseTreeListener *listener){
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
      parserListener->exitIntLiteral(this);
}


std::any RiddleParser::IntLiteralContext::accept(tree::ParseTreeVisitor *visitor){
  if (auto parserVisitor = dynamic_cast<RiddleParserVisitor*>(visitor))
      return parserVisitor->visitIntLiteral(this);
  else
    return visitor->visitChildren(this);
}

RiddleParser::IntLiteralContext *RiddleParser::intLiteral(){
    IntLiteralContext *_localctx=_tracker.createInstance<IntLiteralContext>(_ctx, getState());
    enterRule(_localctx, 36, RiddleParser::RuleIntLiteral);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
      setState(304);
      match(RiddleParser::IntegerLiteral);

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

tree::TerminalNode *RiddleParser::FloatLiteralContext::FloatLiteral(){
    return getToken(RiddleParser::FloatLiteral, 0);
}


size_t RiddleParser::FloatLiteralContext::getRuleIndex() const{
    return RiddleParser::RuleFloatLiteral;
}

void RiddleParser::FloatLiteralContext::enterRule(tree::ParseTreeListener *listener){
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
      parserListener->enterFloatLiteral(this);
}

void RiddleParser::FloatLiteralContext::exitRule(tree::ParseTreeListener *listener){
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
      parserListener->exitFloatLiteral(this);
}


std::any RiddleParser::FloatLiteralContext::accept(tree::ParseTreeVisitor *visitor){
  if (auto parserVisitor = dynamic_cast<RiddleParserVisitor*>(visitor))
      return parserVisitor->visitFloatLiteral(this);
  else
    return visitor->visitChildren(this);
}

RiddleParser::FloatLiteralContext *RiddleParser::floatLiteral(){
    FloatLiteralContext *_localctx=_tracker.createInstance<FloatLiteralContext>(_ctx, getState());
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
      setState(306);
      match(RiddleParser::FloatLiteral);

  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BoolenLiteralContext ------------------------------------------------------------------

RiddleParser::BoolenLiteralContext::BoolenLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode *RiddleParser::BoolenLiteralContext::True(){
    return getToken(RiddleParser::True, 0);
}

tree::TerminalNode *RiddleParser::BoolenLiteralContext::False(){
    return getToken(RiddleParser::False, 0);
}


size_t RiddleParser::BoolenLiteralContext::getRuleIndex() const{
    return RiddleParser::RuleBoolenLiteral;
}

void RiddleParser::BoolenLiteralContext::enterRule(tree::ParseTreeListener *listener){
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
      parserListener->enterBoolenLiteral(this);
}

void RiddleParser::BoolenLiteralContext::exitRule(tree::ParseTreeListener *listener){
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
      parserListener->exitBoolenLiteral(this);
}


std::any RiddleParser::BoolenLiteralContext::accept(tree::ParseTreeVisitor *visitor){
  if (auto parserVisitor = dynamic_cast<RiddleParserVisitor*>(visitor))
      return parserVisitor->visitBoolenLiteral(this);
  else
    return visitor->visitChildren(this);
}

RiddleParser::BoolenLiteralContext *RiddleParser::boolenLiteral(){
    BoolenLiteralContext *_localctx=_tracker.createInstance<BoolenLiteralContext>(_ctx, getState());
    enterRule(_localctx, 40, RiddleParser::RuleBoolenLiteral);
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
      setState(308);
    _la = _input->LA(1);
      if(!(_la == RiddleParser::False

           || _la == RiddleParser::True)){
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

bool RiddleParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex){
    switch(ruleIndex){
        case 2:
            return statmentSempred(antlrcpp::downCast<StatmentContext *>(context), predicateIndex);
        case 5:
            return idExpressionSempred(antlrcpp::downCast<IdExpressionContext *>(context), predicateIndex);
        case 12:
            return expressionSempred(antlrcpp::downCast<ExpressionContext *>(context), predicateIndex);

        default:
            break;
    }
    return true;
}

bool RiddleParser::statmentSempred(StatmentContext *_localctx, size_t predicateIndex){
    switch(predicateIndex){
        case 0:
            return precpred(_ctx, 2);

        default:
            break;
    }
    return true;
}

bool RiddleParser::idExpressionSempred(IdExpressionContext *_localctx, size_t predicateIndex){
    switch(predicateIndex){
        case 1:
            return precpred(_ctx, 1);

        default:
            break;
    }
    return true;
}

bool RiddleParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex){
    switch(predicateIndex){
        case 2:
            return precpred(_ctx, 29);
        case 3:
            return precpred(_ctx, 28);
        case 4:
            return precpred(_ctx, 27);
        case 5:
            return precpred(_ctx, 26);
        case 6:
            return precpred(_ctx, 25);
        case 7:
            return precpred(_ctx, 24);
        case 8:
            return precpred(_ctx, 23);
        case 9:
            return precpred(_ctx, 22);
        case 10:
            return precpred(_ctx, 21);
        case 11:
            return precpred(_ctx, 20);
        case 12:
            return precpred(_ctx, 19);
        case 13:
            return precpred(_ctx, 18);
        case 14:
            return precpred(_ctx, 17);
        case 15:
            return precpred(_ctx, 16);
        case 16:
            return precpred(_ctx, 15);
        case 17:
            return precpred(_ctx, 14);
        case 18:
            return precpred(_ctx, 13);
        case 19:
            return precpred(_ctx, 12);
        case 20:
            return precpred(_ctx, 11);
        case 21:
            return precpred(_ctx, 10);
        case 22:
            return precpred(_ctx, 9);
        case 23:
            return precpred(_ctx, 8);
        case 24:
            return precpred(_ctx, 7);
        case 25:
            return precpred(_ctx, 6);
        case 26:
            return precpred(_ctx, 5);
        case 27:
            return precpred(_ctx, 4);
        case 28:
            return precpred(_ctx, 3);
        case 29:
            return precpred(_ctx, 2);
        case 30:
            return precpred(_ctx, 1);

        default:
            break;
    }
    return true;
}

void RiddleParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  riddleparserParserInitialize();
#else
  ::antlr4::internal::call_once(riddleparserParserOnceFlag, riddleparserParserInitialize);
#endif
}
