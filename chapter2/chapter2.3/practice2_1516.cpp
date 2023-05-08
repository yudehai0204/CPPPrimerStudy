#include <iostream>
#include <memory>
#include <cstring>
#include <functional>
#include <vector>
#include <cmath>

using namespace std;


int main()
{
   //int ival = 1.01 ; // 合法
   //int &rvall = 1.01;//不合法， 右边必输是对象；
    //int &rval2 = ival ;//合法
    //int &rval3;//不合法 必须被初始化
    int i=0 , &r1 = i;
    double d = 0, &r2 = d;
    r2 = 3.1415;
    cout << r2 << endl;
    cout << d << endl;
    r2 = r1;
    cout << r2 << endl;
    cout << d << endl;
    i = r2;
    cout << r1 << endl;
    cout << i << endl;
    d = 2.8;

    r1 = d;
    
    cout << r1 << endl;
    cout << i << endl;
}