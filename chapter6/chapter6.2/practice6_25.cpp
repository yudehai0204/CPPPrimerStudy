#include <iostream>
#include <memory>
#include <cstring>
#include <functional>
#include <vector>
#include <cmath>
#include <iterator>
using namespace std;
int main(int argc, char *argv[] )
{

    for (size_t i = 0; i < argc; i++)
    {
        cout << "print Args" << endl;
        cout << argv[i] << endl;
        /* code */
    }
    
    cout << "输入任意字母退出" << endl;
    char a ;
    cin >>a ;
    
    return 0;
}