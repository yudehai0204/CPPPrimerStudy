#include <iostream>
#include <memory>
#include <cstring>
#include <functional>
#include <vector>
#include <cmath>
#include <iterator>
using namespace std;


int sumInit(initializer_list<int> intlist)
{
    int sum = 0;
    for (const int *i = intlist.begin(); i != intlist.end(); i++)
    {
        /* code */
        sum += *i;
    }
    return sum;
    
} 
int main()
{
    initializer_list<int> initLst = {0,1,2,3,6};
    
    int a = sumInit(initLst);
    cout << a << endl;
    return 0;
}