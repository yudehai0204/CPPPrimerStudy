#include <iostream>
#include <memory>
#include <cstring>
#include <functional>
#include <vector>
#include <cmath>
#include <iterator>
using namespace std;
class Temp
{
private:
    int a ;
    int b ;
    /* data */
public:
    Temp(/* args */);
    ~Temp();
};

Temp::Temp(/* args */)
{
}

Temp::~Temp()
{
}

int main()
{
    Temp a , *p;
    cout << sizeof(a) << endl;

    cout << sizeof(*p) << endl;

    return 0;
}