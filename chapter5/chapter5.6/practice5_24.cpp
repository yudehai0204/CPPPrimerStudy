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
    int a = 0,b = 0;
    // if(b == 0)
    // {
    //     throw runtime_error(" b  ==  0");
    // }

    while (true)
    {
        /* code */
    try
    {
        cout <<" please input two number" << endl;
        cin >> a >> b;
        if(b == 0)
        {
            throw runtime_error(" b  ==  0");
        }
        /* code */
        cout << a/b << endl;
    }
    catch(const std::exception& e)
    {
        // std::cerr << e.what() << '\n';
        cout << " retry please input y" << endl;
        char a ;
        cin >> a ;
        if(a != 'y')
        {
            break;
        }
    }


    }
    
    
    return 0;
}