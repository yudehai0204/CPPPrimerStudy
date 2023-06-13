#include <iostream>
#include <memory>
#include <cstring>
#include <functional>
#include <vector>
#include <cmath>
#include <iterator>
using namespace std;
int main()
{
    
    do
    {
        string str1,str2;
     cout << "请输入两个字符串" << endl;
        if(!(cin >>  str1 >> str2)){
            break;
        }
     if(str1.length() < str2.length())
     {
        cout << "较短的为" << str1 << endl;
     }else
     {
        cout << "较短的为" << str2 << endl;
     }
    }while(true);


    return 0;
}