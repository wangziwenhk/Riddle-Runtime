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
    | block
    | funcDefine
    | while
    | print
    | statment Semi statment?
    | Semi
    | expression
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

idLiteralExpression
    : Identfier
    | idExpression Dot idLiteralExpression
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
    | idLiteralExpression LeftBracket expression RightBracket #callExpression      //函数调用
    | idLiteralExpression PlusPlus     #rightPlusPlusExoression                    //后缀自增
    | idLiteralExpression MinusMinus   #rightMinusMinusExpression                  //后缀自减
    //二级优先级
    | <assoc = right> PlusPlus idLiteralExpression      #leftPlusPlusExoression     //前缀自增
    | <assoc = right> MinusMinus idLiteralExpression    #leftMinusMinusExpression   //前缀自减
    | <assoc = right> Plus      expression              #positiveExpression         //取正操作符
    | <assoc = right> Minus     expression              #negativeExpression         //取负操作符
    | <assoc = right> Not       expression              #notExpression              //逻辑非操作符
    | <assoc = right> Tilde     expression              #tildeExpression            //逐位非操作符
    | <assoc = right> And       idLiteralExpression     #quoteExpression            //引用操作符
    //三级优先级
    | expression Mod    expression #modExpression
    | expression Star   expression #starExpression
    | expression Div    expression #divExpression
    //四级优先级
    | expression Plus   expression #plusExpression
    | expression Minus  expression #minusExpression
    //五级优先级
    | expression LeftShift  expression  #leftShiftExpression
    | expression RightShift expression  #rightShiftExpression
    //六级优先级
    | expression Less   expression          #lessExpression
    | expression Greater expression         #greaterExpression
    | expression LessEqual expression       #lessEqualExpression
    | expression GreaterEqual expression    #greaterEqualExpression
    //七级优先级
    | expression Equal expression           #equalExpression
    | expression NotEqual expression        #notEqualExpression
    //八级优先级
    | expression And    expression #andExpression
    //九级优先级
    | expression Caret  expression #caretExpression
    //十级优先级
    | expression Or     expression #orExpression
    //十一级优先级
    | expression AndAnd expression  #andAndExpression
    //十二级优先级
    | expression OrOr expression    #orOrExpression
    //十三级优先级
    | <assoc = right> expression Assign expression #assignExpression
    | <assoc = right> expression PlusAssign expression #plusAssignExpression
    | <assoc = right> expression MinusAssign expression #minusAssignExpression
    | <assoc = right> expression DivAssign expression   #divAssignEpxression
    | <assoc = right> expression ModAssign expression   #modAssignExpression
    | <assoc = right> expression XorAssign expression   #xorAssignExpression
    | <assoc = right> expression AndAssign expression   #andAssignExpression
    | <assoc = right> expression OrAssign expression    #orAssignExpression
    | <assoc = right> expression LeftShiftAssign expression #leftShiftAssignExpression
    | <assoc = right> expression RightShiftAssign expression #rightShiftAssignExpression
    //十四级优先级
    | expression Comma expression   #commaExpression
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