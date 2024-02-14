parser grammar RiddleParser;
options {
    tokenVocab = RiddleLexer;
}
//程序开始的点
program
    : statment*
    ;
//语句
statment
    : funcDefintion
    | oneValDeclaration Semi
    | valDefintion Semi
    | assignmentExpression Semi
    ;


//主要表达式
primaryExpression
    : literal
    | idExpression
    | assignmentExpression
    | funcExpression
    ;

//标识符表达式
idExpression
    : Identifier //当前作用域中的对象
    | (Identifier Dot)+ Identifier //某个对象中的对象
    ;

identifierSet
    : Identifier //当前作用域中的对象
    | (Identifier Dot)+ Identifier //某个对象中的对象
    ;


//函数定义
funcDefintion
    : theTypeName Identifier LeftParen ((oneValDeclaration (Comma oneValDeclaration)* (Comma oneValDefintion)*) | (oneValDefintion (Comma oneValDefintion)*))? RightParen funcBody
    ;

//函数调用
funcExpression
    : Identifier LeftParen (primaryExpression(Comma primaryExpression)*)? RightParen
    ;

//函数的代码部分
funcBody
    : LeftBrace statment* RightBrace
    ;

//单个变量声明
oneValDeclaration
    : theTypeName Identifier
    ;

//单个变量定义
oneValDefintion
    : theTypeName Identifier Assign primaryExpression
    ;

//变量定义或声明
valDefintion
    : theTypeName ((Identifier Assign primaryExpression)|Identifier) (Comma ((Identifier Assign primaryExpression)|Identifier))*
    ;



//赋值表达式
assignmentExpression
    : identifierSet Assign primaryExpression
    ;

//类型名称
theTypeName
    : className
    | typeSpecifier
    ;

//类型说明符
typeSpecifier
    : Char
    | String
    | Int
    | Float
    | Void
    | Any
    ;

//类名
className
    : Identifier
    ;



//操作符大全
theOperator
    : New (LeftParen RightParen)?
    | Delete (LeftParen RightParen)?
    | Plus
    | Minus
    | Star
    | Div
    | Mod
    | Caret
    | And
    | Or
    | Tilde
    | Not
    | Assign
    | Less
    | Greater
    | PlusAssign
    | MinusAssign
    | StarAssign
    | DivAssign
    | ModAssign
    | XorAssign
    | AndAssign
    | OrAssign
    | LeftShiftAssign
    | RightShiftAssign
    | Equal
    | NotEqual
    | LessEqual
    | GreaterEqual
    | AndAnd
    | OrOr
    | PlusPlus
    | MinusMinus
    | Comma
    | Arrow
    | LeftParen RightParen
    | LeftBracket RightBracket
    ;
//字面量
literal
    : boolLiteral
    | intLiteral
    | charLiteral
    | floatLiteral
    | strLiteral
    ;

intLiteral
    : IntegerLiteral
    ;

charLiteral
    : CharacterLiteral
    ;

floatLiteral
    : FloatingLiteral
    ;

strLiteral
    : StringLiteral
    ;

boolLiteral
    : True_ | False_
    ;