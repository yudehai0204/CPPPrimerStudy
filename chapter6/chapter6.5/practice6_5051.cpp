#include <iostream>

using namespace std;

void f()
{
    cout << "empty func" << endl;
}

void f(int a) 
{
    cout << "int param func" << endl;
}

void f(int a ,int b)
{
    cout << "int,int param func" << endl;
}

void f(double d, double e)
{
    cout << "double,double param func" << endl;
}

int main()
{
    //f(2.56,42);
    f(42);
    f(42,0);
    f(2.56,3.14);
    return 0;
}