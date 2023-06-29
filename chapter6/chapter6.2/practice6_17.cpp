#include <iostream>
#include <memory>
#include <cstring>
#include <functional>
#include <vector>
#include <cmath>
#include <iterator>
using namespace std;
bool hasUpper(const string& str)
{
    for(const char &c : str)
    {
        if(isupper(c))
        {
            return true;
        }
    }
    return false;
}
void toLower(string& str)
{
    for(char& c : str)
    {
        c = tolower(c);
    }
}
int main()
{
    cout << "Hello  has Upper = " << hasUpper("Hello") << endl;
    string str = "ASDFFee";

    cout <<str << "to lower: " ;
    toLower(str);
    cout << str << endl;
    return 0;
}