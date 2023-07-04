#include <iostream>
#include <memory>
#include <cstring>
#include <functional>
#include <vector>
#include <cmath>
#include <iterator>
using namespace std;

int getMax(int* a, int b)
{
    return max(*a,b);
}

int main()
{
    int i1 = 10;
    int i2 = 20;
    int *p = &i1;
    cout << "Max" << getMax(p,i2) << endl;
    return 0;
}