
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
            "dotExpression", "variableDefine", "ifExpression", "while", "funcDefine",
            "funcBody", "block", "expression", "idExpression", "typeLiteral",
            "basicType", "literal", "strLiteral", "charLiteral", "intLiteral",
            "floatLiteral", "boolenLiteral"
    },
    std::vector<std::string>{
            "", "'var'", "'val'", "'fun'", "'if'", "'else'", "'false'", "'true'",
            "'while'", "'print'", "'int'", "'float'", "'char'", "'bool'", "'string'",
            "'('", "')'", "'['", "']'", "'{'", "'}'", "'+'", "'-'", "'*'", "'/'",
            "'%'", "'^'", "'&'", "'|'", "'~'", "'!'", "'='", "'<'", "'>'", "'+='",
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
          4, 1, 72, 256, 2, 0, 7, 0, 2, 1, 7, 1, 2, 2, 7, 2, 2, 3, 7, 3, 2, 4, 7, 4, 2, 5, 7, 5, 2, 6, 7, 6, 2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
          21, 1, 0, 5, 0, 46, 8, 0, 10, 0, 12, 0, 49, 9, 0, 1, 0, 3, 0, 52, 8, 0, 1, 0, 1, 0, 1, 1, 1, 1, 1, 1,
          1, 1, 3, 1, 60, 8, 1, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 3, 2, 70, 8, 2, 1, 2, 1, 2, 1, 2,
          3, 2, 75, 8, 2, 5, 2, 77, 8, 2, 10, 2, 12, 2, 80, 9, 2, 1, 3, 1, 3, 1, 3, 1, 3, 1, 3, 1, 4, 1, 4, 1,
          4, 1, 4, 1, 4, 1, 4, 1, 4, 1, 4, 3, 4, 95, 8, 4, 1, 5, 1, 5, 1, 5, 1, 5, 1, 6, 1, 6, 1, 6, 1, 6, 3, 6,
          105, 8, 6, 1, 6, 1, 6, 1, 6, 1, 6, 3, 6, 111, 8, 6, 5, 6, 113, 8, 6, 10, 6, 12, 6, 116, 9, 6, 1, 7,
          1, 7, 1, 7, 1, 7, 1, 7, 1, 7, 1, 7, 3, 7, 125, 8, 7, 1, 8, 1, 8, 1, 8, 1, 8, 1, 8, 1, 8, 1, 9, 1, 9, 1,
          9, 1, 9, 1, 9, 1, 9, 5, 9, 139, 8, 9, 10, 9, 12, 9, 142, 9, 9, 1, 9, 1, 9, 1, 9, 1, 10, 1, 10, 5, 10,
          149, 8, 10, 10, 10, 12, 10, 152, 9, 10, 1, 10, 1, 10, 1, 11, 1, 11, 5, 11, 158, 8, 11, 10, 11,
          12, 11, 161, 9, 11, 1, 11, 1, 11, 1, 12, 1, 12, 1, 12, 1, 12, 1, 12, 1, 12, 1, 12, 3, 12, 172,
          8, 12, 1, 12, 1, 12, 1, 12, 1, 12, 1, 12, 1, 12, 1, 12, 1, 12, 1, 12, 1, 12, 1, 12, 1, 12, 1, 12,
          1, 12, 1, 12, 1, 12, 1, 12, 1, 12, 1, 12, 1, 12, 1, 12, 1, 12, 1, 12, 1, 12, 1, 12, 1, 12, 1, 12,
          1, 12, 1, 12, 1, 12, 1, 12, 1, 12, 1, 12, 1, 12, 1, 12, 1, 12, 1, 12, 1, 12, 1, 12, 1, 12, 1, 12,
          1, 12, 1, 12, 1, 12, 1, 12, 1, 12, 1, 12, 1, 12, 1, 12, 1, 12, 1, 12, 1, 12, 1, 12, 1, 12, 5, 12,
          228, 8, 12, 10, 12, 12, 12, 231, 9, 12, 1, 13, 1, 13, 1, 14, 1, 14, 1, 15, 1, 15, 1, 16, 1, 16,
          1, 16, 1, 16, 1, 16, 3, 16, 244, 8, 16, 1, 17, 1, 17, 1, 18, 1, 18, 1, 19, 1, 19, 1, 20, 1, 20,
          1, 21, 1, 21, 1, 21, 0, 2, 4, 24, 22, 0, 2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30,
          32, 34, 36, 38, 40, 42, 0, 3, 1, 0, 1, 2, 1, 0, 10, 14, 1, 0, 6, 7, 278, 0, 47, 1, 0, 0, 0, 2, 59,
          1, 0, 0, 0, 4, 69, 1, 0, 0, 0, 6, 81, 1, 0, 0, 0, 8, 94, 1, 0, 0, 0, 10, 96, 1, 0, 0, 0, 12, 100, 1,
          0, 0, 0, 14, 117, 1, 0, 0, 0, 16, 126, 1, 0, 0, 0, 18, 132, 1, 0, 0, 0, 20, 146, 1, 0, 0, 0, 22,
          155, 1, 0, 0, 0, 24, 171, 1, 0, 0, 0, 26, 232, 1, 0, 0, 0, 28, 234, 1, 0, 0, 0, 30, 236, 1, 0, 0,
          0, 32, 243, 1, 0, 0, 0, 34, 245, 1, 0, 0, 0, 36, 247, 1, 0, 0, 0, 38, 249, 1, 0, 0, 0, 40, 251,
          1, 0, 0, 0, 42, 253, 1, 0, 0, 0, 44, 46, 3, 2, 1, 0, 45, 44, 1, 0, 0, 0, 46, 49, 1, 0, 0, 0, 47, 45,
          1, 0, 0, 0, 47, 48, 1, 0, 0, 0, 48, 51, 1, 0, 0, 0, 49, 47, 1, 0, 0, 0, 50, 52, 3, 4, 2, 0, 51, 50,
          1, 0, 0, 0, 51, 52, 1, 0, 0, 0, 52, 53, 1, 0, 0, 0, 53, 54, 5, 0, 0, 1, 54, 1, 1, 0, 0, 0, 55, 56,
          3, 4, 2, 0, 56, 57, 5, 69, 0, 0, 57, 60, 1, 0, 0, 0, 58, 60, 5, 69, 0, 0, 59, 55, 1, 0, 0, 0, 59,
          58, 1, 0, 0, 0, 60, 3, 1, 0, 0, 0, 61, 62, 6, 2, -1, 0, 62, 70, 3, 12, 6, 0, 63, 70, 3, 24, 12, 0,
          64, 70, 3, 22, 11, 0, 65, 70, 3, 18, 9, 0, 66, 70, 3, 16, 8, 0, 67, 70, 3, 6, 3, 0, 68, 70, 5, 55,
          0, 0, 69, 61, 1, 0, 0, 0, 69, 63, 1, 0, 0, 0, 69, 64, 1, 0, 0, 0, 69, 65, 1, 0, 0, 0, 69, 66, 1, 0,
          0, 0, 69, 67, 1, 0, 0, 0, 69, 68, 1, 0, 0, 0, 70, 78, 1, 0, 0, 0, 71, 72, 10, 2, 0, 0, 72, 74, 5,
          55, 0, 0, 73, 75, 3, 4, 2, 0, 74, 73, 1, 0, 0, 0, 74, 75, 1, 0, 0, 0, 75, 77, 1, 0, 0, 0, 76, 71,
          1, 0, 0, 0, 77, 80, 1, 0, 0, 0, 78, 76, 1, 0, 0, 0, 78, 79, 1, 0, 0, 0, 79, 5, 1, 0, 0, 0, 80, 78,
          1, 0, 0, 0, 81, 82, 5, 9, 0, 0, 82, 83, 5, 15, 0, 0, 83, 84, 3, 24, 12, 0, 84, 85, 5, 16, 0, 0, 85,
          7, 1, 0, 0, 0, 86, 95, 3, 32, 16, 0, 87, 95, 3, 26, 13, 0, 88, 95, 3, 10, 5, 0, 89, 90, 5, 15, 0,
          0, 90, 91, 3, 24, 12, 0, 91, 92, 5, 16, 0, 0, 92, 95, 1, 0, 0, 0, 93, 95, 3, 14, 7, 0, 94, 86, 1,
          0, 0, 0, 94, 87, 1, 0, 0, 0, 94, 88, 1, 0, 0, 0, 94, 89, 1, 0, 0, 0, 94, 93, 1, 0, 0, 0, 95, 9, 1,
          0, 0, 0, 96, 97, 3, 26, 13, 0, 97, 98, 5, 56, 0, 0, 98, 99, 3, 24, 12, 0, 99, 11, 1, 0, 0, 0, 100,
          101, 7, 0, 0, 0, 101, 104, 5, 67, 0, 0, 102, 103, 5, 31, 0, 0, 103, 105, 3, 24, 12, 0, 104, 102,
          1, 0, 0, 0, 104, 105, 1, 0, 0, 0, 105, 114, 1, 0, 0, 0, 106, 107, 5, 52, 0, 0, 107, 110, 5, 67,
          0, 0, 108, 109, 5, 31, 0, 0, 109, 111, 3, 24, 12, 0, 110, 108, 1, 0, 0, 0, 110, 111, 1, 0, 0,
          0, 111, 113, 1, 0, 0, 0, 112, 106, 1, 0, 0, 0, 113, 116, 1, 0, 0, 0, 114, 112, 1, 0, 0, 0, 114,
          115, 1, 0, 0, 0, 115, 13, 1, 0, 0, 0, 116, 114, 1, 0, 0, 0, 117, 118, 5, 4, 0, 0, 118, 119, 5,
          15, 0, 0, 119, 120, 3, 24, 12, 0, 120, 121, 5, 16, 0, 0, 121, 124, 3, 4, 2, 0, 122, 123, 5, 5,
          0, 0, 123, 125, 3, 4, 2, 0, 124, 122, 1, 0, 0, 0, 124, 125, 1, 0, 0, 0, 125, 15, 1, 0, 0, 0, 126,
          127, 5, 8, 0, 0, 127, 128, 5, 15, 0, 0, 128, 129, 3, 24, 12, 0, 129, 130, 5, 16, 0, 0, 130, 131,
          3, 4, 2, 0, 131, 17, 1, 0, 0, 0, 132, 133, 5, 3, 0, 0, 133, 134, 5, 67, 0, 0, 134, 140, 5, 15,
          0, 0, 135, 136, 5, 67, 0, 0, 136, 137, 5, 54, 0, 0, 137, 139, 3, 28, 14, 0, 138, 135, 1, 0, 0,
          0, 139, 142, 1, 0, 0, 0, 140, 138, 1, 0, 0, 0, 140, 141, 1, 0, 0, 0, 141, 143, 1, 0, 0, 0, 142,
          140, 1, 0, 0, 0, 143, 144, 5, 16, 0, 0, 144, 145, 3, 20, 10, 0, 145, 19, 1, 0, 0, 0, 146, 150,
          5, 19, 0, 0, 147, 149, 3, 4, 2, 0, 148, 147, 1, 0, 0, 0, 149, 152, 1, 0, 0, 0, 150, 148, 1, 0,
          0, 0, 150, 151, 1, 0, 0, 0, 151, 153, 1, 0, 0, 0, 152, 150, 1, 0, 0, 0, 153, 154, 5, 20, 0, 0,
          154, 21, 1, 0, 0, 0, 155, 159, 5, 19, 0, 0, 156, 158, 3, 4, 2, 0, 157, 156, 1, 0, 0, 0, 158, 161,
          1, 0, 0, 0, 159, 157, 1, 0, 0, 0, 159, 160, 1, 0, 0, 0, 160, 162, 1, 0, 0, 0, 161, 159, 1, 0, 0,
          0, 162, 163, 5, 20, 0, 0, 163, 23, 1, 0, 0, 0, 164, 165, 6, 12, -1, 0, 165, 172, 3, 8, 4, 0, 166,
          167, 3, 26, 13, 0, 167, 168, 5, 17, 0, 0, 168, 169, 3, 24, 12, 0, 169, 170, 5, 18, 0, 0, 170,
          172, 1, 0, 0, 0, 171, 164, 1, 0, 0, 0, 171, 166, 1, 0, 0, 0, 172, 229, 1, 0, 0, 0, 173, 174, 10,
          18, 0, 0, 174, 175, 5, 21, 0, 0, 175, 228, 3, 24, 12, 19, 176, 177, 10, 17, 0, 0, 177, 178,
          5, 22, 0, 0, 178, 228, 3, 24, 12, 18, 179, 180, 10, 16, 0, 0, 180, 181, 5, 23, 0, 0, 181, 228,
          3, 24, 12, 17, 182, 183, 10, 15, 0, 0, 183, 184, 5, 24, 0, 0, 184, 228, 3, 24, 12, 16, 185,
          186, 10, 14, 0, 0, 186, 187, 5, 25, 0, 0, 187, 228, 3, 24, 12, 15, 188, 189, 10, 13, 0, 0, 189,
          190, 5, 26, 0, 0, 190, 228, 3, 24, 12, 14, 191, 192, 10, 12, 0, 0, 192, 193, 5, 27, 0, 0, 193,
          228, 3, 24, 12, 13, 194, 195, 10, 11, 0, 0, 195, 196, 5, 28, 0, 0, 196, 228, 3, 24, 12, 12,
          197, 198, 10, 10, 0, 0, 198, 199, 5, 29, 0, 0, 199, 228, 3, 24, 12, 11, 200, 201, 10, 9, 0,
          0, 201, 202, 5, 30, 0, 0, 202, 228, 3, 24, 12, 10, 203, 204, 10, 8, 0, 0, 204, 205, 5, 31, 0,
          0, 205, 228, 3, 24, 12, 9, 206, 207, 10, 7, 0, 0, 207, 208, 5, 32, 0, 0, 208, 228, 3, 24, 12,
          8, 209, 210, 10, 6, 0, 0, 210, 211, 5, 33, 0, 0, 211, 228, 3, 24, 12, 7, 212, 213, 10, 5, 0,
          0, 213, 214, 5, 34, 0, 0, 214, 228, 3, 24, 12, 6, 215, 216, 10, 4, 0, 0, 216, 217, 5, 35, 0,
          0, 217, 228, 3, 24, 12, 5, 218, 219, 10, 3, 0, 0, 219, 220, 5, 37, 0, 0, 220, 228, 3, 24, 12,
          4, 221, 222, 10, 2, 0, 0, 222, 223, 5, 38, 0, 0, 223, 228, 3, 24, 12, 3, 224, 225, 10, 1, 0,
          0, 225, 226, 5, 39, 0, 0, 226, 228, 3, 24, 12, 2, 227, 173, 1, 0, 0, 0, 227, 176, 1, 0, 0, 0,
          227, 179, 1, 0, 0, 0, 227, 182, 1, 0, 0, 0, 227, 185, 1, 0, 0, 0, 227, 188, 1, 0, 0, 0, 227, 191,
          1, 0, 0, 0, 227, 194, 1, 0, 0, 0, 227, 197, 1, 0, 0, 0, 227, 200, 1, 0, 0, 0, 227, 203, 1, 0, 0,
          0, 227, 206, 1, 0, 0, 0, 227, 209, 1, 0, 0, 0, 227, 212, 1, 0, 0, 0, 227, 215, 1, 0, 0, 0, 227,
          218, 1, 0, 0, 0, 227, 221, 1, 0, 0, 0, 227, 224, 1, 0, 0, 0, 228, 231, 1, 0, 0, 0, 229, 227, 1,
          0, 0, 0, 229, 230, 1, 0, 0, 0, 230, 25, 1, 0, 0, 0, 231, 229, 1, 0, 0, 0, 232, 233, 5, 67, 0, 0,
          233, 27, 1, 0, 0, 0, 234, 235, 3, 30, 15, 0, 235, 29, 1, 0, 0, 0, 236, 237, 7, 1, 0, 0, 237, 31,
          1, 0, 0, 0, 238, 244, 3, 38, 19, 0, 239, 244, 3, 34, 17, 0, 240, 244, 3, 36, 18, 0, 241, 244,
          3, 40, 20, 0, 242, 244, 3, 42, 21, 0, 243, 238, 1, 0, 0, 0, 243, 239, 1, 0, 0, 0, 243, 240, 1,
          0, 0, 0, 243, 241, 1, 0, 0, 0, 243, 242, 1, 0, 0, 0, 244, 33, 1, 0, 0, 0, 245, 246, 5, 62, 0, 0,
          246, 35, 1, 0, 0, 0, 247, 248, 5, 64, 0, 0, 248, 37, 1, 0, 0, 0, 249, 250, 5, 57, 0, 0, 250, 39,
          1, 0, 0, 0, 251, 252, 5, 66, 0, 0, 252, 41, 1, 0, 0, 0, 253, 254, 7, 2, 0, 0, 254, 43, 1, 0, 0,
          0, 18, 47, 51, 59, 69, 74, 78, 94, 104, 110, 114, 124, 140, 150, 159, 171, 227, 229, 243
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
      setState(47);
      _errHandler->sync(this);
      alt=getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
      while(alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER){
          if(alt == 1){
              setState(44);
              newline_statment();
          }
          setState(49);
          _errHandler->sync(this);
          alt=getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
      }
      setState(51);
    _errHandler->sync(this);

    _la = _input->LA(1);
      if((((_la & ~0x3fULL) == 0) &&
          ((1ULL << _la) & 4791830003522765790) != 0) || ((((_la-64) & ~0x3fULL) == 0) &&
                                                          ((1ULL << (_la-64)) & 13) != 0)){
          setState(50);
          statment(0);
      }
      setState(53);
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
        setState(59);
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
                setState(55);
                statment(0);
                setState(56);
                match(RiddleParser::NewLine);
                break;
            }

            case RiddleParser::NewLine:{
                enterOuterAlt(_localctx, 2);
                setState(58);
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
      setState(69);
    _errHandler->sync(this);
      switch(_input->LA(1)){
          case RiddleParser::Var:
          case RiddleParser::Val:{
              setState(62);
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
              setState(63);
              expression(0);
              break;
          }

          case RiddleParser::LeftBrace:{
              setState(64);
              block();
              break;
          }

          case RiddleParser::Fun:{
              setState(65);
              funcDefine();
              break;
          }

          case RiddleParser::While:{
              setState(66);
              while_();
              break;
          }

          case RiddleParser::Print:{
              setState(67);
              print();
              break;
          }

          case RiddleParser::Semi:{
              setState(68);
        match(RiddleParser::Semi);
        break;
          }

          default:
              throw NoViableAltException(this);
      }
      _ctx->stop=_input->LT(-1);
      setState(78);
      _errHandler->sync(this);
      alt=getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
      while(alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER){
          if(alt == 1){
              if(!_parseListeners.empty())
                  triggerExitRuleEvent();
              previousContext=_localctx;
              _localctx=_tracker.createInstance<StatmentContext>(parentContext, parentState);
              pushNewRecursionContext(_localctx, startState, RuleStatment);
              setState(71);

              if(!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
              setState(72);
              match(RiddleParser::Semi);
              setState(74);
              _errHandler->sync(this);

              switch(getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)){
                  case 1:{
                      setState(73);
                      statment(0);
                      break;
                  }

                  default:
                      break;
              }
          }
          setState(80);
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
        setState(81);
        match(RiddleParser::Print);
        setState(82);
        match(RiddleParser::LeftParen);
        setState(83);
        expression(0);
        setState(84);
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

RiddleParser::DotExpressionContext *RiddleParser::PrimaryExpressionContext::dotExpression(){
    return getRuleContext<RiddleParser::DotExpressionContext>(0);
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
      setState(94);
    _errHandler->sync(this);
      switch(getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)){
          case 1:{
              enterOuterAlt(_localctx, 1);
              setState(86);
              literal();
              break;
          }

          case 2:{
              enterOuterAlt(_localctx, 2);
              setState(87);
              idExpression();
              break;
          }

          case 3:{
              enterOuterAlt(_localctx, 3);
              setState(88);
              dotExpression();
              break;
          }

          case 4:{
              enterOuterAlt(_localctx, 4);
              setState(89);
              match(RiddleParser::LeftParen);
              setState(90);
              expression(0);
              setState(91);
              match(RiddleParser::RightParen);
              break;
          }

          case 5:{
              enterOuterAlt(_localctx, 5);
              setState(93);
              ifExpression();
              break;
          }

    default:
        break;
      }

  }
  catch(RecognitionException &e){
      _errHandler->reportError(this, e);
      _localctx->exception=std::current_exception();
      _errHandler->recover(this, _localctx->exception);
  }

    return _localctx;
}

//----------------- DotExpressionContext ------------------------------------------------------------------

RiddleParser::DotExpressionContext::DotExpressionContext(ParserRuleContext *parent, size_t invokingState)
        :ParserRuleContext(parent, invokingState){
}

RiddleParser::IdExpressionContext *RiddleParser::DotExpressionContext::idExpression(){
    return getRuleContext<RiddleParser::IdExpressionContext>(0);
}

tree::TerminalNode *RiddleParser::DotExpressionContext::Dot(){
    return getToken(RiddleParser::Dot, 0);
}

RiddleParser::ExpressionContext *RiddleParser::DotExpressionContext::expression(){
    return getRuleContext<RiddleParser::ExpressionContext>(0);
}


size_t RiddleParser::DotExpressionContext::getRuleIndex() const{
    return RiddleParser::RuleDotExpression;
}

void RiddleParser::DotExpressionContext::enterRule(tree::ParseTreeListener *listener){
    auto parserListener=dynamic_cast<RiddleParserListener *>(listener);
    if(parserListener != nullptr)
        parserListener->enterDotExpression(this);
}

void RiddleParser::DotExpressionContext::exitRule(tree::ParseTreeListener *listener){
    auto parserListener=dynamic_cast<RiddleParserListener *>(listener);
    if(parserListener != nullptr)
        parserListener->exitDotExpression(this);
}


std::any RiddleParser::DotExpressionContext::accept(tree::ParseTreeVisitor *visitor){
    if(auto parserVisitor=dynamic_cast<RiddleParserVisitor *>(visitor))
        return parserVisitor->visitDotExpression(this);
    else
        return visitor->visitChildren(this);
}

RiddleParser::DotExpressionContext *RiddleParser::dotExpression(){
    DotExpressionContext *_localctx=_tracker.createInstance<DotExpressionContext>(_ctx, getState());
    enterRule(_localctx, 10, RiddleParser::RuleDotExpression);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit=finally([=]{
#endif
        exitRule();
    });
    try{
        enterOuterAlt(_localctx, 1);
        setState(96);
        idExpression();
        setState(97);
        match(RiddleParser::Dot);
        setState(98);
        expression(0);

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
      setState(100);
      _la=_input->LA(1);
      if(!(_la == RiddleParser::Var

           || _la == RiddleParser::Val)){
          _errHandler->recoverInline(this);
      } else{
          _errHandler->reportMatch(this);
          consume();
    }

      setState(101);
      match(RiddleParser::Identfier);
      setState(104);
      _errHandler->sync(this);

      switch(getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)){
          case 1:{
              setState(102);
              match(RiddleParser::Assign);
              setState(103);
              expression(0);
              break;
          }

          default:
              break;
      }
      setState(114);
      _errHandler->sync(this);
      alt=getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx);
      while(alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER){
          if(alt == 1){
              setState(106);
              match(RiddleParser::Comma);

              setState(107);
              match(RiddleParser::Identfier);
              setState(110);
              _errHandler->sync(this);

              switch(getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)){
                  case 1:{
                      setState(108);
                      match(RiddleParser::Assign);
                      setState(109);
                      expression(0);
                      break;
                  }

                  default:
                      break;
              }
          }
          setState(116);
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
      setState(117);
      match(RiddleParser::If);
      setState(118);
      match(RiddleParser::LeftParen);
      setState(119);
      expression(0);
      setState(120);
      match(RiddleParser::RightParen);
      setState(121);
      statment(0);
      setState(124);
      _errHandler->sync(this);

      switch(getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)){
          case 1:{
              setState(122);
              match(RiddleParser::Else);
              setState(123);
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
      setState(126);
      match(RiddleParser::While);
      setState(127);
    match(RiddleParser::LeftParen);
      setState(128);
      expression(0);
      setState(129);
    match(RiddleParser::RightParen);
      setState(130);
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
      setState(132);
      match(RiddleParser::Fun);
      setState(133);
      match(RiddleParser::Identfier);
      setState(134);
      match(RiddleParser::LeftParen);
      setState(140);
      _errHandler->sync(this);
      _la=_input->LA(1);
      while(_la == RiddleParser::Identfier){
          setState(135);
          match(RiddleParser::Identfier);
          setState(136);
          match(RiddleParser::Colon);
          setState(137);
          typeLiteral();
          setState(142);
          _errHandler->sync(this);
          _la=_input->LA(1);
      }
      setState(143);
    match(RiddleParser::RightParen);
      setState(144);
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
      setState(146);
    match(RiddleParser::LeftBrace);
      setState(150);
    _errHandler->sync(this);
    _la = _input->LA(1);
      while((((_la & ~0x3fULL) == 0) &&
             ((1ULL << _la) & 4791830003522765790) != 0) || ((((_la-64) & ~0x3fULL) == 0) &&
                                                             ((1ULL << (_la-64)) & 13) != 0)){
          setState(147);
          statment(0);
          setState(152);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
      setState(153);
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
      setState(155);
      match(RiddleParser::LeftBrace);
      setState(159);
      _errHandler->sync(this);
      _la=_input->LA(1);
      while((((_la & ~0x3fULL) == 0) &&
             ((1ULL << _la) & 4791830003522765790) != 0) || ((((_la-64) & ~0x3fULL) == 0) &&
                                                             ((1ULL << (_la-64)) & 13) != 0)){
          setState(156);
          statment(0);
          setState(161);
          _errHandler->sync(this);
          _la=_input->LA(1);
      }
      setState(162);
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
//----------------- TildeExpressionContext ------------------------------------------------------------------

std::vector<RiddleParser::ExpressionContext *> RiddleParser::TildeExpressionContext::expression(){
    return getRuleContexts<RiddleParser::ExpressionContext>();
}

RiddleParser::ExpressionContext *RiddleParser::TildeExpressionContext::expression(size_t i){
    return getRuleContext<RiddleParser::ExpressionContext>(i);
}

tree::TerminalNode *RiddleParser::TildeExpressionContext::Tilde(){
    return getToken(RiddleParser::Tilde, 0);
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
    auto parserListener=dynamic_cast<RiddleParserListener *>(listener);
    if(parserListener != nullptr)
        parserListener->enterDivExpression(this);
}

void RiddleParser::DivExpressionContext::exitRule(tree::ParseTreeListener *listener){
    auto parserListener=dynamic_cast<RiddleParserListener *>(listener);
    if(parserListener != nullptr)
        parserListener->exitDivExpression(this);
}

std::any RiddleParser::DivExpressionContext::accept(tree::ParseTreeVisitor *visitor){
    if(auto parserVisitor=dynamic_cast<RiddleParserVisitor *>(visitor))
        return parserVisitor->visitDivExpression(this);
    else
        return visitor->visitChildren(this);
}
//----------------- NotExpressionContext ------------------------------------------------------------------

std::vector<RiddleParser::ExpressionContext *> RiddleParser::NotExpressionContext::expression(){
    return getRuleContexts<RiddleParser::ExpressionContext>();
}

RiddleParser::ExpressionContext *RiddleParser::NotExpressionContext::expression(size_t i){
    return getRuleContext<RiddleParser::ExpressionContext>(i);
}

tree::TerminalNode *RiddleParser::NotExpressionContext::Not(){
    return getToken(RiddleParser::Not, 0);
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
//----------------- BracketExpressionContext ------------------------------------------------------------------

RiddleParser::IdExpressionContext *RiddleParser::BracketExpressionContext::idExpression(){
    return getRuleContext<RiddleParser::IdExpressionContext>(0);
}

tree::TerminalNode *RiddleParser::BracketExpressionContext::LeftBracket(){
    return getToken(RiddleParser::LeftBracket, 0);
}

RiddleParser::ExpressionContext *RiddleParser::BracketExpressionContext::expression(){
    return getRuleContext<RiddleParser::ExpressionContext>(0);
}

tree::TerminalNode *RiddleParser::BracketExpressionContext::RightBracket(){
    return getToken(RiddleParser::RightBracket, 0);
}

RiddleParser::BracketExpressionContext::BracketExpressionContext(ExpressionContext *ctx){ copyFrom(ctx); }

void RiddleParser::BracketExpressionContext::enterRule(tree::ParseTreeListener *listener){
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
      parserListener->enterBracketExpression(this);
}

void RiddleParser::BracketExpressionContext::exitRule(tree::ParseTreeListener *listener){
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
      parserListener->exitBracketExpression(this);
}

std::any RiddleParser::BracketExpressionContext::accept(tree::ParseTreeVisitor *visitor){
  if (auto parserVisitor = dynamic_cast<RiddleParserVisitor*>(visitor))
      return parserVisitor->visitBracketExpression(this);
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
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
      parserListener->enterCaretExpression(this);
}

void RiddleParser::CaretExpressionContext::exitRule(tree::ParseTreeListener *listener){
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
      parserListener->exitCaretExpression(this);
}

std::any RiddleParser::CaretExpressionContext::accept(tree::ParseTreeVisitor *visitor){
  if (auto parserVisitor = dynamic_cast<RiddleParserVisitor*>(visitor))
      return parserVisitor->visitCaretExpression(this);
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
        setState(171);
        _errHandler->sync(this);
        switch(getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)){
            case 1:{
                _localctx=_tracker.createInstance<T_primaryExpressionContext>(_localctx);
                _ctx=_localctx;
                previousContext=_localctx;

                setState(165);
                primaryExpression();
                break;
            }

            case 2:{
                _localctx=_tracker.createInstance<BracketExpressionContext>(_localctx);
                _ctx=_localctx;
                previousContext=_localctx;
                setState(166);
                idExpression();
                setState(167);
                match(RiddleParser::LeftBracket);
                setState(168);
                expression(0);
                setState(169);
                match(RiddleParser::RightBracket);
                break;
            }

            default:
                break;
        }
        _ctx->stop=_input->LT(-1);
        setState(229);
        _errHandler->sync(this);
        alt=getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx);
        while(alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER){
            if(alt == 1){
                if(!_parseListeners.empty())
                    triggerExitRuleEvent();
                previousContext=_localctx;
                setState(227);
                _errHandler->sync(this);
                switch(getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)){
                    case 1:{
                        auto newContext=_tracker.createInstance<PlusExpressionContext>(
                                _tracker.createInstance<ExpressionContext>(parentContext, parentState));
                        _localctx=newContext;
                        pushNewRecursionContext(newContext, startState, RuleExpression);
                        setState(173);

                        if(!(precpred(_ctx, 18))) throw FailedPredicateException(this, "precpred(_ctx, 18)");
                        setState(174);
                        match(RiddleParser::Plus);
                        setState(175);
                        expression(19);
                        break;
                    }

                    case 2:{
                        auto newContext=_tracker.createInstance<MinusExpressionContext>(
                                _tracker.createInstance<ExpressionContext>(parentContext, parentState));
                        _localctx=newContext;
                        pushNewRecursionContext(newContext, startState, RuleExpression);
                        setState(176);

                        if(!(precpred(_ctx, 17))) throw FailedPredicateException(this, "precpred(_ctx, 17)");
                        setState(177);
                        match(RiddleParser::Minus);
                        setState(178);
                        expression(18);
                        break;
                    }

                    case 3:{
                        auto newContext=_tracker.createInstance<StarExpressionContext>(
                                _tracker.createInstance<ExpressionContext>(parentContext, parentState));
                        _localctx=newContext;
                        pushNewRecursionContext(newContext, startState, RuleExpression);
                        setState(179);

                        if(!(precpred(_ctx, 16))) throw FailedPredicateException(this, "precpred(_ctx, 16)");
                        setState(180);
                        match(RiddleParser::Star);
                        setState(181);
                        expression(17);
                        break;
                    }

                    case 4:{
                        auto newContext=_tracker.createInstance<DivExpressionContext>(
                                _tracker.createInstance<ExpressionContext>(parentContext, parentState));
                        _localctx=newContext;
                        pushNewRecursionContext(newContext, startState, RuleExpression);
                        setState(182);

                        if(!(precpred(_ctx, 15))) throw FailedPredicateException(this, "precpred(_ctx, 15)");
                        setState(183);
                        match(RiddleParser::Div);
                        setState(184);
                        expression(16);
                        break;
                    }

                    case 5:{
                        auto newContext=_tracker.createInstance<ModExpressionContext>(
                                _tracker.createInstance<ExpressionContext>(parentContext, parentState));
                        _localctx=newContext;
                        pushNewRecursionContext(newContext, startState, RuleExpression);
                        setState(185);

                        if(!(precpred(_ctx, 14))) throw FailedPredicateException(this, "precpred(_ctx, 14)");
                        setState(186);
                        match(RiddleParser::Mod);
                        setState(187);
                        expression(15);
                        break;
                    }

                    case 6:{
                        auto newContext=_tracker.createInstance<CaretExpressionContext>(
                                _tracker.createInstance<ExpressionContext>(parentContext, parentState));
                        _localctx=newContext;
                        pushNewRecursionContext(newContext, startState, RuleExpression);
                        setState(188);

                        if(!(precpred(_ctx, 13))) throw FailedPredicateException(this, "precpred(_ctx, 13)");
                        setState(189);
                        match(RiddleParser::Caret);
                        setState(190);
                        expression(14);
                        break;
                    }

                    case 7:{
                        auto newContext=_tracker.createInstance<AndExpressionContext>(
                                _tracker.createInstance<ExpressionContext>(parentContext, parentState));
                        _localctx=newContext;
                        pushNewRecursionContext(newContext, startState, RuleExpression);
                        setState(191);

                        if(!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
                        setState(192);
                        match(RiddleParser::And);
                        setState(193);
                        expression(13);
                        break;
                    }

                    case 8:{
                        auto newContext=_tracker.createInstance<OrExpressionContext>(
                                _tracker.createInstance<ExpressionContext>(parentContext, parentState));
                        _localctx=newContext;
                        pushNewRecursionContext(newContext, startState, RuleExpression);
                        setState(194);

                        if(!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
                        setState(195);
                        match(RiddleParser::Or);
                        setState(196);
                        expression(12);
                        break;
                    }

                    case 9:{
                        auto newContext=_tracker.createInstance<TildeExpressionContext>(
                                _tracker.createInstance<ExpressionContext>(parentContext, parentState));
                        _localctx=newContext;
                        pushNewRecursionContext(newContext, startState, RuleExpression);
                        setState(197);

                        if(!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
                        setState(198);
                        match(RiddleParser::Tilde);
                        setState(199);
                        expression(11);
                        break;
                    }

                    case 10:{
                        auto newContext=_tracker.createInstance<NotExpressionContext>(
                                _tracker.createInstance<ExpressionContext>(parentContext, parentState));
                        _localctx=newContext;
                        pushNewRecursionContext(newContext, startState, RuleExpression);
                        setState(200);

                        if(!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
                        setState(201);
                        match(RiddleParser::Not);
                        setState(202);
                        expression(10);
                        break;
                    }

                    case 11:{
                        auto newContext=_tracker.createInstance<AssignExpressionContext>(
                                _tracker.createInstance<ExpressionContext>(parentContext, parentState));
                        _localctx=newContext;
                        pushNewRecursionContext(newContext, startState, RuleExpression);
                        setState(203);

                        if(!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
                        setState(204);
                        match(RiddleParser::Assign);
                        setState(205);
                        expression(9);
                        break;
                    }

                    case 12:{
                        auto newContext=_tracker.createInstance<LessExpressionContext>(
                                _tracker.createInstance<ExpressionContext>(parentContext, parentState));
                        _localctx=newContext;
                        pushNewRecursionContext(newContext, startState, RuleExpression);
                        setState(206);

                        if(!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
                        setState(207);
                        match(RiddleParser::Less);
                        setState(208);
                        expression(8);
                        break;
                    }

                    case 13:{
                        auto newContext=_tracker.createInstance<GreaterExpressionContext>(
                                _tracker.createInstance<ExpressionContext>(parentContext, parentState));
                        _localctx=newContext;
                        pushNewRecursionContext(newContext, startState, RuleExpression);
                        setState(209);

                        if(!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
                        setState(210);
                        match(RiddleParser::Greater);
                        setState(211);
                        expression(7);
                        break;
                    }

                    case 14:{
                        auto newContext=_tracker.createInstance<PlusAssignExpressionContext>(
                                _tracker.createInstance<ExpressionContext>(parentContext, parentState));
                        _localctx=newContext;
                        pushNewRecursionContext(newContext, startState, RuleExpression);
                        setState(212);

                        if(!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
                        setState(213);
                        match(RiddleParser::PlusAssign);
                        setState(214);
                        expression(6);
                        break;
                    }

                    case 15:{
                        auto newContext=_tracker.createInstance<MinusAssignExpressionContext>(
                                _tracker.createInstance<ExpressionContext>(parentContext, parentState));
                        _localctx=newContext;
                        pushNewRecursionContext(newContext, startState, RuleExpression);
                        setState(215);

                        if(!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
                        setState(216);
                        match(RiddleParser::MinusAssign);
                        setState(217);
                        expression(5);
                        break;
                    }

                    case 16:{
                        auto newContext=_tracker.createInstance<DivAssignEpxressionContext>(
                                _tracker.createInstance<ExpressionContext>(parentContext, parentState));
                        _localctx=newContext;
                        pushNewRecursionContext(newContext, startState, RuleExpression);
                        setState(218);

                        if(!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
                        setState(219);
                        match(RiddleParser::DivAssign);
                        setState(220);
                        expression(4);
                        break;
                    }

                    case 17:{
                        auto newContext=_tracker.createInstance<ModAssignExpressionContext>(
                                _tracker.createInstance<ExpressionContext>(parentContext, parentState));
                        _localctx=newContext;
                        pushNewRecursionContext(newContext, startState, RuleExpression);
                        setState(221);

                        if(!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
                        setState(222);
                        match(RiddleParser::ModAssign);
                        setState(223);
                        expression(3);
                        break;
                    }

                    case 18:{
                        auto newContext=_tracker.createInstance<XorAssignExpressionContext>(
                                _tracker.createInstance<ExpressionContext>(parentContext, parentState));
                        _localctx=newContext;
                        pushNewRecursionContext(newContext, startState, RuleExpression);
                        setState(224);

                        if(!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
                        setState(225);
                        match(RiddleParser::XorAssign);
                        setState(226);
                        expression(2);
                        break;
                    }

                    default:
                        break;
                }
            }
            setState(231);
            _errHandler->sync(this);
            alt=getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx);
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
    enterRule(_localctx, 26, RiddleParser::RuleIdExpression);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit=finally([=]{
#endif
        exitRule();
    });
    try{
        enterOuterAlt(_localctx, 1);
        setState(232);
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
    enterRule(_localctx, 28, RiddleParser::RuleTypeLiteral);

#if __cplusplus > 201703L
    auto onExit = finally([=, this] {
#else
    auto onExit=finally([=]{
#endif
        exitRule();
    });
    try{
        enterOuterAlt(_localctx, 1);
        setState(234);
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
    enterRule(_localctx, 30, RiddleParser::RuleBasicType);
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
        setState(236);
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
    enterRule(_localctx, 32, RiddleParser::RuleLiteral);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
      setState(243);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
        case RiddleParser::IntegerLiteral:{
        enterOuterAlt(_localctx, 1);
            setState(238);
            intLiteral();
        break;
      }

        case RiddleParser::StringLiteral:{
        enterOuterAlt(_localctx, 2);
            setState(239);
            strLiteral();
        break;
      }

        case RiddleParser::CharLiteral:{
        enterOuterAlt(_localctx, 3);
            setState(240);
        charLiteral();
        break;
      }

        case RiddleParser::FloatLiteral:{
        enterOuterAlt(_localctx, 4);
            setState(241);
        floatLiteral();
        break;
      }

        case RiddleParser::False:
        case RiddleParser::True:{
        enterOuterAlt(_localctx, 5);
            setState(242);
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
    enterRule(_localctx, 34, RiddleParser::RuleStrLiteral);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
      setState(245);
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
      setState(247);
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
    enterRule(_localctx, 38, RiddleParser::RuleIntLiteral);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
      setState(249);
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
    enterRule(_localctx, 40, RiddleParser::RuleFloatLiteral);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
      setState(251);
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
    enterRule(_localctx, 42, RiddleParser::RuleBoolenLiteral);
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
      setState(253);
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

bool RiddleParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex){
    switch(predicateIndex){
        case 1:
            return precpred(_ctx, 18);
        case 2:
            return precpred(_ctx, 17);
        case 3:
            return precpred(_ctx, 16);
        case 4:
            return precpred(_ctx, 15);
        case 5:
            return precpred(_ctx, 14);
        case 6:
            return precpred(_ctx, 13);
        case 7:
            return precpred(_ctx, 12);
        case 8:
            return precpred(_ctx, 11);
        case 9:
            return precpred(_ctx, 10);
        case 10:
            return precpred(_ctx, 9);
        case 11:
            return precpred(_ctx, 8);
        case 12:
            return precpred(_ctx, 7);
        case 13:
            return precpred(_ctx, 6);
        case 14:
            return precpred(_ctx, 5);
        case 15:
            return precpred(_ctx, 4);
        case 16:
            return precpred(_ctx, 3);
        case 17:
            return precpred(_ctx, 2);
        case 18:
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
