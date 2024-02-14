lexer grammar RiddleLexer;
//关键字
Import_: 'import' ;
True_: 'true';
False_: 'false' ;
For: 'for' ;
While: 'while' ;
Break: 'break' ;
Continue: 'continue' ;
Class: 'class';
Const: 'const';
If : 'if' ;
Elif : 'elif' ;
Else : 'else' ;
Try: 'try';
Export : 'export';
Throw : 'throw' ;
New : 'new' ;
Private: 'private';
Protected: 'protected';
Public: 'public';
Return: 'return';
Static: 'static';
This: 'this';
Delete : 'delete';
Int : 'int' ;
String : 'string' ;
Float : 'float' ;
Char : 'char' ;
Void : 'void' ;
Null : 'NULL' ;
Any : 'any' ;
Bool : 'bool' ;

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
Arrow: '->';
Question: '?';
Colon: ':';
Semi: ';';
Dot: '.';



//整数字面量
IntegerLiteral
    : DecimalLiteral
    | OctalLiteral
    | HexadecimalLiteral
    | BinaryLiteral
    ;
//浮点数字面量
FloatingLiteral
    : Fractionalconstant Exponentpart?
    | Digitsequence Exponentpart
    ;
StringLiteral:  (Rawstring | '"' Schar* '"');
//字符字面量
CharacterLiteral: '\'' Cchar + '\'';
// 字符
fragment Cchar: ~ ['\\\r\n] | Escapesequence | Universalcharactername;
// 十六进制四位数
fragment Hexquad: HEXADECIMALDIGIT HEXADECIMALDIGIT HEXADECIMALDIGIT HEXADECIMALDIGIT;
//通用字符名(unicode)
fragment Universalcharactername: '\\u' Hexquad | '\\U' Hexquad Hexquad;
// 标识符
Identifier:
    Identifiernondigit (Identifiernondigit | DIGIT)*
;
// 不同进制数字字面量
DecimalLiteral: NONZERODIGIT (DIGIT)*;
OctalLiteral: '0' (OCTALDIGIT)*;
HexadecimalLiteral: ('0x' | '0X') HEXADECIMALDIGIT (HEXADECIMALDIGIT)*;
BinaryLiteral: ('0b' | '0B') BINARYDIGIT (BINARYDIGIT)*;
//单个数字字符
fragment DIGIT: [0-9];
fragment NONDIGIT: [a-zA-Z_];
fragment NONZERODIGIT: [1-9];
fragment OCTALDIGIT: [0-7];
fragment HEXADECIMALDIGIT: [0-9a-fA-F];
fragment BINARYDIGIT: [01];
//非数字标识符
fragment Identifiernondigit: NONDIGIT | Universalcharactername;
// 转义序列
fragment Escapesequence: Simpleescapesequence | Octalescapesequence | Hexadecimalescapesequence;
fragment Simpleescapesequence: //简单转义序列
    '\\\''
    | '\\"'
    | '\\\\'
    | '\\a'
    | '\\b'
    | '\\f'
    | '\\n'
    | '\\r'
    | '\\t'
    | '\\v'
    ;
fragment Octalescapesequence://八进制转义序列
    '\\' OCTALDIGIT
    | '\\' OCTALDIGIT OCTALDIGIT
    | '\\' OCTALDIGIT OCTALDIGIT OCTALDIGIT
;
//十六进制转义序列
fragment Hexadecimalescapesequence: '\\x' HEXADECIMALDIGIT+;
//浮点数字面量
fragment Fractionalconstant: Digitsequence? '.' Digitsequence | Digitsequence '.';
//数字序列
//例如123'1 = 1231
fragment Digitsequence: DIGIT (DIGIT)*;
//科学计数法后缀
fragment Exponentpart: 'e' SIGN? Digitsequence | 'E' SIGN? Digitsequence;
//正负
fragment SIGN: [+-];
//字符串字面量中的字符
fragment Schar: ~ ["\\\r\n] | Escapesequence | Universalcharactername;
//原始字符串字面量(就是不用加转义字符)
fragment Rawstring: ('R' | 'r') '"' ( '\\' ["()] | ~[\r\n (])*? '(' ~[)]*? ')' ( '\\' ["()] | ~[\r\n "])*? '"';
// 空白字符，忽略
Whitespace: [ \t]+ -> skip;

// 换行符，忽略
Newline: ('\r' '\n'? | '\n') -> skip;

// 块注释，忽略
BlockComment: '/*' .*? '*/' -> skip;

// 行注释，忽略
LineComment: '//' ~ [\r\n]* -> skip;