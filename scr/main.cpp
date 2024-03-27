#include "RiddleParser.h"
#include "RiddleLexer.h"
#include "visitor/visitor.h"
#include "visitor/toAstVisitor.h"
using namespace std;
int main(){
    //设置控制台编码
    system("chcp 65001");
    ifstream stream("../test/example.txt");
    antlr4::ANTLRInputStream input(stream);
    //创建词法分析器
    RiddleLexer lexer(&input);
    antlr4::CommonTokenStream tokens(&lexer);
    // 创建语法分析器
    RiddleParser parser(&tokens);
    // 开始解析，获取语法树的根节点
    RiddleParser::ProgramContext* tree = parser.program();

    toAstVisitor visitor;
    visitor.visit(tree);
    cout << tree->toStringTree(true);

//    Visitor myVisitor;
//    myVisitor.visit(tree);
    return 0;
}
