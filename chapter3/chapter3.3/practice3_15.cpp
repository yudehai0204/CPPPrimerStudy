#include <iostream>
#include <memory>
#include <cstring>
#include <functional>
#include <vector>
#include <cmath>

using namespace std;
int main()
{

    vector<string> vectorStrs;
    string a ;

    while (cin >> a)
    {
        if(a == "end")
        {
            break;
        }
        /* code */
        vectorStrs.push_back(a);
    }
    
    cout << "Vector Values :" ;
    for(auto& i : vectorStrs)
    {
        cout << i << " ";
    }
    cout << endl;
    

    return 0;
}