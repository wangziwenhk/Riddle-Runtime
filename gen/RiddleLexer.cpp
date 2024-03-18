
// Generated from C:/Users/wangz/CLionProjects/Riddle/RiddleLexer.g4 by ANTLR 4.13.1


#include "RiddleLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct RiddleLexerStaticData final {
  RiddleLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  RiddleLexerStaticData(const RiddleLexerStaticData&) = delete;
  RiddleLexerStaticData(RiddleLexerStaticData&&) = delete;
  RiddleLexerStaticData& operator=(const RiddleLexerStaticData&) = delete;
  RiddleLexerStaticData& operator=(RiddleLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag riddlelexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
RiddleLexerStaticData *riddlelexerLexerStaticData = nullptr;

void riddlelexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (riddlelexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(riddlelexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<RiddleLexerStaticData>(
    std::vector<std::string>{
            "Var", "Val", "Fun", "If", "Else", "False", "True", "While", "Print",
            "Int", "Float", "Char", "Boolen", "String", "LeftParen", "RightParen",
            "LeftBracket", "RightBracket", "LeftBrace", "RightBrace", "Plus",
            "Minus", "Star", "Div", "Mod", "Caret", "And", "Or", "Tilde", "Not",
            "Assign", "Less", "Greater", "PlusAssign", "MinusAssign", "StarAssign",
            "DivAssign", "ModAssign", "XorAssign", "AndAssign", "OrAssign", "LeftShiftAssign",
            "RightShiftAssign", "Equal", "NotEqual", "LessEqual", "GreaterEqual",
            "AndAnd", "OrOr", "PlusPlus", "MinusMinus", "Comma", "Question", "Colon",
            "Semi", "Dot", "IntegerLiteral", "DecimalSequence", "OctalSequence",
            "BinarySequence", "HexadecimalSequence", "StringLiteral", "StringPrefix",
            "Cchar", "CharLiteral", "EscapeCharacter", "FloatLiteral", "Identfier",
            "Exponentpart", "DigitSequence", "SIGN", "DIGIT", "NOZERODIGIT", "OCTALDIGIT",
            "BINARYDIGIT", "HEXADECIMALDIGIT", "NODIGIT", "Whitespace", "NewLine",
            "Newline", "BlockComment", "LineComment"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
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
          4, 0, 72, 551, 6, -1, 2, 0, 7, 0, 2, 1, 7, 1, 2, 2, 7, 2, 2, 3, 7, 3, 2, 4, 7, 4, 2, 5, 7, 5, 2, 6, 7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,
  	7,28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,
  	7,35,2,36,7,36,2,37,7,37,2,38,7,38,2,39,7,39,2,40,7,40,2,41,7,41,2,42,
  	7,42,2,43,7,43,2,44,7,44,2,45,7,45,2,46,7,46,2,47,7,47,2,48,7,48,2,49,
  	7,49,2,50,7,50,2,51,7,51,2,52,7,52,2,53,7,53,2,54,7,54,2,55,7,55,2,56,
  	7,56,2,57,7,57,2,58,7,58,2,59,7,59,2,60,7,60,2,61,7,61,2,62,7,62,2,63,
  	7,63,2,64,7,64,2,65,7,65,2,66,7,66,2,67,7,67,2,68,7,68,2,69,7,69,2,70,
  	7,70,2,71,7,71,2,72,7,72,2,73,7,73,2,74,7,74,2,75,7,75,2,76,7,76,2,77,
          7, 77, 2, 78, 7, 78, 2, 79, 7, 79, 2, 80, 7, 80, 2, 81, 7, 81, 1, 0, 1, 0, 1, 0, 1, 0, 1, 1, 1, 1,
          1, 1, 1, 1, 1, 2, 1, 2, 1, 2, 1, 2, 1, 3, 1, 3, 1, 3, 1, 4, 1, 4, 1, 4, 1, 4, 1, 4, 1, 5, 1, 5, 1, 5, 1,
          5, 1, 5, 1, 5, 1, 6, 1, 6, 1, 6, 1, 6, 1, 6, 1, 7, 1, 7, 1, 7, 1, 7, 1, 7, 1, 7, 1, 8, 1, 8, 1, 8, 1, 8,
          1, 8, 1, 8, 1, 9, 1, 9, 1, 9, 1, 9, 1, 10, 1, 10, 1, 10, 1, 10, 1, 10, 1, 10, 1, 11, 1, 11, 1, 11,
          1, 11, 1, 11, 1, 12, 1, 12, 1, 12, 1, 12, 1, 12, 1, 13, 1, 13, 1, 13, 1, 13, 1, 13, 1, 13, 1, 13,
          1, 14, 1, 14, 1, 15, 1, 15, 1, 16, 1, 16, 1, 17, 1, 17, 1, 18, 1, 18, 1, 19, 1, 19, 1, 20, 1, 20,
          1, 21, 1, 21, 1, 22, 1, 22, 1, 23, 1, 23, 1, 24, 1, 24, 1, 25, 1, 25, 1, 26, 1, 26, 1, 27, 1, 27,
          1, 28, 1, 28, 1, 29, 1, 29, 1, 30, 1, 30, 1, 31, 1, 31, 1, 32, 1, 32, 1, 33, 1, 33, 1, 33, 1, 34,
          1, 34, 1, 34, 1, 35, 1, 35, 1, 35, 1, 36, 1, 36, 1, 36, 1, 37, 1, 37, 1, 37, 1, 38, 1, 38, 1, 38,
          1, 39, 1, 39, 1, 39, 1, 40, 1, 40, 1, 40, 1, 41, 1, 41, 1, 41, 1, 41, 1, 42, 1, 42, 1, 42, 1, 42,
          1, 43, 1, 43, 1, 43, 1, 44, 1, 44, 1, 44, 1, 45, 1, 45, 1, 45, 1, 46, 1, 46, 1, 46, 1, 47, 1, 47,
          1, 47, 1, 47, 1, 47, 3, 47, 323, 8, 47, 1, 48, 1, 48, 1, 48, 1, 48, 3, 48, 329, 8, 48, 1, 49, 1,
          49, 1, 49, 1, 50, 1, 50, 1, 50, 1, 51, 1, 51, 1, 52, 1, 52, 1, 53, 1, 53, 1, 54, 1, 54, 1, 55, 1,
          55, 1, 56, 1, 56, 1, 56, 1, 56, 3, 56, 351, 8, 56, 1, 57, 1, 57, 5, 57, 355, 8, 57, 10, 57, 12,
          57, 358, 9, 57, 1, 57, 3, 57, 361, 8, 57, 1, 58, 1, 58, 4, 58, 365, 8, 58, 11, 58, 12, 58, 366,
          1, 59, 1, 59, 1, 59, 1, 59, 3, 59, 373, 8, 59, 1, 59, 4, 59, 376, 8, 59, 11, 59, 12, 59, 377,
          1, 60, 1, 60, 1, 60, 1, 60, 3, 60, 384, 8, 60, 1, 60, 4, 60, 387, 8, 60, 11, 60, 12, 60, 388,
          1, 61, 3, 61, 392, 8, 61, 1, 61, 1, 61, 5, 61, 396, 8, 61, 10, 61, 12, 61, 399, 9, 61, 1, 61,
          1, 61, 1, 62, 1, 62, 1, 63, 1, 63, 1, 63, 3, 63, 408, 8, 63, 1, 64, 1, 64, 1, 64, 1, 64, 1, 65,
          1, 65, 1, 65, 1, 65, 1, 65, 1, 65, 1, 65, 1, 65, 1, 65, 1, 65, 1, 65, 1, 65, 1, 65, 1, 65, 1, 65,
          1, 65, 1, 65, 1, 65, 1, 65, 1, 65, 1, 65, 1, 65, 1, 65, 1, 65, 1, 65, 1, 65, 1, 65, 1, 65, 1, 65,
          1, 65, 1, 65, 1, 65, 1, 65, 1, 65, 1, 65, 1, 65, 1, 65, 1, 65, 1, 65, 1, 65, 1, 65, 3, 65, 455,
          8, 65, 1, 66, 1, 66, 1, 66, 1, 66, 3, 66, 461, 8, 66, 1, 66, 1, 66, 1, 66, 3, 66, 466, 8, 66, 3,
          66, 468, 8, 66, 1, 67, 1, 67, 1, 67, 5, 67, 473, 8, 67, 10, 67, 12, 67, 476, 9, 67, 1, 68, 1,
          68, 3, 68, 480, 8, 68, 1, 68, 1, 68, 1, 68, 3, 68, 485, 8, 68, 1, 68, 3, 68, 488, 8, 68, 1, 69,
          4, 69, 491, 8, 69, 11, 69, 12, 69, 492, 1, 70, 1, 70, 1, 71, 1, 71, 1, 72, 1, 72, 1, 73, 1, 73,
          1, 74, 1, 74, 1, 75, 1, 75, 1, 76, 1, 76, 1, 77, 4, 77, 510, 8, 77, 11, 77, 12, 77, 511, 1, 77,
          1, 77, 1, 78, 1, 78, 1, 79, 1, 79, 3, 79, 520, 8, 79, 1, 79, 3, 79, 523, 8, 79, 1, 79, 1, 79, 1,
          80, 1, 80, 1, 80, 1, 80, 5, 80, 531, 8, 80, 10, 80, 12, 80, 534, 9, 80, 1, 80, 1, 80, 1, 80, 1,
          80, 1, 80, 1, 81, 1, 81, 1, 81, 1, 81, 5, 81, 545, 8, 81, 10, 81, 12, 81, 548, 9, 81, 1, 81, 1,
          81, 1, 532, 0, 82, 1, 1, 3, 2, 5, 3, 7, 4, 9, 5, 11, 6, 13, 7, 15, 8, 17, 9, 19, 10, 21, 11, 23,
          12, 25, 13, 27, 14, 29, 15, 31, 16, 33, 17, 35, 18, 37, 19, 39, 20, 41, 21, 43, 22, 45, 23,
          47, 24, 49, 25, 51, 26, 53, 27, 55, 28, 57, 29, 59, 30, 61, 31, 63, 32, 65, 33, 67, 34, 69,
          35, 71, 36, 73, 37, 75, 38, 77, 39, 79, 40, 81, 41, 83, 42, 85, 43, 87, 44, 89, 45, 91, 46,
          93, 47, 95, 48, 97, 49, 99, 50, 101, 51, 103, 52, 105, 53, 107, 54, 109, 55, 111, 56, 113,
          57, 115, 58, 117, 59, 119, 60, 121, 61, 123, 62, 125, 63, 127, 0, 129, 64, 131, 65, 133,
          66, 135, 67, 137, 0, 139, 0, 141, 0, 143, 0, 145, 0, 147, 0, 149, 0, 151, 0, 153, 0, 155, 68,
          157, 69, 159, 70, 161, 71, 163, 72, 1, 0, 9, 2, 0, 43, 43, 45, 45, 1, 0, 48, 57, 1, 0, 49, 57,
          1, 0, 48, 55, 1, 0, 48, 49, 3, 0, 48, 57, 65, 70, 97, 102, 4, 0, 65, 90, 95, 95, 97, 122, 19968,
          40869, 2, 0, 9, 9, 32, 32, 2, 0, 10, 10, 13, 13, 582, 0, 1, 1, 0, 0, 0, 0, 3, 1, 0, 0, 0, 0, 5, 1,
          0, 0, 0, 0, 7, 1, 0, 0, 0, 0, 9, 1, 0, 0, 0, 0, 11, 1, 0, 0, 0, 0, 13, 1, 0, 0, 0, 0, 15, 1, 0, 0, 0,
          0, 17, 1, 0, 0, 0, 0, 19, 1, 0, 0, 0, 0, 21, 1, 0, 0, 0, 0, 23, 1, 0, 0, 0, 0, 25, 1, 0, 0, 0, 0, 27,
          1, 0, 0, 0, 0, 29, 1, 0, 0, 0, 0, 31, 1, 0, 0, 0, 0, 33, 1, 0, 0, 0, 0, 35, 1, 0, 0, 0, 0, 37, 1, 0,
          0, 0, 0, 39, 1, 0, 0, 0, 0, 41, 1, 0, 0, 0, 0, 43, 1, 0, 0, 0, 0, 45, 1, 0, 0, 0, 0, 47, 1, 0, 0, 0,
          0, 49, 1, 0, 0, 0, 0, 51, 1, 0, 0, 0, 0, 53, 1, 0, 0, 0, 0, 55, 1, 0, 0, 0, 0, 57, 1, 0, 0, 0, 0, 59,
          1, 0, 0, 0, 0, 61, 1, 0, 0, 0, 0, 63, 1, 0, 0, 0, 0, 65, 1, 0, 0, 0, 0, 67, 1, 0, 0, 0, 0, 69, 1, 0,
          0, 0, 0, 71, 1, 0, 0, 0, 0, 73, 1, 0, 0, 0, 0, 75, 1, 0, 0, 0, 0, 77, 1, 0, 0, 0, 0, 79, 1, 0, 0, 0,
          0, 81, 1, 0, 0, 0, 0, 83, 1, 0, 0, 0, 0, 85, 1, 0, 0, 0, 0, 87, 1, 0, 0, 0, 0, 89, 1, 0, 0, 0, 0, 91,
          1, 0, 0, 0, 0, 93, 1, 0, 0, 0, 0, 95, 1, 0, 0, 0, 0, 97, 1, 0, 0, 0, 0, 99, 1, 0, 0, 0, 0, 101, 1, 0,
          0, 0, 0, 103, 1, 0, 0, 0, 0, 105, 1, 0, 0, 0, 0, 107, 1, 0, 0, 0, 0, 109, 1, 0, 0, 0, 0, 111, 1, 0,
          0, 0, 0, 113, 1, 0, 0, 0, 0, 115, 1, 0, 0, 0, 0, 117, 1, 0, 0, 0, 0, 119, 1, 0, 0, 0, 0, 121, 1, 0,
          0, 0, 0, 123, 1, 0, 0, 0, 0, 125, 1, 0, 0, 0, 0, 129, 1, 0, 0, 0, 0, 131, 1, 0, 0, 0, 0, 133, 1, 0,
          0, 0, 0, 135, 1, 0, 0, 0, 0, 155, 1, 0, 0, 0, 0, 157, 1, 0, 0, 0, 0, 159, 1, 0, 0, 0, 0, 161, 1, 0,
          0, 0, 0, 163, 1, 0, 0, 0, 1, 165, 1, 0, 0, 0, 3, 169, 1, 0, 0, 0, 5, 173, 1, 0, 0, 0, 7, 177, 1, 0,
          0, 0, 9, 180, 1, 0, 0, 0, 11, 185, 1, 0, 0, 0, 13, 191, 1, 0, 0, 0, 15, 196, 1, 0, 0, 0, 17, 202,
          1, 0, 0, 0, 19, 208, 1, 0, 0, 0, 21, 212, 1, 0, 0, 0, 23, 218, 1, 0, 0, 0, 25, 223, 1, 0, 0, 0, 27,
          228, 1, 0, 0, 0, 29, 235, 1, 0, 0, 0, 31, 237, 1, 0, 0, 0, 33, 239, 1, 0, 0, 0, 35, 241, 1, 0, 0,
          0, 37, 243, 1, 0, 0, 0, 39, 245, 1, 0, 0, 0, 41, 247, 1, 0, 0, 0, 43, 249, 1, 0, 0, 0, 45, 251,
          1, 0, 0, 0, 47, 253, 1, 0, 0, 0, 49, 255, 1, 0, 0, 0, 51, 257, 1, 0, 0, 0, 53, 259, 1, 0, 0, 0, 55,
          261, 1, 0, 0, 0, 57, 263, 1, 0, 0, 0, 59, 265, 1, 0, 0, 0, 61, 267, 1, 0, 0, 0, 63, 269, 1, 0, 0,
          0, 65, 271, 1, 0, 0, 0, 67, 273, 1, 0, 0, 0, 69, 276, 1, 0, 0, 0, 71, 279, 1, 0, 0, 0, 73, 282,
          1, 0, 0, 0, 75, 285, 1, 0, 0, 0, 77, 288, 1, 0, 0, 0, 79, 291, 1, 0, 0, 0, 81, 294, 1, 0, 0, 0, 83,
          297, 1, 0, 0, 0, 85, 301, 1, 0, 0, 0, 87, 305, 1, 0, 0, 0, 89, 308, 1, 0, 0, 0, 91, 311, 1, 0, 0,
          0, 93, 314, 1, 0, 0, 0, 95, 322, 1, 0, 0, 0, 97, 328, 1, 0, 0, 0, 99, 330, 1, 0, 0, 0, 101, 333,
          1, 0, 0, 0, 103, 336, 1, 0, 0, 0, 105, 338, 1, 0, 0, 0, 107, 340, 1, 0, 0, 0, 109, 342, 1, 0, 0,
          0, 111, 344, 1, 0, 0, 0, 113, 350, 1, 0, 0, 0, 115, 360, 1, 0, 0, 0, 117, 362, 1, 0, 0, 0, 119,
          372, 1, 0, 0, 0, 121, 383, 1, 0, 0, 0, 123, 391, 1, 0, 0, 0, 125, 402, 1, 0, 0, 0, 127, 407, 1,
          0, 0, 0, 129, 409, 1, 0, 0, 0, 131, 454, 1, 0, 0, 0, 133, 467, 1, 0, 0, 0, 135, 469, 1, 0, 0, 0,
          137, 487, 1, 0, 0, 0, 139, 490, 1, 0, 0, 0, 141, 494, 1, 0, 0, 0, 143, 496, 1, 0, 0, 0, 145, 498,
          1, 0, 0, 0, 147, 500, 1, 0, 0, 0, 149, 502, 1, 0, 0, 0, 151, 504, 1, 0, 0, 0, 153, 506, 1, 0, 0,
          0, 155, 509, 1, 0, 0, 0, 157, 515, 1, 0, 0, 0, 159, 522, 1, 0, 0, 0, 161, 526, 1, 0, 0, 0, 163,
          540, 1, 0, 0, 0, 165, 166, 5, 118, 0, 0, 166, 167, 5, 97, 0, 0, 167, 168, 5, 114, 0, 0, 168,
          2, 1, 0, 0, 0, 169, 170, 5, 118, 0, 0, 170, 171, 5, 97, 0, 0, 171, 172, 5, 108, 0, 0, 172, 4,
          1, 0, 0, 0, 173, 174, 5, 102, 0, 0, 174, 175, 5, 117, 0, 0, 175, 176, 5, 110, 0, 0, 176, 6, 1,
          0, 0, 0, 177, 178, 5, 105, 0, 0, 178, 179, 5, 102, 0, 0, 179, 8, 1, 0, 0, 0, 180, 181, 5, 101,
          0, 0, 181, 182, 5, 108, 0, 0, 182, 183, 5, 115, 0, 0, 183, 184, 5, 101, 0, 0, 184, 10, 1, 0,
          0, 0, 185, 186, 5, 102, 0, 0, 186, 187, 5, 97, 0, 0, 187, 188, 5, 108, 0, 0, 188, 189, 5, 115,
          0, 0, 189, 190, 5, 101, 0, 0, 190, 12, 1, 0, 0, 0, 191, 192, 5, 116, 0, 0, 192, 193, 5, 114,
          0, 0, 193, 194, 5, 117, 0, 0, 194, 195, 5, 101, 0, 0, 195, 14, 1, 0, 0, 0, 196, 197, 5, 119,
          0, 0, 197, 198, 5, 104, 0, 0, 198, 199, 5, 105, 0, 0, 199, 200, 5, 108, 0, 0, 200, 201, 5, 101,
          0, 0, 201, 16, 1, 0, 0, 0, 202, 203, 5, 112, 0, 0, 203, 204, 5, 114, 0, 0, 204, 205, 5, 105,
          0, 0, 205, 206, 5, 110, 0, 0, 206, 207, 5, 116, 0, 0, 207, 18, 1, 0, 0, 0, 208, 209, 5, 105,
          0, 0, 209, 210, 5, 110, 0, 0, 210, 211, 5, 116, 0, 0, 211, 20, 1, 0, 0, 0, 212, 213, 5, 102,
          0, 0, 213, 214, 5, 108, 0, 0, 214, 215, 5, 111, 0, 0, 215, 216, 5, 97, 0, 0, 216, 217, 5, 116,
          0, 0, 217, 22, 1, 0, 0, 0, 218, 219, 5, 99, 0, 0, 219, 220, 5, 104, 0, 0, 220, 221, 5, 97, 0,
          0, 221, 222, 5, 114, 0, 0, 222, 24, 1, 0, 0, 0, 223, 224, 5, 98, 0, 0, 224, 225, 5, 111, 0, 0,
          225, 226, 5, 111, 0, 0, 226, 227, 5, 108, 0, 0, 227, 26, 1, 0, 0, 0, 228, 229, 5, 115, 0, 0,
          229, 230, 5, 116, 0, 0, 230, 231, 5, 114, 0, 0, 231, 232, 5, 105, 0, 0, 232, 233, 5, 110, 0,
          0, 233, 234, 5, 103, 0, 0, 234, 28, 1, 0, 0, 0, 235, 236, 5, 40, 0, 0, 236, 30, 1, 0, 0, 0, 237,
          238, 5, 41, 0, 0, 238, 32, 1, 0, 0, 0, 239, 240, 5, 91, 0, 0, 240, 34, 1, 0, 0, 0, 241, 242, 5,
          93, 0, 0, 242, 36, 1, 0, 0, 0, 243, 244, 5, 123, 0, 0, 244, 38, 1, 0, 0, 0, 245, 246, 5, 125,
          0, 0, 246, 40, 1, 0, 0, 0, 247, 248, 5, 43, 0, 0, 248, 42, 1, 0, 0, 0, 249, 250, 5, 45, 0, 0, 250,
          44, 1, 0, 0, 0, 251, 252, 5, 42, 0, 0, 252, 46, 1, 0, 0, 0, 253, 254, 5, 47, 0, 0, 254, 48, 1,
          0, 0, 0, 255, 256, 5, 37, 0, 0, 256, 50, 1, 0, 0, 0, 257, 258, 5, 94, 0, 0, 258, 52, 1, 0, 0, 0,
          259, 260, 5, 38, 0, 0, 260, 54, 1, 0, 0, 0, 261, 262, 5, 124, 0, 0, 262, 56, 1, 0, 0, 0, 263,
          264, 5, 126, 0, 0, 264, 58, 1, 0, 0, 0, 265, 266, 5, 33, 0, 0, 266, 60, 1, 0, 0, 0, 267, 268,
          5, 61, 0, 0, 268, 62, 1, 0, 0, 0, 269, 270, 5, 60, 0, 0, 270, 64, 1, 0, 0, 0, 271, 272, 5, 62,
          0, 0, 272, 66, 1, 0, 0, 0, 273, 274, 5, 43, 0, 0, 274, 275, 5, 61, 0, 0, 275, 68, 1, 0, 0, 0, 276,
          277, 5, 45, 0, 0, 277, 278, 5, 61, 0, 0, 278, 70, 1, 0, 0, 0, 279, 280, 5, 42, 0, 0, 280, 281,
          5, 61, 0, 0, 281, 72, 1, 0, 0, 0, 282, 283, 5, 47, 0, 0, 283, 284, 5, 61, 0, 0, 284, 74, 1, 0,
          0, 0, 285, 286, 5, 37, 0, 0, 286, 287, 5, 61, 0, 0, 287, 76, 1, 0, 0, 0, 288, 289, 5, 94, 0, 0,
          289, 290, 5, 61, 0, 0, 290, 78, 1, 0, 0, 0, 291, 292, 5, 38, 0, 0, 292, 293, 5, 61, 0, 0, 293,
          80, 1, 0, 0, 0, 294, 295, 5, 124, 0, 0, 295, 296, 5, 61, 0, 0, 296, 82, 1, 0, 0, 0, 297, 298,
          5, 60, 0, 0, 298, 299, 5, 60, 0, 0, 299, 300, 5, 61, 0, 0, 300, 84, 1, 0, 0, 0, 301, 302, 5, 62,
          0, 0, 302, 303, 5, 62, 0, 0, 303, 304, 5, 61, 0, 0, 304, 86, 1, 0, 0, 0, 305, 306, 5, 61, 0, 0,
          306, 307, 5, 61, 0, 0, 307, 88, 1, 0, 0, 0, 308, 309, 5, 33, 0, 0, 309, 310, 5, 61, 0, 0, 310,
          90, 1, 0, 0, 0, 311, 312, 5, 60, 0, 0, 312, 313, 5, 61, 0, 0, 313, 92, 1, 0, 0, 0, 314, 315, 5,
          62, 0, 0, 315, 316, 5, 61, 0, 0, 316, 94, 1, 0, 0, 0, 317, 318, 5, 38, 0, 0, 318, 323, 5, 38,
          0, 0, 319, 320, 5, 97, 0, 0, 320, 321, 5, 110, 0, 0, 321, 323, 5, 100, 0, 0, 322, 317, 1, 0,
          0, 0, 322, 319, 1, 0, 0, 0, 323, 96, 1, 0, 0, 0, 324, 325, 5, 124, 0, 0, 325, 329, 5, 124, 0,
          0, 326, 327, 5, 111, 0, 0, 327, 329, 5, 114, 0, 0, 328, 324, 1, 0, 0, 0, 328, 326, 1, 0, 0, 0,
          329, 98, 1, 0, 0, 0, 330, 331, 5, 43, 0, 0, 331, 332, 5, 43, 0, 0, 332, 100, 1, 0, 0, 0, 333,
          334, 5, 45, 0, 0, 334, 335, 5, 45, 0, 0, 335, 102, 1, 0, 0, 0, 336, 337, 5, 44, 0, 0, 337, 104,
          1, 0, 0, 0, 338, 339, 5, 63, 0, 0, 339, 106, 1, 0, 0, 0, 340, 341, 5, 58, 0, 0, 341, 108, 1, 0,
          0, 0, 342, 343, 5, 59, 0, 0, 343, 110, 1, 0, 0, 0, 344, 345, 5, 46, 0, 0, 345, 112, 1, 0, 0, 0,
          346, 351, 3, 115, 57, 0, 347, 351, 3, 117, 58, 0, 348, 351, 3, 121, 60, 0, 349, 351, 3, 119,
          59, 0, 350, 346, 1, 0, 0, 0, 350, 347, 1, 0, 0, 0, 350, 348, 1, 0, 0, 0, 350, 349, 1, 0, 0, 0,
          351, 114, 1, 0, 0, 0, 352, 356, 3, 145, 72, 0, 353, 355, 3, 143, 71, 0, 354, 353, 1, 0, 0, 0,
          355, 358, 1, 0, 0, 0, 356, 354, 1, 0, 0, 0, 356, 357, 1, 0, 0, 0, 357, 361, 1, 0, 0, 0, 358, 356,
          1, 0, 0, 0, 359, 361, 5, 48, 0, 0, 360, 352, 1, 0, 0, 0, 360, 359, 1, 0, 0, 0, 361, 116, 1, 0,
          0, 0, 362, 364, 5, 48, 0, 0, 363, 365, 3, 147, 73, 0, 364, 363, 1, 0, 0, 0, 365, 366, 1, 0, 0,
          0, 366, 364, 1, 0, 0, 0, 366, 367, 1, 0, 0, 0, 367, 118, 1, 0, 0, 0, 368, 369, 5, 48, 0, 0, 369,
          373, 5, 98, 0, 0, 370, 371, 5, 48, 0, 0, 371, 373, 5, 66, 0, 0, 372, 368, 1, 0, 0, 0, 372, 370,
          1, 0, 0, 0, 373, 375, 1, 0, 0, 0, 374, 376, 3, 149, 74, 0, 375, 374, 1, 0, 0, 0, 376, 377, 1,
          0, 0, 0, 377, 375, 1, 0, 0, 0, 377, 378, 1, 0, 0, 0, 378, 120, 1, 0, 0, 0, 379, 380, 5, 48, 0,
          0, 380, 384, 5, 120, 0, 0, 381, 382, 5, 48, 0, 0, 382, 384, 5, 88, 0, 0, 383, 379, 1, 0, 0, 0,
          383, 381, 1, 0, 0, 0, 384, 386, 1, 0, 0, 0, 385, 387, 3, 151, 75, 0, 386, 385, 1, 0, 0, 0, 387,
          388, 1, 0, 0, 0, 388, 386, 1, 0, 0, 0, 388, 389, 1, 0, 0, 0, 389, 122, 1, 0, 0, 0, 390, 392, 3,
          125, 62, 0, 391, 390, 1, 0, 0, 0, 391, 392, 1, 0, 0, 0, 392, 393, 1, 0, 0, 0, 393, 397, 5, 34,
          0, 0, 394, 396, 3, 127, 63, 0, 395, 394, 1, 0, 0, 0, 396, 399, 1, 0, 0, 0, 397, 395, 1, 0, 0,
          0, 397, 398, 1, 0, 0, 0, 398, 400, 1, 0, 0, 0, 399, 397, 1, 0, 0, 0, 400, 401, 5, 34, 0, 0, 401,
          124, 1, 0, 0, 0, 402, 403, 5, 114, 0, 0, 403, 126, 1, 0, 0, 0, 404, 408, 3, 153, 76, 0, 405,
          408, 3, 143, 71, 0, 406, 408, 3, 131, 65, 0, 407, 404, 1, 0, 0, 0, 407, 405, 1, 0, 0, 0, 407,
          406, 1, 0, 0, 0, 408, 128, 1, 0, 0, 0, 409, 410, 5, 39, 0, 0, 410, 411, 3, 127, 63, 0, 411, 412,
          5, 39, 0, 0, 412, 130, 1, 0, 0, 0, 413, 414, 5, 92, 0, 0, 414, 455, 5, 98, 0, 0, 415, 416, 5,
          92, 0, 0, 416, 455, 5, 116, 0, 0, 417, 418, 5, 92, 0, 0, 418, 455, 5, 114, 0, 0, 419, 420, 5,
          92, 0, 0, 420, 455, 5, 110, 0, 0, 421, 422, 5, 92, 0, 0, 422, 455, 5, 102, 0, 0, 423, 424, 5,
          92, 0, 0, 424, 455, 5, 118, 0, 0, 425, 426, 5, 92, 0, 0, 426, 455, 5, 48, 0, 0, 427, 428, 5,
          92, 0, 0, 428, 429, 5, 111, 0, 0, 429, 430, 1, 0, 0, 0, 430, 431, 3, 147, 73, 0, 431, 432, 3,
          147, 73, 0, 432, 433, 3, 147, 73, 0, 433, 455, 1, 0, 0, 0, 434, 435, 5, 92, 0, 0, 435, 436,
          5, 120, 0, 0, 436, 437, 1, 0, 0, 0, 437, 438, 3, 151, 75, 0, 438, 439, 3, 151, 75, 0, 439, 455,
          1, 0, 0, 0, 440, 441, 5, 92, 0, 0, 441, 442, 5, 117, 0, 0, 442, 443, 1, 0, 0, 0, 443, 444, 3,
          151, 75, 0, 444, 445, 3, 151, 75, 0, 445, 446, 3, 151, 75, 0, 446, 447, 3, 151, 75, 0, 447,
          455, 1, 0, 0, 0, 448, 449, 5, 92, 0, 0, 449, 455, 5, 92, 0, 0, 450, 451, 5, 92, 0, 0, 451, 455,
          5, 39, 0, 0, 452, 453, 5, 92, 0, 0, 453, 455, 5, 34, 0, 0, 454, 413, 1, 0, 0, 0, 454, 415, 1,
          0, 0, 0, 454, 417, 1, 0, 0, 0, 454, 419, 1, 0, 0, 0, 454, 421, 1, 0, 0, 0, 454, 423, 1, 0, 0, 0,
          454, 425, 1, 0, 0, 0, 454, 427, 1, 0, 0, 0, 454, 434, 1, 0, 0, 0, 454, 440, 1, 0, 0, 0, 454, 448,
          1, 0, 0, 0, 454, 450, 1, 0, 0, 0, 454, 452, 1, 0, 0, 0, 455, 132, 1, 0, 0, 0, 456, 457, 3, 115,
          57, 0, 457, 458, 5, 46, 0, 0, 458, 460, 3, 139, 69, 0, 459, 461, 3, 137, 68, 0, 460, 459, 1,
          0, 0, 0, 460, 461, 1, 0, 0, 0, 461, 468, 1, 0, 0, 0, 462, 463, 5, 46, 0, 0, 463, 465, 3, 139,
          69, 0, 464, 466, 3, 137, 68, 0, 465, 464, 1, 0, 0, 0, 465, 466, 1, 0, 0, 0, 466, 468, 1, 0, 0,
          0, 467, 456, 1, 0, 0, 0, 467, 462, 1, 0, 0, 0, 468, 134, 1, 0, 0, 0, 469, 474, 3, 153, 76, 0,
          470, 473, 3, 143, 71, 0, 471, 473, 3, 153, 76, 0, 472, 470, 1, 0, 0, 0, 472, 471, 1, 0, 0, 0,
          473, 476, 1, 0, 0, 0, 474, 472, 1, 0, 0, 0, 474, 475, 1, 0, 0, 0, 475, 136, 1, 0, 0, 0, 476, 474,
          1, 0, 0, 0, 477, 479, 5, 101, 0, 0, 478, 480, 3, 141, 70, 0, 479, 478, 1, 0, 0, 0, 479, 480,
          1, 0, 0, 0, 480, 481, 1, 0, 0, 0, 481, 488, 3, 139, 69, 0, 482, 484, 5, 69, 0, 0, 483, 485, 3,
          141, 70, 0, 484, 483, 1, 0, 0, 0, 484, 485, 1, 0, 0, 0, 485, 486, 1, 0, 0, 0, 486, 488, 3, 139,
          69, 0, 487, 477, 1, 0, 0, 0, 487, 482, 1, 0, 0, 0, 488, 138, 1, 0, 0, 0, 489, 491, 3, 143, 71,
          0, 490, 489, 1, 0, 0, 0, 491, 492, 1, 0, 0, 0, 492, 490, 1, 0, 0, 0, 492, 493, 1, 0, 0, 0, 493,
          140, 1, 0, 0, 0, 494, 495, 7, 0, 0, 0, 495, 142, 1, 0, 0, 0, 496, 497, 7, 1, 0, 0, 497, 144, 1,
          0, 0, 0, 498, 499, 7, 2, 0, 0, 499, 146, 1, 0, 0, 0, 500, 501, 7, 3, 0, 0, 501, 148, 1, 0, 0, 0,
          502, 503, 7, 4, 0, 0, 503, 150, 1, 0, 0, 0, 504, 505, 7, 5, 0, 0, 505, 152, 1, 0, 0, 0, 506, 507,
          7, 6, 0, 0, 507, 154, 1, 0, 0, 0, 508, 510, 7, 7, 0, 0, 509, 508, 1, 0, 0, 0, 510, 511, 1, 0, 0,
          0, 511, 509, 1, 0, 0, 0, 511, 512, 1, 0, 0, 0, 512, 513, 1, 0, 0, 0, 513, 514, 6, 77, 0, 0, 514,
          156, 1, 0, 0, 0, 515, 516, 5, 10, 0, 0, 516, 158, 1, 0, 0, 0, 517, 519, 5, 13, 0, 0, 518, 520,
          5, 10, 0, 0, 519, 518, 1, 0, 0, 0, 519, 520, 1, 0, 0, 0, 520, 523, 1, 0, 0, 0, 521, 523, 5, 10,
          0, 0, 522, 517, 1, 0, 0, 0, 522, 521, 1, 0, 0, 0, 523, 524, 1, 0, 0, 0, 524, 525, 6, 79, 0, 0,
          525, 160, 1, 0, 0, 0, 526, 527, 5, 47, 0, 0, 527, 528, 5, 42, 0, 0, 528, 532, 1, 0, 0, 0, 529,
          531, 9, 0, 0, 0, 530, 529, 1, 0, 0, 0, 531, 534, 1, 0, 0, 0, 532, 533, 1, 0, 0, 0, 532, 530, 1,
          0, 0, 0, 533, 535, 1, 0, 0, 0, 534, 532, 1, 0, 0, 0, 535, 536, 5, 42, 0, 0, 536, 537, 5, 47, 0,
          0, 537, 538, 1, 0, 0, 0, 538, 539, 6, 80, 0, 0, 539, 162, 1, 0, 0, 0, 540, 541, 5, 47, 0, 0, 541,
          542, 5, 47, 0, 0, 542, 546, 1, 0, 0, 0, 543, 545, 8, 8, 0, 0, 544, 543, 1, 0, 0, 0, 545, 548,
          1, 0, 0, 0, 546, 544, 1, 0, 0, 0, 546, 547, 1, 0, 0, 0, 547, 549, 1, 0, 0, 0, 548, 546, 1, 0, 0,
          0, 549, 550, 6, 81, 0, 0, 550, 164, 1, 0, 0, 0, 29, 0, 322, 328, 350, 356, 360, 366, 372, 377,
          383, 388, 391, 397, 407, 454, 460, 465, 467, 472, 474, 479, 484, 487, 492, 511, 519, 522,
          532, 546, 1, 6, 0, 0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  riddlelexerLexerStaticData = staticData.release();
}

}

RiddleLexer::RiddleLexer(CharStream *input) : Lexer(input) {
  RiddleLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *riddlelexerLexerStaticData->atn, riddlelexerLexerStaticData->decisionToDFA, riddlelexerLexerStaticData->sharedContextCache);
}

RiddleLexer::~RiddleLexer() {
  delete _interpreter;
}

std::string RiddleLexer::getGrammarFileName() const {
  return "RiddleLexer.g4";
}

const std::vector<std::string>& RiddleLexer::getRuleNames() const {
  return riddlelexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& RiddleLexer::getChannelNames() const {
  return riddlelexerLexerStaticData->channelNames;
}

const std::vector<std::string>& RiddleLexer::getModeNames() const {
  return riddlelexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& RiddleLexer::getVocabulary() const {
  return riddlelexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView RiddleLexer::getSerializedATN() const {
  return riddlelexerLexerStaticData->serializedATN;
}

const atn::ATN& RiddleLexer::getATN() const {
  return *riddlelexerLexerStaticData->atn;
}




void RiddleLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  riddlelexerLexerInitialize();
#else
  ::antlr4::internal::call_once(riddlelexerLexerOnceFlag, riddlelexerLexerInitialize);
#endif
}
