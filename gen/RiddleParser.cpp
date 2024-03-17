
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
            "variableDefine", "ifExpression", "while", "funcDefine", "funcBody",
            "block", "expression", "assignExpression", "equalExpression", "notEqualExpression",
            "greaterExpression", "lessExpression", "lessAssignExpression", "greaterAssignExpression",
            "plusAssignExpression", "minusAssignExpression", "idExpression", "typeLiteral",
            "basicType", "literal", "strLiteral", "charLiteral", "intLiteral",
            "floatLiteral", "boolenLiteral"
    },
    std::vector<std::string>{
            "", "'var'", "'val'", "'fun'", "'if'", "'else'", "'false'", "'true'",
            "'while'", "'print'", "'int'", "'float'", "'char'", "'bool'", "'string'",
            "'('", "')'", "'['", "']'", "'{'", "'}'", "'+'", "'-'", "'*'", "'/'",
            "'%'", "'^'", "'&'", "'|'", "'~'", "", "'='", "'<'", "'>'", "'+='",
            "'-='", "'*='", "'/='", "'%='", "'^='", "'&='", "'|='", "'<<='", "'>>='",
            "'=='", "'!='", "'<='", "'>='", "", "", "'++'", "'--'", "','", "'\\u003F'",
            "':'", "';'", "'.'", "", "", "", "", "", "", "'r'", "", "", "", "",
            "", "'\\n'"
    },
    std::vector<std::string>{
            "", "Var", "Val", "Fun", "If", "Else", "False", "True", "While", "Print",
            "Int", "Float", "Char", "Boolen", "String", "LeftParen", "RightParen",
            "LeftBracket", "RightBracket", "LeftBrace", "RightBrace", "Plus",
            "Minus", "Star", "Div", "Mod", "Caret", "And", "Or", "Tilde", "Not",
            "Assign", "Less", "Greater", "PlusAssign", "MinusAssign", "StarAssign",
            "DivAssign", "ModAssign", "XorAssign", "AndAssign", "OrAssign", "LeftShiftAssign",
            "RightShiftAssign", "Equal", "NotEqual", "LessEqual", "GreaterEqual",
            "AndAnd", "OrOr", "PlusPlus", "MinusMinus", "Comma", "Question", "Colon",
            "Semi", "Dot", "IntegerLiteral", "DecimalSequence", "OctalSequence",
            "BinarySequence", "HexadecimalSequence", "StringLiteral", "StringPrefix",
            "CharLiteral", "EscapeCharacter", "FloatLiteral", "Identfier", "Whitespace",
            "NewLine", "Newline", "BlockComment", "LineComment"
    }
  );
  static const int32_t serializedATNSegment[] = {
          4, 1, 72, 277, 2, 0, 7, 0, 2, 1, 7, 1, 2, 2, 7, 2, 2, 3, 7, 3, 2, 4, 7, 4, 2, 5, 7, 5, 2, 6, 7, 6, 2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
          21, 2, 22, 7, 22, 2, 23, 7, 23, 2, 24, 7, 24, 2, 25, 7, 25, 2, 26, 7, 26, 2, 27, 7, 27, 2, 28, 7,
          28, 2, 29, 7, 29, 1, 0, 5, 0, 62, 8, 0, 10, 0, 12, 0, 65, 9, 0, 1, 0, 3, 0, 68, 8, 0, 1, 0, 1, 0, 1,
          1, 1, 1, 1, 1, 1, 1, 3, 1, 76, 8, 1, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 3, 2, 86, 8, 2, 1,
          2, 1, 2, 1, 2, 3, 2, 91, 8, 2, 5, 2, 93, 8, 2, 10, 2, 12, 2, 96, 9, 2, 1, 3, 1, 3, 1, 3, 1, 3, 1, 3,
          1, 4, 1, 4, 1, 4, 1, 4, 1, 4, 1, 4, 1, 4, 3, 4, 110, 8, 4, 1, 5, 1, 5, 1, 5, 1, 5, 3, 5, 116, 8, 5, 1,
          5, 1, 5, 1, 5, 1, 5, 3, 5, 122, 8, 5, 5, 5, 124, 8, 5, 10, 5, 12, 5, 127, 9, 5, 1, 6, 1, 6, 1, 6, 1,
          6, 1, 6, 1, 6, 1, 6, 3, 6, 136, 8, 6, 1, 7, 1, 7, 1, 7, 1, 7, 1, 7, 1, 7, 1, 8, 1, 8, 1, 8, 1, 8, 1, 8,
          1, 8, 5, 8, 150, 8, 8, 10, 8, 12, 8, 153, 9, 8, 1, 8, 1, 8, 1, 8, 1, 9, 1, 9, 5, 9, 160, 8, 9, 10,
          9, 12, 9, 163, 9, 9, 1, 9, 1, 9, 1, 10, 1, 10, 5, 10, 169, 8, 10, 10, 10, 12, 10, 172, 9, 10, 1,
          10, 1, 10, 1, 11, 1, 11, 1, 12, 1, 12, 1, 12, 1, 12, 3, 12, 182, 8, 12, 1, 13, 1, 13, 1, 13, 1,
          13, 1, 13, 1, 13, 5, 13, 190, 8, 13, 10, 13, 12, 13, 193, 9, 13, 1, 14, 1, 14, 1, 14, 1, 14, 1,
          14, 1, 14, 5, 14, 201, 8, 14, 10, 14, 12, 14, 204, 9, 14, 1, 15, 1, 15, 1, 15, 1, 15, 1, 15, 1,
          15, 5, 15, 212, 8, 15, 10, 15, 12, 15, 215, 9, 15, 1, 16, 1, 16, 1, 16, 1, 16, 1, 16, 1, 16, 5,
          16, 223, 8, 16, 10, 16, 12, 16, 226, 9, 16, 1, 17, 1, 17, 1, 17, 1, 17, 1, 17, 1, 17, 5, 17, 234,
          8, 17, 10, 17, 12, 17, 237, 9, 17, 1, 18, 1, 18, 1, 18, 1, 18, 1, 18, 1, 18, 5, 18, 245, 8, 18,
          10, 18, 12, 18, 248, 9, 18, 1, 19, 1, 19, 1, 20, 1, 20, 1, 21, 1, 21, 1, 22, 1, 22, 1, 23, 1, 23,
          1, 24, 1, 24, 1, 24, 1, 24, 1, 24, 3, 24, 265, 8, 24, 1, 25, 1, 25, 1, 26, 1, 26, 1, 27, 1, 27,
          1, 28, 1, 28, 1, 29, 1, 29, 1, 29, 0, 7, 4, 26, 28, 30, 32, 34, 36, 30, 0, 2, 4, 6, 8, 10, 12, 14,
          16, 18, 20, 22, 24, 26, 28, 30, 32, 34, 36, 38, 40, 42, 44, 46, 48, 50, 52, 54, 56, 58, 0, 3,
          1, 0, 1, 2, 1, 0, 10, 14, 1, 0, 6, 7, 278, 0, 63, 1, 0, 0, 0, 2, 75, 1, 0, 0, 0, 4, 85, 1, 0, 0, 0,
          6, 97, 1, 0, 0, 0, 8, 109, 1, 0, 0, 0, 10, 111, 1, 0, 0, 0, 12, 128, 1, 0, 0, 0, 14, 137, 1, 0, 0,
          0, 16, 143, 1, 0, 0, 0, 18, 157, 1, 0, 0, 0, 20, 166, 1, 0, 0, 0, 22, 175, 1, 0, 0, 0, 24, 181,
          1, 0, 0, 0, 26, 183, 1, 0, 0, 0, 28, 194, 1, 0, 0, 0, 30, 205, 1, 0, 0, 0, 32, 216, 1, 0, 0, 0, 34,
          227, 1, 0, 0, 0, 36, 238, 1, 0, 0, 0, 38, 249, 1, 0, 0, 0, 40, 251, 1, 0, 0, 0, 42, 253, 1, 0, 0,
          0, 44, 255, 1, 0, 0, 0, 46, 257, 1, 0, 0, 0, 48, 264, 1, 0, 0, 0, 50, 266, 1, 0, 0, 0, 52, 268,
          1, 0, 0, 0, 54, 270, 1, 0, 0, 0, 56, 272, 1, 0, 0, 0, 58, 274, 1, 0, 0, 0, 60, 62, 3, 2, 1, 0, 61,
          60, 1, 0, 0, 0, 62, 65, 1, 0, 0, 0, 63, 61, 1, 0, 0, 0, 63, 64, 1, 0, 0, 0, 64, 67, 1, 0, 0, 0, 65,
          63, 1, 0, 0, 0, 66, 68, 3, 4, 2, 0, 67, 66, 1, 0, 0, 0, 67, 68, 1, 0, 0, 0, 68, 69, 1, 0, 0, 0, 69,
          70, 5, 0, 0, 1, 70, 1, 1, 0, 0, 0, 71, 72, 3, 4, 2, 0, 72, 73, 5, 69, 0, 0, 73, 76, 1, 0, 0, 0, 74,
          76, 5, 69, 0, 0, 75, 71, 1, 0, 0, 0, 75, 74, 1, 0, 0, 0, 76, 3, 1, 0, 0, 0, 77, 78, 6, 2, -1, 0, 78,
          86, 3, 10, 5, 0, 79, 86, 3, 22, 11, 0, 80, 86, 3, 20, 10, 0, 81, 86, 3, 16, 8, 0, 82, 86, 3, 14,
          7, 0, 83, 86, 3, 6, 3, 0, 84, 86, 5, 55, 0, 0, 85, 77, 1, 0, 0, 0, 85, 79, 1, 0, 0, 0, 85, 80, 1,
          0, 0, 0, 85, 81, 1, 0, 0, 0, 85, 82, 1, 0, 0, 0, 85, 83, 1, 0, 0, 0, 85, 84, 1, 0, 0, 0, 86, 94, 1,
          0, 0, 0, 87, 88, 10, 2, 0, 0, 88, 90, 5, 55, 0, 0, 89, 91, 3, 4, 2, 0, 90, 89, 1, 0, 0, 0, 90, 91,
          1, 0, 0, 0, 91, 93, 1, 0, 0, 0, 92, 87, 1, 0, 0, 0, 93, 96, 1, 0, 0, 0, 94, 92, 1, 0, 0, 0, 94, 95,
          1, 0, 0, 0, 95, 5, 1, 0, 0, 0, 96, 94, 1, 0, 0, 0, 97, 98, 5, 9, 0, 0, 98, 99, 5, 15, 0, 0, 99, 100,
          3, 22, 11, 0, 100, 101, 5, 16, 0, 0, 101, 7, 1, 0, 0, 0, 102, 110, 3, 48, 24, 0, 103, 110, 3,
          42, 21, 0, 104, 105, 5, 15, 0, 0, 105, 106, 3, 22, 11, 0, 106, 107, 5, 16, 0, 0, 107, 110, 1,
          0, 0, 0, 108, 110, 3, 12, 6, 0, 109, 102, 1, 0, 0, 0, 109, 103, 1, 0, 0, 0, 109, 104, 1, 0, 0,
          0, 109, 108, 1, 0, 0, 0, 110, 9, 1, 0, 0, 0, 111, 112, 7, 0, 0, 0, 112, 115, 5, 67, 0, 0, 113,
          114, 5, 31, 0, 0, 114, 116, 3, 22, 11, 0, 115, 113, 1, 0, 0, 0, 115, 116, 1, 0, 0, 0, 116, 125,
          1, 0, 0, 0, 117, 118, 5, 52, 0, 0, 118, 121, 5, 67, 0, 0, 119, 120, 5, 31, 0, 0, 120, 122, 3,
          22, 11, 0, 121, 119, 1, 0, 0, 0, 121, 122, 1, 0, 0, 0, 122, 124, 1, 0, 0, 0, 123, 117, 1, 0, 0,
          0, 124, 127, 1, 0, 0, 0, 125, 123, 1, 0, 0, 0, 125, 126, 1, 0, 0, 0, 126, 11, 1, 0, 0, 0, 127,
          125, 1, 0, 0, 0, 128, 129, 5, 4, 0, 0, 129, 130, 5, 15, 0, 0, 130, 131, 3, 22, 11, 0, 131, 132,
          5, 16, 0, 0, 132, 135, 3, 4, 2, 0, 133, 134, 5, 5, 0, 0, 134, 136, 3, 4, 2, 0, 135, 133, 1, 0,
          0, 0, 135, 136, 1, 0, 0, 0, 136, 13, 1, 0, 0, 0, 137, 138, 5, 8, 0, 0, 138, 139, 5, 15, 0, 0, 139,
          140, 3, 22, 11, 0, 140, 141, 5, 16, 0, 0, 141, 142, 3, 4, 2, 0, 142, 15, 1, 0, 0, 0, 143, 144,
          5, 3, 0, 0, 144, 145, 5, 67, 0, 0, 145, 151, 5, 15, 0, 0, 146, 147, 5, 67, 0, 0, 147, 148, 5,
          54, 0, 0, 148, 150, 3, 44, 22, 0, 149, 146, 1, 0, 0, 0, 150, 153, 1, 0, 0, 0, 151, 149, 1, 0,
          0, 0, 151, 152, 1, 0, 0, 0, 152, 154, 1, 0, 0, 0, 153, 151, 1, 0, 0, 0, 154, 155, 5, 16, 0, 0,
          155, 156, 3, 18, 9, 0, 156, 17, 1, 0, 0, 0, 157, 161, 5, 19, 0, 0, 158, 160, 3, 4, 2, 0, 159,
          158, 1, 0, 0, 0, 160, 163, 1, 0, 0, 0, 161, 159, 1, 0, 0, 0, 161, 162, 1, 0, 0, 0, 162, 164, 1,
          0, 0, 0, 163, 161, 1, 0, 0, 0, 164, 165, 5, 20, 0, 0, 165, 19, 1, 0, 0, 0, 166, 170, 5, 19, 0,
          0, 167, 169, 3, 4, 2, 0, 168, 167, 1, 0, 0, 0, 169, 172, 1, 0, 0, 0, 170, 168, 1, 0, 0, 0, 170,
          171, 1, 0, 0, 0, 171, 173, 1, 0, 0, 0, 172, 170, 1, 0, 0, 0, 173, 174, 5, 20, 0, 0, 174, 21, 1,
          0, 0, 0, 175, 176, 3, 24, 12, 0, 176, 23, 1, 0, 0, 0, 177, 182, 3, 26, 13, 0, 178, 179, 5, 67,
          0, 0, 179, 180, 5, 31, 0, 0, 180, 182, 3, 24, 12, 0, 181, 177, 1, 0, 0, 0, 181, 178, 1, 0, 0,
          0, 182, 25, 1, 0, 0, 0, 183, 184, 6, 13, -1, 0, 184, 185, 3, 28, 14, 0, 185, 191, 1, 0, 0, 0,
          186, 187, 10, 1, 0, 0, 187, 188, 5, 44, 0, 0, 188, 190, 3, 26, 13, 1, 189, 186, 1, 0, 0, 0, 190,
          193, 1, 0, 0, 0, 191, 189, 1, 0, 0, 0, 191, 192, 1, 0, 0, 0, 192, 27, 1, 0, 0, 0, 193, 191, 1,
          0, 0, 0, 194, 195, 6, 14, -1, 0, 195, 196, 3, 30, 15, 0, 196, 202, 1, 0, 0, 0, 197, 198, 10,
          1, 0, 0, 198, 199, 5, 45, 0, 0, 199, 201, 3, 28, 14, 1, 200, 197, 1, 0, 0, 0, 201, 204, 1, 0,
          0, 0, 202, 200, 1, 0, 0, 0, 202, 203, 1, 0, 0, 0, 203, 29, 1, 0, 0, 0, 204, 202, 1, 0, 0, 0, 205,
          206, 6, 15, -1, 0, 206, 207, 3, 32, 16, 0, 207, 213, 1, 0, 0, 0, 208, 209, 10, 1, 0, 0, 209,
          210, 5, 33, 0, 0, 210, 212, 3, 30, 15, 1, 211, 208, 1, 0, 0, 0, 212, 215, 1, 0, 0, 0, 213, 211,
          1, 0, 0, 0, 213, 214, 1, 0, 0, 0, 214, 31, 1, 0, 0, 0, 215, 213, 1, 0, 0, 0, 216, 217, 6, 16, -1,
          0, 217, 218, 3, 34, 17, 0, 218, 224, 1, 0, 0, 0, 219, 220, 10, 1, 0, 0, 220, 221, 5, 32, 0, 0,
          221, 223, 3, 32, 16, 1, 222, 219, 1, 0, 0, 0, 223, 226, 1, 0, 0, 0, 224, 222, 1, 0, 0, 0, 224,
          225, 1, 0, 0, 0, 225, 33, 1, 0, 0, 0, 226, 224, 1, 0, 0, 0, 227, 228, 6, 17, -1, 0, 228, 229,
          3, 36, 18, 0, 229, 235, 1, 0, 0, 0, 230, 231, 10, 1, 0, 0, 231, 232, 5, 46, 0, 0, 232, 234, 3,
          34, 17, 1, 233, 230, 1, 0, 0, 0, 234, 237, 1, 0, 0, 0, 235, 233, 1, 0, 0, 0, 235, 236, 1, 0, 0,
          0, 236, 35, 1, 0, 0, 0, 237, 235, 1, 0, 0, 0, 238, 239, 6, 18, -1, 0, 239, 240, 3, 8, 4, 0, 240,
          246, 1, 0, 0, 0, 241, 242, 10, 1, 0, 0, 242, 243, 5, 47, 0, 0, 243, 245, 3, 36, 18, 1, 244, 241,
          1, 0, 0, 0, 245, 248, 1, 0, 0, 0, 246, 244, 1, 0, 0, 0, 246, 247, 1, 0, 0, 0, 247, 37, 1, 0, 0,
          0, 248, 246, 1, 0, 0, 0, 249, 250, 1, 0, 0, 0, 250, 39, 1, 0, 0, 0, 251, 252, 1, 0, 0, 0, 252,
          41, 1, 0, 0, 0, 253, 254, 5, 67, 0, 0, 254, 43, 1, 0, 0, 0, 255, 256, 3, 46, 23, 0, 256, 45, 1,
          0, 0, 0, 257, 258, 7, 1, 0, 0, 258, 47, 1, 0, 0, 0, 259, 265, 3, 54, 27, 0, 260, 265, 3, 50, 25,
          0, 261, 265, 3, 52, 26, 0, 262, 265, 3, 56, 28, 0, 263, 265, 3, 58, 29, 0, 264, 259, 1, 0, 0,
          0, 264, 260, 1, 0, 0, 0, 264, 261, 1, 0, 0, 0, 264, 262, 1, 0, 0, 0, 264, 263, 1, 0, 0, 0, 265,
          49, 1, 0, 0, 0, 266, 267, 5, 62, 0, 0, 267, 51, 1, 0, 0, 0, 268, 269, 5, 64, 0, 0, 269, 53, 1,
          0, 0, 0, 270, 271, 5, 57, 0, 0, 271, 55, 1, 0, 0, 0, 272, 273, 5, 66, 0, 0, 273, 57, 1, 0, 0, 0,
          274, 275, 7, 2, 0, 0, 275, 59, 1, 0, 0, 0, 22, 63, 67, 75, 85, 90, 94, 109, 115, 121, 125, 135,
          151, 161, 170, 181, 191, 202, 213, 224, 235, 246, 264
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
      setState(63);
      _errHandler->sync(this);
      alt=getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
      while(alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER){
          if(alt == 1){
              setState(60);
              newline_statment();
          }
          setState(65);
          _errHandler->sync(this);
          alt=getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
      }
      setState(67);
    _errHandler->sync(this);

    _la = _input->LA(1);
      if((((_la & ~0x3fULL) == 0) &&
          ((1ULL << _la) & 4791830003522765790) != 0) || ((((_la-64) & ~0x3fULL) == 0) &&
                                                          ((1ULL << (_la-64)) & 13) != 0)){
          setState(66);
          statment(0);
      }
      setState(69);
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
        setState(75);
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
            case RiddleParser::Semi:
            case RiddleParser::IntegerLiteral:
            case RiddleParser::StringLiteral:
            case RiddleParser::CharLiteral:
            case RiddleParser::FloatLiteral:
            case RiddleParser::Identfier:{
                enterOuterAlt(_localctx, 1);
                setState(71);
                statment(0);
                setState(72);
                match(RiddleParser::NewLine);
                break;
            }

            case RiddleParser::NewLine:{
                enterOuterAlt(_localctx, 2);
                setState(74);
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
      setState(85);
    _errHandler->sync(this);
      switch(_input->LA(1)){
          case RiddleParser::Var:
          case RiddleParser::Val:{
              setState(78);
              variableDefine();
              break;
          }

          case RiddleParser::If:
          case RiddleParser::False:
          case RiddleParser::True:
          case RiddleParser::LeftParen:
          case RiddleParser::IntegerLiteral:
          case RiddleParser::StringLiteral:
          case RiddleParser::CharLiteral:
          case RiddleParser::FloatLiteral:
          case RiddleParser::Identfier:{
              setState(79);
              expression();
              break;
          }

          case RiddleParser::LeftBrace:{
              setState(80);
              block();
              break;
          }

          case RiddleParser::Fun:{
              setState(81);
              funcDefine();
              break;
          }

          case RiddleParser::While:{
              setState(82);
              while_();
              break;
          }

          case RiddleParser::Print:{
              setState(83);
              print();
              break;
          }

          case RiddleParser::Semi:{
              setState(84);
        match(RiddleParser::Semi);
        break;
          }

          default:
              throw NoViableAltException(this);
      }
      _ctx->stop=_input->LT(-1);
      setState(94);
      _errHandler->sync(this);
      alt=getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
      while(alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER){
          if(alt == 1){
              if(!_parseListeners.empty())
                  triggerExitRuleEvent();
              previousContext=_localctx;
              _localctx=_tracker.createInstance<StatmentContext>(parentContext, parentState);
              pushNewRecursionContext(_localctx, startState, RuleStatment);
              setState(87);

              if(!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
              setState(88);
              match(RiddleParser::Semi);
              setState(90);
              _errHandler->sync(this);

              switch(getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)){
                  case 1:{
                      setState(89);
                      statment(0);
                      break;
                  }

                  default:
                      break;
              }
          }
          setState(96);
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
        setState(97);
        match(RiddleParser::Print);
        setState(98);
        match(RiddleParser::LeftParen);
        setState(99);
        expression();
        setState(100);
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
      setState(109);
    _errHandler->sync(this);
      switch(_input->LA(1)){
          case RiddleParser::False:
          case RiddleParser::True:
          case RiddleParser::IntegerLiteral:
          case RiddleParser::StringLiteral:
          case RiddleParser::CharLiteral:
          case RiddleParser::FloatLiteral:{
              enterOuterAlt(_localctx, 1);
              setState(102);
              literal();
              break;
          }

          case RiddleParser::Identfier:{
              enterOuterAlt(_localctx, 2);
              setState(103);
              idExpression();
              break;
          }

          case RiddleParser::LeftParen:{
              enterOuterAlt(_localctx, 3);
              setState(104);
              match(RiddleParser::LeftParen);
              setState(105);
              expression();
              setState(106);
              match(RiddleParser::RightParen);
              break;
          }

          case RiddleParser::If:{
              enterOuterAlt(_localctx, 4);
              setState(108);
              ifExpression();
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
    enterRule(_localctx, 10, RiddleParser::RuleVariableDefine);
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
      setState(111);
      _la=_input->LA(1);
      if(!(_la == RiddleParser::Var

           || _la == RiddleParser::Val)){
          _errHandler->recoverInline(this);
      } else{
          _errHandler->reportMatch(this);
          consume();
    }

      setState(112);
      match(RiddleParser::Identfier);
      setState(115);
      _errHandler->sync(this);

      switch(getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)){
          case 1:{
              setState(113);
              match(RiddleParser::Assign);
              setState(114);
              expression();
              break;
          }

          default:
              break;
      }
      setState(125);
      _errHandler->sync(this);
      alt=getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx);
      while(alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER){
          if(alt == 1){
              setState(117);
              match(RiddleParser::Comma);

              setState(118);
              match(RiddleParser::Identfier);
              setState(121);
              _errHandler->sync(this);

              switch(getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)){
                  case 1:{
                      setState(119);
                      match(RiddleParser::Assign);
                      setState(120);
                      expression();
                      break;
                  }

                  default:
                      break;
              }
          }
          setState(127);
          _errHandler->sync(this);
          alt=getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx);
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
    enterRule(_localctx, 12, RiddleParser::RuleIfExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
      enterOuterAlt(_localctx, 1);
      setState(128);
      match(RiddleParser::If);
      setState(129);
      match(RiddleParser::LeftParen);
      setState(130);
      expression();
      setState(131);
      match(RiddleParser::RightParen);
      setState(132);
      statment(0);
      setState(135);
      _errHandler->sync(this);

      switch(getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)){
          case 1:{
              setState(133);
              match(RiddleParser::Else);
              setState(134);
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
    enterRule(_localctx, 14, RiddleParser::RuleWhile);

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
      match(RiddleParser::While);
      setState(138);
    match(RiddleParser::LeftParen);
      setState(139);
      expression();
      setState(140);
    match(RiddleParser::RightParen);
      setState(141);
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
    enterRule(_localctx, 16, RiddleParser::RuleFuncDefine);
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
      setState(143);
      match(RiddleParser::Fun);
      setState(144);
      match(RiddleParser::Identfier);
      setState(145);
      match(RiddleParser::LeftParen);
      setState(151);
      _errHandler->sync(this);
      _la=_input->LA(1);
      while(_la == RiddleParser::Identfier){
          setState(146);
          match(RiddleParser::Identfier);
          setState(147);
          match(RiddleParser::Colon);
          setState(148);
          typeLiteral();
          setState(153);
          _errHandler->sync(this);
          _la=_input->LA(1);
      }
      setState(154);
    match(RiddleParser::RightParen);
      setState(155);
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
    enterRule(_localctx, 18, RiddleParser::RuleFuncBody);
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
      setState(157);
    match(RiddleParser::LeftBrace);
      setState(161);
    _errHandler->sync(this);
    _la = _input->LA(1);
      while((((_la & ~0x3fULL) == 0) &&
             ((1ULL << _la) & 4791830003522765790) != 0) || ((((_la-64) & ~0x3fULL) == 0) &&
                                                             ((1ULL << (_la-64)) & 13) != 0)){
          setState(158);
          statment(0);
          setState(163);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
      setState(164);
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
    enterRule(_localctx, 20, RiddleParser::RuleBlock);
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
      setState(166);
      match(RiddleParser::LeftBrace);
      setState(170);
      _errHandler->sync(this);
      _la=_input->LA(1);
      while((((_la & ~0x3fULL) == 0) &&
             ((1ULL << _la) & 4791830003522765790) != 0) || ((((_la-64) & ~0x3fULL) == 0) &&
                                                             ((1ULL << (_la-64)) & 13) != 0)){
          setState(167);
          statment(0);
          setState(172);
          _errHandler->sync(this);
          _la=_input->LA(1);
      }
      setState(173);
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

RiddleParser::AssignExpressionContext *RiddleParser::ExpressionContext::assignExpression(){
    return getRuleContext<RiddleParser::AssignExpressionContext>(0);
}


size_t RiddleParser::ExpressionContext::getRuleIndex() const{
    return RiddleParser::RuleExpression;
}

void RiddleParser::ExpressionContext::enterRule(tree::ParseTreeListener *listener){
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
      parserListener->enterExpression(this);
}

void RiddleParser::ExpressionContext::exitRule(tree::ParseTreeListener *listener){
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
      parserListener->exitExpression(this);
}


std::any RiddleParser::ExpressionContext::accept(tree::ParseTreeVisitor *visitor){
  if (auto parserVisitor = dynamic_cast<RiddleParserVisitor*>(visitor))
      return parserVisitor->visitExpression(this);
  else
    return visitor->visitChildren(this);
}

RiddleParser::ExpressionContext *RiddleParser::expression(){
    ExpressionContext *_localctx=_tracker.createInstance<ExpressionContext>(_ctx, getState());
    enterRule(_localctx, 22, RiddleParser::RuleExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
      setState(175);
      assignExpression();

  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignExpressionContext ------------------------------------------------------------------

RiddleParser::AssignExpressionContext::AssignExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

RiddleParser::EqualExpressionContext *RiddleParser::AssignExpressionContext::equalExpression(){
    return getRuleContext<RiddleParser::EqualExpressionContext>(0);
}

tree::TerminalNode *RiddleParser::AssignExpressionContext::Identfier(){
    return getToken(RiddleParser::Identfier, 0);
}

tree::TerminalNode *RiddleParser::AssignExpressionContext::Assign(){
    return getToken(RiddleParser::Assign, 0);
}

RiddleParser::AssignExpressionContext *RiddleParser::AssignExpressionContext::assignExpression(){
    return getRuleContext<RiddleParser::AssignExpressionContext>(0);
}


size_t RiddleParser::AssignExpressionContext::getRuleIndex() const{
    return RiddleParser::RuleAssignExpression;
}

void RiddleParser::AssignExpressionContext::enterRule(tree::ParseTreeListener *listener){
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
      parserListener->enterAssignExpression(this);
}

void RiddleParser::AssignExpressionContext::exitRule(tree::ParseTreeListener *listener){
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
      parserListener->exitAssignExpression(this);
}


std::any RiddleParser::AssignExpressionContext::accept(tree::ParseTreeVisitor *visitor){
  if (auto parserVisitor = dynamic_cast<RiddleParserVisitor*>(visitor))
      return parserVisitor->visitAssignExpression(this);
  else
    return visitor->visitChildren(this);
}

RiddleParser::AssignExpressionContext *RiddleParser::assignExpression(){
    AssignExpressionContext *_localctx=_tracker.createInstance<AssignExpressionContext>(_ctx, getState());
    enterRule(_localctx, 24, RiddleParser::RuleAssignExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
      setState(181);
    _errHandler->sync(this);
      switch(getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)){
    case 1: {
        enterOuterAlt(_localctx, 1);
        setState(177);
        equalExpression(0);
      break;
    }

    case 2: {
        enterOuterAlt(_localctx, 2);
        setState(178);
        match(RiddleParser::Identfier);
        setState(179);
        match(RiddleParser::Assign);
        setState(180);
        assignExpression();
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

//----------------- EqualExpressionContext ------------------------------------------------------------------

RiddleParser::EqualExpressionContext::EqualExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

RiddleParser::NotEqualExpressionContext *RiddleParser::EqualExpressionContext::notEqualExpression(){
    return getRuleContext<RiddleParser::NotEqualExpressionContext>(0);
}

std::vector<RiddleParser::EqualExpressionContext *> RiddleParser::EqualExpressionContext::equalExpression(){
    return getRuleContexts<RiddleParser::EqualExpressionContext>();
}

RiddleParser::EqualExpressionContext *RiddleParser::EqualExpressionContext::equalExpression(size_t i){
    return getRuleContext<RiddleParser::EqualExpressionContext>(i);
}

tree::TerminalNode *RiddleParser::EqualExpressionContext::Equal(){
    return getToken(RiddleParser::Equal, 0);
}


size_t RiddleParser::EqualExpressionContext::getRuleIndex() const{
    return RiddleParser::RuleEqualExpression;
}

void RiddleParser::EqualExpressionContext::enterRule(tree::ParseTreeListener *listener){
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
      parserListener->enterEqualExpression(this);
}

void RiddleParser::EqualExpressionContext::exitRule(tree::ParseTreeListener *listener){
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
      parserListener->exitEqualExpression(this);
}


std::any RiddleParser::EqualExpressionContext::accept(tree::ParseTreeVisitor *visitor){
  if (auto parserVisitor = dynamic_cast<RiddleParserVisitor*>(visitor))
      return parserVisitor->visitEqualExpression(this);
  else
    return visitor->visitChildren(this);
}


RiddleParser::EqualExpressionContext *RiddleParser::equalExpression(){
    return equalExpression(0);
}

RiddleParser::EqualExpressionContext *RiddleParser::equalExpression(int precedence){
    ParserRuleContext *parentContext=_ctx;
    size_t parentState=getState();
    RiddleParser::EqualExpressionContext *_localctx=_tracker.createInstance<EqualExpressionContext>(_ctx, parentState);
    RiddleParser::EqualExpressionContext *previousContext=_localctx;
    (void)previousContext; // Silence compiler, in case the context is not used by generated code.
    size_t startState=26;
    enterRecursionRule(_localctx, 26, RiddleParser::RuleEqualExpression, precedence);


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
      setState(184);
      notEqualExpression(0);
      _ctx->stop=_input->LT(-1);
      setState(191);
      _errHandler->sync(this);
      alt=getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx);
      while(alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER){
          if(alt == 1){
              if(!_parseListeners.empty())
                  triggerExitRuleEvent();
              previousContext=_localctx;
              _localctx=_tracker.createInstance<EqualExpressionContext>(parentContext, parentState);
              pushNewRecursionContext(_localctx, startState, RuleEqualExpression);
              setState(186);

              if(!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
              setState(187);
              match(RiddleParser::Equal);
              setState(188);
              equalExpression(1);
          }
          setState(193);
          _errHandler->sync(this);
          alt=getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx);
      }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- NotEqualExpressionContext ------------------------------------------------------------------

RiddleParser::NotEqualExpressionContext::NotEqualExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

RiddleParser::GreaterExpressionContext *RiddleParser::NotEqualExpressionContext::greaterExpression(){
    return getRuleContext<RiddleParser::GreaterExpressionContext>(0);
}

std::vector<RiddleParser::NotEqualExpressionContext *> RiddleParser::NotEqualExpressionContext::notEqualExpression(){
    return getRuleContexts<RiddleParser::NotEqualExpressionContext>();
}

RiddleParser::NotEqualExpressionContext *RiddleParser::NotEqualExpressionContext::notEqualExpression(size_t i){
    return getRuleContext<RiddleParser::NotEqualExpressionContext>(i);
}

tree::TerminalNode *RiddleParser::NotEqualExpressionContext::NotEqual(){
    return getToken(RiddleParser::NotEqual, 0);
}


size_t RiddleParser::NotEqualExpressionContext::getRuleIndex() const{
    return RiddleParser::RuleNotEqualExpression;
}

void RiddleParser::NotEqualExpressionContext::enterRule(tree::ParseTreeListener *listener){
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
      parserListener->enterNotEqualExpression(this);
}

void RiddleParser::NotEqualExpressionContext::exitRule(tree::ParseTreeListener *listener){
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
      parserListener->exitNotEqualExpression(this);
}


std::any RiddleParser::NotEqualExpressionContext::accept(tree::ParseTreeVisitor *visitor){
  if (auto parserVisitor = dynamic_cast<RiddleParserVisitor*>(visitor))
      return parserVisitor->visitNotEqualExpression(this);
  else
    return visitor->visitChildren(this);
}


RiddleParser::NotEqualExpressionContext *RiddleParser::notEqualExpression(){
    return notEqualExpression(0);
}

RiddleParser::NotEqualExpressionContext *RiddleParser::notEqualExpression(int precedence){
    ParserRuleContext *parentContext=_ctx;
    size_t parentState=getState();
    RiddleParser::NotEqualExpressionContext *_localctx=_tracker.createInstance<NotEqualExpressionContext>(_ctx,
                                                                                                          parentState);
    RiddleParser::NotEqualExpressionContext *previousContext=_localctx;
    (void)previousContext; // Silence compiler, in case the context is not used by generated code.
    size_t startState=28;
    enterRecursionRule(_localctx, 28, RiddleParser::RuleNotEqualExpression, precedence);


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
      setState(195);
      greaterExpression(0);
      _ctx->stop=_input->LT(-1);
      setState(202);
    _errHandler->sync(this);
      alt=getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx);
      while(alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER){
          if(alt == 1){
              if(!_parseListeners.empty())
                  triggerExitRuleEvent();
              previousContext=_localctx;
              _localctx=_tracker.createInstance<NotEqualExpressionContext>(parentContext, parentState);
              pushNewRecursionContext(_localctx, startState, RuleNotEqualExpression);
              setState(197);

              if(!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
              setState(198);
              match(RiddleParser::NotEqual);
              setState(199);
              notEqualExpression(1);
      }
          setState(204);
          _errHandler->sync(this);
          alt=getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- GreaterExpressionContext ------------------------------------------------------------------

RiddleParser::GreaterExpressionContext::GreaterExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

RiddleParser::LessExpressionContext *RiddleParser::GreaterExpressionContext::lessExpression(){
    return getRuleContext<RiddleParser::LessExpressionContext>(0);
}

std::vector<RiddleParser::GreaterExpressionContext *> RiddleParser::GreaterExpressionContext::greaterExpression(){
    return getRuleContexts<RiddleParser::GreaterExpressionContext>();
}

RiddleParser::GreaterExpressionContext *RiddleParser::GreaterExpressionContext::greaterExpression(size_t i){
    return getRuleContext<RiddleParser::GreaterExpressionContext>(i);
}

tree::TerminalNode *RiddleParser::GreaterExpressionContext::Greater(){
    return getToken(RiddleParser::Greater, 0);
}


size_t RiddleParser::GreaterExpressionContext::getRuleIndex() const{
    return RiddleParser::RuleGreaterExpression;
}

void RiddleParser::GreaterExpressionContext::enterRule(tree::ParseTreeListener *listener){
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
      parserListener->enterGreaterExpression(this);
}

void RiddleParser::GreaterExpressionContext::exitRule(tree::ParseTreeListener *listener){
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
      parserListener->exitGreaterExpression(this);
}


std::any RiddleParser::GreaterExpressionContext::accept(tree::ParseTreeVisitor *visitor){
  if (auto parserVisitor = dynamic_cast<RiddleParserVisitor*>(visitor))
      return parserVisitor->visitGreaterExpression(this);
  else
    return visitor->visitChildren(this);
}


RiddleParser::GreaterExpressionContext *RiddleParser::greaterExpression(){
    return greaterExpression(0);
}

RiddleParser::GreaterExpressionContext *RiddleParser::greaterExpression(int precedence){
    ParserRuleContext *parentContext=_ctx;
    size_t parentState=getState();
    RiddleParser::GreaterExpressionContext *_localctx=_tracker.createInstance<GreaterExpressionContext>(_ctx,
                                                                                                        parentState);
    RiddleParser::GreaterExpressionContext *previousContext=_localctx;
    (void)previousContext; // Silence compiler, in case the context is not used by generated code.
    size_t startState=30;
    enterRecursionRule(_localctx, 30, RiddleParser::RuleGreaterExpression, precedence);


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
      setState(206);
      lessExpression(0);
      _ctx->stop=_input->LT(-1);
      setState(213);
      _errHandler->sync(this);
      alt=getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx);
      while(alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER){
          if(alt == 1){
              if(!_parseListeners.empty())
                  triggerExitRuleEvent();
              previousContext=_localctx;
              _localctx=_tracker.createInstance<GreaterExpressionContext>(parentContext, parentState);
              pushNewRecursionContext(_localctx, startState, RuleGreaterExpression);
              setState(208);

              if(!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
              setState(209);
              match(RiddleParser::Greater);
              setState(210);
              greaterExpression(1);
          }
          setState(215);
          _errHandler->sync(this);
          alt=getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- LessExpressionContext ------------------------------------------------------------------

RiddleParser::LessExpressionContext::LessExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

RiddleParser::LessAssignExpressionContext *RiddleParser::LessExpressionContext::lessAssignExpression(){
    return getRuleContext<RiddleParser::LessAssignExpressionContext>(0);
}

std::vector<RiddleParser::LessExpressionContext *> RiddleParser::LessExpressionContext::lessExpression(){
    return getRuleContexts<RiddleParser::LessExpressionContext>();
}

RiddleParser::LessExpressionContext *RiddleParser::LessExpressionContext::lessExpression(size_t i){
    return getRuleContext<RiddleParser::LessExpressionContext>(i);
}

tree::TerminalNode *RiddleParser::LessExpressionContext::Less(){
    return getToken(RiddleParser::Less, 0);
}


size_t RiddleParser::LessExpressionContext::getRuleIndex() const{
    return RiddleParser::RuleLessExpression;
}

void RiddleParser::LessExpressionContext::enterRule(tree::ParseTreeListener *listener){
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
      parserListener->enterLessExpression(this);
}

void RiddleParser::LessExpressionContext::exitRule(tree::ParseTreeListener *listener){
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
      parserListener->exitLessExpression(this);
}


std::any RiddleParser::LessExpressionContext::accept(tree::ParseTreeVisitor *visitor){
  if (auto parserVisitor = dynamic_cast<RiddleParserVisitor*>(visitor))
      return parserVisitor->visitLessExpression(this);
  else
    return visitor->visitChildren(this);
}


RiddleParser::LessExpressionContext *RiddleParser::lessExpression(){
    return lessExpression(0);
}

RiddleParser::LessExpressionContext *RiddleParser::lessExpression(int precedence){
    ParserRuleContext *parentContext=_ctx;
    size_t parentState=getState();
    RiddleParser::LessExpressionContext *_localctx=_tracker.createInstance<LessExpressionContext>(_ctx, parentState);
    RiddleParser::LessExpressionContext *previousContext=_localctx;
    (void)previousContext; // Silence compiler, in case the context is not used by generated code.
    size_t startState=32;
    enterRecursionRule(_localctx, 32, RiddleParser::RuleLessExpression, precedence);


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
      setState(217);
      lessAssignExpression(0);
      _ctx->stop=_input->LT(-1);
      setState(224);
      _errHandler->sync(this);
      alt=getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx);
      while(alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER){
          if(alt == 1){
              if(!_parseListeners.empty())
                  triggerExitRuleEvent();
              previousContext=_localctx;
              _localctx=_tracker.createInstance<LessExpressionContext>(parentContext, parentState);
              pushNewRecursionContext(_localctx, startState, RuleLessExpression);
              setState(219);

              if(!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
              setState(220);
              match(RiddleParser::Less);
              setState(221);
              lessExpression(1);
          }
          setState(226);
          _errHandler->sync(this);
          alt=getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx);
      }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- LessAssignExpressionContext ------------------------------------------------------------------

RiddleParser::LessAssignExpressionContext::LessAssignExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

RiddleParser::GreaterAssignExpressionContext *RiddleParser::LessAssignExpressionContext::greaterAssignExpression(){
    return getRuleContext<RiddleParser::GreaterAssignExpressionContext>(0);
}

std::vector<RiddleParser::LessAssignExpressionContext *>
RiddleParser::LessAssignExpressionContext::lessAssignExpression(){
    return getRuleContexts<RiddleParser::LessAssignExpressionContext>();
}

RiddleParser::LessAssignExpressionContext *RiddleParser::LessAssignExpressionContext::lessAssignExpression(size_t i){
    return getRuleContext<RiddleParser::LessAssignExpressionContext>(i);
}

tree::TerminalNode *RiddleParser::LessAssignExpressionContext::LessEqual(){
  return getToken(RiddleParser::LessEqual, 0);
}


size_t RiddleParser::LessAssignExpressionContext::getRuleIndex() const{
    return RiddleParser::RuleLessAssignExpression;
}

void RiddleParser::LessAssignExpressionContext::enterRule(tree::ParseTreeListener *listener){
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
      parserListener->enterLessAssignExpression(this);
}

void RiddleParser::LessAssignExpressionContext::exitRule(tree::ParseTreeListener *listener){
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
      parserListener->exitLessAssignExpression(this);
}


std::any RiddleParser::LessAssignExpressionContext::accept(tree::ParseTreeVisitor *visitor){
  if (auto parserVisitor = dynamic_cast<RiddleParserVisitor*>(visitor))
      return parserVisitor->visitLessAssignExpression(this);
  else
    return visitor->visitChildren(this);
}


RiddleParser::LessAssignExpressionContext *RiddleParser::lessAssignExpression(){
    return lessAssignExpression(0);
}

RiddleParser::LessAssignExpressionContext *RiddleParser::lessAssignExpression(int precedence){
    ParserRuleContext *parentContext=_ctx;
    size_t parentState=getState();
    RiddleParser::LessAssignExpressionContext *_localctx=_tracker.createInstance<LessAssignExpressionContext>(_ctx,
                                                                                                              parentState);
    RiddleParser::LessAssignExpressionContext *previousContext=_localctx;
    (void)previousContext; // Silence compiler, in case the context is not used by generated code.
    size_t startState=34;
    enterRecursionRule(_localctx, 34, RiddleParser::RuleLessAssignExpression, precedence);



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
      setState(228);
      greaterAssignExpression(0);
      _ctx->stop=_input->LT(-1);
      setState(235);
      _errHandler->sync(this);
      alt=getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx);
      while(alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER){
          if(alt == 1){
              if(!_parseListeners.empty())
                  triggerExitRuleEvent();
              previousContext=_localctx;
              _localctx=_tracker.createInstance<LessAssignExpressionContext>(parentContext, parentState);
              pushNewRecursionContext(_localctx, startState, RuleLessAssignExpression);
              setState(230);

              if(!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
              setState(231);
        match(RiddleParser::LessEqual);
              setState(232);
              lessAssignExpression(1);
      }
          setState(237);
          _errHandler->sync(this);
          alt=getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx);
      }
  }
  catch(RecognitionException &e){
      _errHandler->reportError(this, e);
      _localctx->exception=std::current_exception();
      _errHandler->recover(this, _localctx->exception);
  }
    return _localctx;
}

//----------------- GreaterAssignExpressionContext ------------------------------------------------------------------

RiddleParser::GreaterAssignExpressionContext::GreaterAssignExpressionContext(ParserRuleContext *parent,
                                                                             size_t invokingState)
        :ParserRuleContext(parent, invokingState){
}

RiddleParser::PrimaryExpressionContext *RiddleParser::GreaterAssignExpressionContext::primaryExpression(){
    return getRuleContext<RiddleParser::PrimaryExpressionContext>(0);
}

std::vector<RiddleParser::GreaterAssignExpressionContext *>
RiddleParser::GreaterAssignExpressionContext::greaterAssignExpression(){
    return getRuleContexts<RiddleParser::GreaterAssignExpressionContext>();
}

RiddleParser::GreaterAssignExpressionContext *
RiddleParser::GreaterAssignExpressionContext::greaterAssignExpression(size_t i){
    return getRuleContext<RiddleParser::GreaterAssignExpressionContext>(i);
}

tree::TerminalNode *RiddleParser::GreaterAssignExpressionContext::GreaterEqual(){
    return getToken(RiddleParser::GreaterEqual, 0);
}


size_t RiddleParser::GreaterAssignExpressionContext::getRuleIndex() const{
    return RiddleParser::RuleGreaterAssignExpression;
}

void RiddleParser::GreaterAssignExpressionContext::enterRule(tree::ParseTreeListener *listener){
    auto parserListener=dynamic_cast<RiddleParserListener *>(listener);
    if(parserListener != nullptr)
        parserListener->enterGreaterAssignExpression(this);
}

void RiddleParser::GreaterAssignExpressionContext::exitRule(tree::ParseTreeListener *listener){
    auto parserListener=dynamic_cast<RiddleParserListener *>(listener);
    if(parserListener != nullptr)
        parserListener->exitGreaterAssignExpression(this);
}


std::any RiddleParser::GreaterAssignExpressionContext::accept(tree::ParseTreeVisitor *visitor){
    if(auto parserVisitor=dynamic_cast<RiddleParserVisitor *>(visitor))
        return parserVisitor->visitGreaterAssignExpression(this);
    else
        return visitor->visitChildren(this);
}


RiddleParser::GreaterAssignExpressionContext *RiddleParser::greaterAssignExpression(){
    return greaterAssignExpression(0);
}

RiddleParser::GreaterAssignExpressionContext *RiddleParser::greaterAssignExpression(int precedence){
    ParserRuleContext *parentContext=_ctx;
    size_t parentState=getState();
    RiddleParser::GreaterAssignExpressionContext *_localctx=_tracker.createInstance<GreaterAssignExpressionContext>(
            _ctx, parentState);
    RiddleParser::GreaterAssignExpressionContext *previousContext=_localctx;
    (void)previousContext; // Silence compiler, in case the context is not used by generated code.
    size_t startState=36;
    enterRecursionRule(_localctx, 36, RiddleParser::RuleGreaterAssignExpression, precedence);



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
        setState(239);
        primaryExpression();
        _ctx->stop=_input->LT(-1);
        setState(246);
        _errHandler->sync(this);
        alt=getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx);
        while(alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER){
            if(alt == 1){
                if(!_parseListeners.empty())
                    triggerExitRuleEvent();
                previousContext=_localctx;
                _localctx=_tracker.createInstance<GreaterAssignExpressionContext>(parentContext, parentState);
                pushNewRecursionContext(_localctx, startState, RuleGreaterAssignExpression);
                setState(241);

                if(!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
                setState(242);
                match(RiddleParser::GreaterEqual);
                setState(243);
                greaterAssignExpression(1);
            }
            setState(248);
            _errHandler->sync(this);
            alt=getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx);
        }
    }
    catch(RecognitionException &e){
        _errHandler->reportError(this, e);
        _localctx->exception=std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }
    return _localctx;
}

//----------------- PlusAssignExpressionContext ------------------------------------------------------------------

RiddleParser::PlusAssignExpressionContext::PlusAssignExpressionContext(ParserRuleContext *parent, size_t invokingState)
        :ParserRuleContext(parent, invokingState){
}


size_t RiddleParser::PlusAssignExpressionContext::getRuleIndex() const{
    return RiddleParser::RulePlusAssignExpression;
}

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

RiddleParser::PlusAssignExpressionContext *RiddleParser::plusAssignExpression(){
    PlusAssignExpressionContext *_localctx=_tracker.createInstance<PlusAssignExpressionContext>(_ctx, getState());
    enterRule(_localctx, 38, RiddleParser::RulePlusAssignExpression);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit=finally([=]{
#endif
        exitRule();
    });
    try{
        enterOuterAlt(_localctx, 1);


    }
    catch(RecognitionException &e){
        _errHandler->reportError(this, e);
        _localctx->exception=std::current_exception();
        _errHandler->recover(this, _localctx->exception);
    }

    return _localctx;
}

//----------------- MinusAssignExpressionContext ------------------------------------------------------------------

RiddleParser::MinusAssignExpressionContext::MinusAssignExpressionContext(ParserRuleContext *parent,
                                                                         size_t invokingState)
        :ParserRuleContext(parent, invokingState){
}


size_t RiddleParser::MinusAssignExpressionContext::getRuleIndex() const{
    return RiddleParser::RuleMinusAssignExpression;
}

void RiddleParser::MinusAssignExpressionContext::enterRule(tree::ParseTreeListener *listener){
    auto parserListener=dynamic_cast<RiddleParserListener *>(listener);
    if(parserListener != nullptr)
        parserListener->enterMinusAssignExpression(this);
}

void RiddleParser::MinusAssignExpressionContext::exitRule(tree::ParseTreeListener *listener){
    auto parserListener=dynamic_cast<RiddleParserListener *>(listener);
    if(parserListener != nullptr)
        parserListener->exitMinusAssignExpression(this);
}


std::any RiddleParser::MinusAssignExpressionContext::accept(tree::ParseTreeVisitor *visitor){
    if(auto parserVisitor=dynamic_cast<RiddleParserVisitor *>(visitor))
        return parserVisitor->visitMinusAssignExpression(this);
    else
        return visitor->visitChildren(this);
}

RiddleParser::MinusAssignExpressionContext *RiddleParser::minusAssignExpression(){
    MinusAssignExpressionContext *_localctx=_tracker.createInstance<MinusAssignExpressionContext>(_ctx, getState());
    enterRule(_localctx, 40, RiddleParser::RuleMinusAssignExpression);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit=finally([=]{
#endif
        exitRule();
    });
    try{
        enterOuterAlt(_localctx, 1);


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
    IdExpressionContext *_localctx=_tracker.createInstance<IdExpressionContext>(_ctx, getState());
    enterRule(_localctx, 42, RiddleParser::RuleIdExpression);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit=finally([=]{
#endif
        exitRule();
    });
    try{
        enterOuterAlt(_localctx, 1);
        setState(253);
        match(RiddleParser::Identfier);

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
    enterRule(_localctx, 44, RiddleParser::RuleTypeLiteral);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit=finally([=]{
#endif
        exitRule();
    });
    try{
        enterOuterAlt(_localctx, 1);
        setState(255);
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
    enterRule(_localctx, 46, RiddleParser::RuleBasicType);
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
        setState(257);
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
    enterRule(_localctx, 48, RiddleParser::RuleLiteral);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
      setState(264);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
        case RiddleParser::IntegerLiteral:{
        enterOuterAlt(_localctx, 1);
            setState(259);
            intLiteral();
        break;
      }

        case RiddleParser::StringLiteral:{
        enterOuterAlt(_localctx, 2);
            setState(260);
            strLiteral();
        break;
      }

        case RiddleParser::CharLiteral:{
        enterOuterAlt(_localctx, 3);
            setState(261);
        charLiteral();
        break;
      }

        case RiddleParser::FloatLiteral:{
        enterOuterAlt(_localctx, 4);
            setState(262);
        floatLiteral();
        break;
      }

        case RiddleParser::False:
        case RiddleParser::True:{
        enterOuterAlt(_localctx, 5);
            setState(263);
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
    enterRule(_localctx, 50, RiddleParser::RuleStrLiteral);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
      setState(266);
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
    enterRule(_localctx, 52, RiddleParser::RuleCharLiteral);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
      setState(268);
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
    enterRule(_localctx, 54, RiddleParser::RuleIntLiteral);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
      setState(270);
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
    enterRule(_localctx, 56, RiddleParser::RuleFloatLiteral);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
      setState(272);
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
    enterRule(_localctx, 58, RiddleParser::RuleBoolenLiteral);
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
      setState(274);
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
        case 13:
            return equalExpressionSempred(antlrcpp::downCast<EqualExpressionContext *>(context), predicateIndex);
        case 14:
            return notEqualExpressionSempred(antlrcpp::downCast<NotEqualExpressionContext *>(context), predicateIndex);
        case 15:
            return greaterExpressionSempred(antlrcpp::downCast<GreaterExpressionContext *>(context), predicateIndex);
        case 16:
            return lessExpressionSempred(antlrcpp::downCast<LessExpressionContext *>(context), predicateIndex);
        case 17:
            return lessAssignExpressionSempred(antlrcpp::downCast<LessAssignExpressionContext *>(context),
                                               predicateIndex);
        case 18:
            return greaterAssignExpressionSempred(antlrcpp::downCast<GreaterAssignExpressionContext *>(context),
                                                  predicateIndex);

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

bool RiddleParser::equalExpressionSempred(EqualExpressionContext *_localctx, size_t predicateIndex){
    switch(predicateIndex){
        case 1:
            return precpred(_ctx, 1);

        default:
            break;
    }
    return true;
}

bool RiddleParser::notEqualExpressionSempred(NotEqualExpressionContext *_localctx, size_t predicateIndex){
    switch(predicateIndex){
        case 2:
            return precpred(_ctx, 1);

        default:
            break;
    }
    return true;
}

bool RiddleParser::greaterExpressionSempred(GreaterExpressionContext *_localctx, size_t predicateIndex){
    switch(predicateIndex){
        case 3:
            return precpred(_ctx, 1);

        default:
            break;
    }
    return true;
}

bool RiddleParser::lessExpressionSempred(LessExpressionContext *_localctx, size_t predicateIndex){
    switch(predicateIndex){
        case 4:
            return precpred(_ctx, 1);

        default:
            break;
    }
    return true;
}

bool RiddleParser::lessAssignExpressionSempred(LessAssignExpressionContext *_localctx, size_t predicateIndex){
    switch(predicateIndex){
        case 5:
            return precpred(_ctx, 1);

        default:
            break;
    }
    return true;
}

bool RiddleParser::greaterAssignExpressionSempred(GreaterAssignExpressionContext *_localctx, size_t predicateIndex){
    switch(predicateIndex){
        case 6:
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
