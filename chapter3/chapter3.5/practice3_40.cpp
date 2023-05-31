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
    const char *c1 = "Hello ";
    const char *c2 = "World";
    char c3[13]  ;
    strcpy(c3,c1);
    cout << c3 << endl;

    strcat(c3,c2);
    cout << c3 << endl;

    return 0;
}