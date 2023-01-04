#include <iostream>

using namespace std;

int main()
{

    int sum = 0;
    for (int  i = 50; i <= 100; i++)
    {
        /* code */
        sum += i;
    }
    cout << "50 - 100 sum = " << sum << endl;
    
    for (int i = 10 ; i >= 0 ; i-- )
    {
        cout << i << endl;
    }
    

    return 0;
}