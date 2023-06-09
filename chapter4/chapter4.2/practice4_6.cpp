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
    int inputNum = 0;
    while (cin >> inputNum)
    {
        /* code */
        if(inputNum %2 == 0){
            cout <<"偶" << endl;
        }else
        {

            cout <<"奇" << endl;
        }
    }
    

    return 0;
}