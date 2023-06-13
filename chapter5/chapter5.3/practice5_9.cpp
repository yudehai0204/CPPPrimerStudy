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
    char rec;
    int vowelCnt = 0;
    while (cin >> rec)
    {
        /* code */
        if(rec == 'a' || rec == 'e' || rec == 'i' || rec == 'o' || rec == 'u' ){
            vowelCnt++;
        }

    }

    cout << "元音个数: " << vowelCnt << endl;
    


    return 0;
}