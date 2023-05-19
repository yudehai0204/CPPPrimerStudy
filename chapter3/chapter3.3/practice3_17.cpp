#include <iostream>
#include <memory>
#include <cstring>
#include <functional>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;
int main()
{
    vector<string> vectorStrs;
    string strTemp;
    while (cin >> strTemp)
    {
        /* code */
        transform(strTemp.begin(),strTemp.end(),strTemp.begin(),::toupper);
        vectorStrs.push_back(strTemp);
    }

    cout << "输入内容: "<< endl;
    for(auto &str : vectorStrs)
    {
        cout << str <<endl;
    }
    

    return 0;
}