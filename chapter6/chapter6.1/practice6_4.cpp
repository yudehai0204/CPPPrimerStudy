#include <iostream>
#include <memory>
#include <cstring>
#include <functional>
#include <vector>
#include <cmath>
#include <iterator>
using namespace std;

int fact(int num)
{
    int result = num;
    while (num > 1)
    {
        /* code */
        num--;
        result *= num;
    }
    return result;
}

int main()
{
    cout << "输入数字"<< endl;
    int num = 0;
    cin >> num;
    cout << "阶乘结果为：" << fact(num) <<endl;
    
    return 0;
}