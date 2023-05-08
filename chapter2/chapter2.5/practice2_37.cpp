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
    decltype(a) c = a; // int  3 
    decltype(a = b) d = a; // int& d = 3;
    a = 10;
    cout << d << endl;
    cout << typeid(c).name() << endl;
    cout << typeid(d).name() << endl;
   
    
    return 0;
}