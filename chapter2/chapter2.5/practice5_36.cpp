#include <iostream>
#include <memory>
#include <cstring>
#include <functional>
#include <vector>
#include <cmath>

using namespace std;
int main()
{

    int a =3, b = 4;
    decltype(a) c = a; //int 
    decltype((b)) d = a;//int& 
    ++c ; // c= 4, a = 3
    ++d;// d = a = 4;
    cout << b << endl;
    cout << a << endl;
    return 0;
}