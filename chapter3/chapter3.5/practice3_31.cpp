#include <iostream>
#include <memory>
#include <cstring>
#include <functional>
#include <cmath>
#include <iterator>
using namespace std;
int main()
{
    const int count = 10;

    int ia[count] ={0};
    for (int i = 0 ; i < count ; i++)
    {
        ia[i] = i;
    }
    for(int i : ia)
    {
        cout << i << "  ";
    
    }
    cout << endl;
    int* begin2 = begin(ia);
    cout << "count " << (end(ia)- begin(ia)) << endl;

    return 0;
}