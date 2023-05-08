#include <iostream>
#include <memory>
#include <cstring>
#include <functional>
#include <vector>
#include <cmath>

using namespace std;
int main()
{
    const int i = 42;
    auto j = i;// int
    const auto &k = i; //const int &;
    auto *p = &i;  //const int *
    const auto j2 = i, &k2 = i;// j2 const int   k2 const int&
    cout << *p << endl;
    return 0;
}