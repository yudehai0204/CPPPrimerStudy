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
    int i = 10;
    double d = 3.14;

    //i *= d;
    i *= static_cast<int>(d);
    cout << i << endl;

    return 0;
}