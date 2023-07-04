#include <iostream>
#include <memory>
#include <cstring>
#include <functional>
#include <vector>
#include <cmath>
#include <iterator>
using namespace std;

bool str_subrange(const string& str1,const string& str2)
{
    if(str1.size() == str2.size())
    {
        return str1 == str2;
    }
    int size = (str1.size() < str2.size()) ? str1.size() : str2.size();
    for(decltype(size) i = 0 ; i != size ; i++)
    {
        if(str1[i] != str2[i])
        {
            return false;
        }
    }
    return true;
}
int main()
{


    return 0;
}

//返回的引用是函数开始前就存在的有效，函数内存在的无效。
//不希望返回的引用被修改返回常量