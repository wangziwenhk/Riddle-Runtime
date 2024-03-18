parser grammar RiddleParser;
options {
    tokenVocab = RiddleLexer;
}
program
    : newline_statment* statment? EOF
    ;

newline_statment
    : statment NewLine
    | NewLine
    ;

statment
    : variableDefine
    | expression
    | block
    | funcDefine
    | while
    | print
    | statment Semi statment?
    | Semi
    ;

//内置的外部输出控制，临时测试用
print
    : Print LeftParen expression RightParen
    ;

//既是表达式也是语句
primaryExpression
    : literal
    | idExpression
    | LeftParen expression RightParen
    | ifExpression
    ;


variableDefine
    : (Var | Val) (Identfier(Assign expression)?) (Comma (Identfier(Assign expression)?))*
    ;

ifExpression
    : If LeftParen expression RightParen statment
      (Else statment)?
    ;

while
    : While LeftParen expression RightParen statment
    ;

//todo 完成funcDefine的传参处理
funcDefine
    : Fun Identfier LeftParen (Identfier Colon typeLiteral)* RightParen funcBody
    ;

//这里funcBody还需要额外处理return
funcBody
    : LeftBrace statment* RightBrace
    ;

block
    : LeftBrace statment* RightBrace
    ;

//表达式
expression
    : assignExpression
    ;

//赋值表达式
assignExpression
    : equalExpression
    | Identfier Assign assignExpression
    ;

//等于表达式
equalExpression
    : notEqualExpression
    | <assoc = right> equalExpression Equal equalExpression
    ;

//不等于表达式
notEqualExpression
    : greaterExpression
    | <assoc = right> notEqualExpression NotEqual notEqualExpression
    ;

//大于表达式
greaterExpression
    : lessExpression
    | <assoc = right> greaterExpression Greater greaterExpression
    ;

//小于表达式
lessExpression
    : lessAssignExpression
    | <assoc = right> lessExpression Less lessExpression
    ;

//小于等于表达式
lessAssignExpression
    : greaterAssignExpression
    | <assoc = right> lessAssignExpression LessEqual lessAssignExpression
    ;

//大于等于表达式
greaterAssignExpression
    : plusAssignExpression
    | <assoc = right> greaterAssignExpression GreaterEqual greaterAssignExpression
    ;

//加等于表达式
plusAssignExpression
    : minusAssignExpression
    | <assoc = right> plusAssignExpression PlusAssign plusAssignExpression
    ;

//减等于表达式
minusAssignExpression
    : starAssignExpression
    | <assoc = right> minusAssignExpression MinusAssign minusAssignExpression
    ;

//乘等于表达式
starAssignExpression
    : divAssignExpression
    | <assoc = right> starAssignExpression StarAssign starAssignExpression
    ;

//除等于表达式
divAssignExpression
    : modAssignExpression
    | <assoc = right> divAssignExpression DivAssign divAssignExpression
    ;

//模等于表达式
modAssignExpression
    : xorAssignExpression
    | <assoc = right> modAssignExpression ModAssign modAssignExpression
    ;

//异或等于表达式
xorAssignExpression
    : andAssignExpression
    | <assoc = right> xorAssignExpression XorAssign xorAssignExpression
    ;

andAssignExpression
    : orAssignExpression
    | <assoc = right> andAssignExpression AndAssign andAssignExpression
    ;

orAssignExpression
    : leftShiftAssignExpression
    | <assoc = right> orAssignExpression OrAssign orAssignExpression
    ;

leftShiftAssignExpression
    : rightShiftAssignExpression
    | <assoc = right> leftShiftAssignExpression LeftShiftAssign leftShiftAssignExpression
    ;

rightShiftAssignExpression
    : andAndExpression
    | <assoc = right> rightShiftAssignExpression RightShiftAssign rightShiftAssignExpression
    ;

andAndExpression
    : primaryExpression
    | <assoc = right> andAndExpression AndAnd andAndExpression
    ;

idExpression
    : Identfier
    ;

typeLiteral
    : basicType
    ;

basicType
    : Int
    | Char
    | Float
    | Boolen
    | String
    ;



//字面量
literal
    : intLiteral
    | strLiteral
    | charLiteral
    | floatLiteral
    | boolenLiteral
    ;

strLiteral
    : StringLiteral
    ;

charLiteral
    : CharLiteral
    ;

//整数字面量
intLiteral
    : IntegerLiteral
    ;

floatLiteral
    : FloatLiteral
    ;

boolenLiteral
    : True
    | False
    ;