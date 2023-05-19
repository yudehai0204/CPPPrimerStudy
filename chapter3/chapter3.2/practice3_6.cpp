#include <iostream>
#include <memory>
#include <cstring>
#include <functional>
#include <vector>
#include <cmath>

using namespace std;
int main()
{

    string content = "Asdfdsaf122sdf";
    string out;
    for(char a : content)
    {
        if(isalpha(a))
        {
            out += "X";
        }
        else
        {
            out += a;
        }
    }
    cout << out << endl;
    return 0;
}