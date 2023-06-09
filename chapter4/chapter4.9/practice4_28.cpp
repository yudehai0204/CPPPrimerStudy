#include <iostream>
#include <memory>
#include <cstring>
#include <functional>
#include <vector>
#include <cmath>
#include <iterator>
using namespace std;

template<typename T>
void printSize(T a)
{
    cout << sizeof(a) << endl;
}


int main()
{
    char a ;
    printSize(a);
    uint8_t b;
    printSize(b);
    unsigned char c;
    printSize(c);
    short d;
    printSize(d);
    unsigned short e;
    printSize(e);
    size_t f;
    printSize(f);
    return 0;
}