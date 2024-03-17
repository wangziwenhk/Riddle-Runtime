lexer grammar RiddleLexer;

//关键字
Var : 'var' ;
Val : 'val' ;
Fun : 'fun' ;
If : 'if' ;
Else : 'else' ;
False : 'false' ;
True : 'true' ;
While : 'while' ;
Print : 'print' ;
Int : 'int' ;
Float : 'float' ;
Char : 'char' ;
Boolen : 'bool' ;
String : 'string' ;

//符号
LeftParen: '(';
RightParen: ')';
LeftBracket: '[';
RightBracket: ']';
LeftBrace: '{';
RightBrace: '}';
Plus: '+';
Minus: '-';
Star: '*';
Div: '/';
Mod: '%';
Caret: '^';
And: '&';
Or: '|';
Tilde: '~';
Not: '!' | 'not';
Assign: '=';
Less: '<';
Greater: '>';
PlusAssign: '+=';
MinusAssign: '-=';
StarAssign: '*=';
DivAssign: '/=';
ModAssign: '%=';
XorAssign: '^=';
AndAssign: '&=';
OrAssign: '|=';
LeftShiftAssign: '<<=';
RightShiftAssign: '>>=';
Equal: '==';
NotEqual: '!=';
LessEqual: '<=';
GreaterEqual: '>=';
AndAnd: '&&' | 'and';
OrOr: '||' | 'or';
PlusPlus: '++';
MinusMinus: '--';
Comma: ',';
Question: '?';
Colon: ':';
Semi: ';';
Dot: '.';

IntegerLiteral
    : DecimalSequence
    | OctalSequence
    | HexadecimalSequence
    | BinarySequence
    ;

//十进制序列
DecimalSequence
    : NOZERODIGIT DIGIT*
    | '0'
    ;

//八进制序列
OctalSequence
    : '0' OCTALDIGIT+
    ;

//二进制序列
BinarySequence
    : ('0b' | '0B') BINARYDIGIT+
    ;

//十六进制序列
HexadecimalSequence
    : ('0x' | '0X') HEXADECIMALDIGIT+
    ;

//字符串字面量
StringLiteral
    : StringPrefix? '"' Cchar* '"'
    ;

//字符串前缀
StringPrefix
    : 'r'
    ;

//字符
fragment Cchar
    : NODIGIT
    | DIGIT
    | EscapeCharacter
    ;

//字符串字面量
CharLiteral
    : '\'' Cchar '\''
    ;

//转义序列
EscapeCharacter
    : '\\b'
    | '\\t'
    | '\\r'
    | '\\n'
    | '\\f'
    | '\\v'
    | '\\0'
    | '\\o'  OCTALDIGIT OCTALDIGIT OCTALDIGIT
    | '\\x' HEXADECIMALDIGIT HEXADECIMALDIGIT
    | '\\u' HEXADECIMALDIGIT HEXADECIMALDIGIT HEXADECIMALDIGIT HEXADECIMALDIGIT
    | '\\\\'
    | '\\\''
    | '\\"'
    ;

//浮点数字面量
FloatLiteral
    : DecimalSequence '.' DigitSequence Exponentpart?
    | '.' DigitSequence Exponentpart?
    ;

Identfier
    : NODIGIT+
    ;


//科学计数法后缀
fragment Exponentpart: 'e' SIGN? DigitSequence | 'E' SIGN? DigitSequence;

fragment DigitSequence
    : DIGIT+
    ;

//正负
fragment SIGN : [+-] ;
//数字
fragment DIGIT : [0-9] ;
//非0数字
fragment NOZERODIGIT : [1-9];
//八进制数字
fragment OCTALDIGIT : [0-7];
//二进制数字
fragment BINARYDIGIT : [0-1];
//十六进制数字
fragment HEXADECIMALDIGIT : [0-9A-Fa-f] ;
//不是数字的
fragment NODIGIT : [\u4e00-\u9fa5a-zA-Z_];
// 空白字符，忽略
Whitespace: [ \t]+ -> skip;

NewLine: '\n' ;
// 换行符，忽略
Newline: ('\r' '\n'? | '\n') -> skip;


// 块注释，忽略
BlockComment: '/*' .*? '*/' -> skip;

// 行注释，忽略
LineComment: '//' ~ [\r\n]* -> skip;