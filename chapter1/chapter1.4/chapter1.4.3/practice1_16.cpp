#include <iostream>

using namespace std;

int main()
{

    int inInt = 0;
    int sum = 0;
    // while (cin >> inInt)
    // {
    //     /* code */
    //     sum += inInt;
    // }

    for (;cin >> inInt ;){
        sum += inInt;
    }
    cout << sum << endl;
    

    return 0;
}