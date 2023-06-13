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

    string word;
    string lastword;
    int repeatCount = 1;
    int maxCount = 1;
    while (cin >> word)
    {
        if(word == lastword)
        {
            repeatCount++;
            if(repeatCount > maxCount)
            {
                maxCount = repeatCount;
            }
        }
        else
        {
            repeatCount = 1;
        }
        lastword = word;
        /* code */
    }
    cout << "Max Repeat Count " << maxCount << endl;
    return 0;
}