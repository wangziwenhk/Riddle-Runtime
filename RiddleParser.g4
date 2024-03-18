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

idExpression
    : Identfier
    | idExpression Dot idExpression
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
    : primaryExpression #t_primaryExpression  //这个就是一个占位符，不需要实现
    //一级优先级
    | idExpression LeftBracket expression RightBracket #bracketExpression
    | idExpression PlusPlus #rightPlusPlusExoression
    | idExpression MinusMinus #rightMinusMinusExpression
    //二级优先级
    | expression Not    expression #notExpression
    | expression Tilde  expression #tildeExpression
    | PlusPlus idExpression #leftPlusPlusExoression
    | MinusMinus idExpression #leftMinusMinusExpression
    | Plus expression #positiveExpression //取正操作符
    | Minus expression #negativeExpression //取负操作符
    | And idExpression #addressExpression //取地址操作符

    //temp
    | expression Plus   expression #plusExpression
    | expression Minus  expression #minusExpression
    | expression Star   expression #starExpression
    | expression Div    expression #divExpression
    | expression Mod    expression #modExpression
    | expression Caret  expression #caretExpression
    | expression And    expression #andExpression
    | expression Or     expression #orExpression
    | expression Assign expression #assignExpression
    | expression Less   expression #lessExpression
    | expression Greater expression #greaterExpression
    | expression PlusAssign expression #plusAssignExpression
    | expression MinusAssign expression #minusAssignExpression
    | expression DivAssign expression #divAssignEpxression
    | expression ModAssign expression #modAssignExpression
    | expression XorAssign expression #xorAssignExpression
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