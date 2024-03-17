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
    : lessEqualExpression
    | <assoc = right> lessExpression Less lessExpression
    ;

//小于等于表达式
lessEqualExpression
    : primaryExpression
    | <assoc = right> lessEqualExpression LessEqual lessEqualExpression
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