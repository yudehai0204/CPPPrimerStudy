#include <iostream>
#include <memory>
#include <cstring>
#include <functional>
#include <vector>
#include <cmath>
#include <iterator>
using namespace std;
string ast[10] = {"a","Asdf"};

string (&testReturn())[10] 
{
    return ast;
}

using sArr = string[10];
sArr& testReturn1()
{
    return ast;
}
auto testReturn2() -> string (&)[10]
{
    return ast;
};
decltype(ast)& testReturn3()
{
    return ast;
}
int main()
{
    auto result = testReturn();
    cout << result[1] << endl;
    return 0;
}