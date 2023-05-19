#include <iostream>
#include <memory>
#include <cstring>
#include <functional>
#include <vector>
#include <cmath>

using namespace std;
int main()
{

    vector<int> vectorInt;
    int a ;

    while (cin >> a)
    {
        /* code */
        vectorInt.push_back(a);
    }
    
    cout << "Vector Values :" ;
    for(auto& i : vectorInt)
    {
        cout << i << " ";
    }
    cout << endl;
    

    return 0;
}