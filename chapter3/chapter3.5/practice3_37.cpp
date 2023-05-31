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
    //预测 输出h \n e \n l \n l \n o \n  \n
    const char ca[] = {'h','e','l','l','o','\0'} ;// 6个 最后有个空格
    cout << strlen(ca) << endl;
    const char *cp = ca;//指向ca[0]
    while (*cp) //合法
    {
        cout << *cp << endl;
        cp++;
    }
    
    return 0;
}