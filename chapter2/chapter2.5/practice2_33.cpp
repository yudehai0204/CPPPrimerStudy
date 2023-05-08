#include <iostream>
#include <memory>
#include <cstring>
#include <functional>
#include <vector>
#include <cmath>

using namespace std;
int main()
{

    int i = 0, &r = i;
    const int ci = i,&cr = ci;
    auto a = r; // int
    auto b = ci; // int 
    auto c = cr; // int
    auto d = &i; // int*
    auto e = &ci;  // const int *
    const auto f = ci; // const int 
    auto &g = ci; // const int&

    a = 42;// 合法
    b = 42 ;
    c =42;
    //d = 42;//d是指针类型 不能指向右值
    //e = 42 ;//同上
    //g = 42 ; // g是const int& 

    return 0;
}