#include <iostream>

using namespace std;



int main()
{
    int v1 = 50;
    int sum = 0;
    while (v1 <= 100)
    {
        /* code */

        sum += v1;
        cout << v1 << endl;

        v1++;
    };
    
    cout << "50-100 sum = " << sum << endl;
    return 0;
}