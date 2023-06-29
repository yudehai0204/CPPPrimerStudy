#include <iostream>
#include <memory>
#include <cstring>
#include <functional>
#include <vector>
#include <cmath>
#include <iterator>
using namespace std;

void reset(int *ip)
{
    cout << &ip << endl;
    *ip = 10;
    int t = 20;
    ip = &t;
    cout << &ip << endl;
}
void trans(int *a , int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int test = 30;
    int* ip = &test;
    cout << &ip << endl;
    reset(ip);
    
    cout << test << " " << *ip << endl;
    cout << &ip << endl;

    int a = 10; int b = 20;
    cout << a << "   " << b <<endl;
    trans(&a,&b);
    
    cout << a << "   " << b <<endl;
    return 0;
}