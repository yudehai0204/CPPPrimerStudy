#include <iostream>
#include <memory>
#include <cstring>
#include <functional>
#include <vector>
#include <cmath>
#include <iterator>
#include "chapter6.h"
using namespace std;

void test(int input)//传什么是什么
{
    static int s_Input = 0;//一直存在于内存器中
    int localInput = 0;
    s_Input += 2;
    localInput+=2;//一直是2 跑完就释放
    cout << "input = " << input << ";localinput = "<< localInput << "; sInput = " << s_Input << endl;
}

int main()
{
    for (int i = 0; i <= 10; i++)
    {
        /* code */
        test(i);
    }
    
    cout << testH << endl;
    return 0;
}