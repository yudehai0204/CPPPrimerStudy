#include <iostream>
#include <memory>
#include <cstring>
#include <functional>
#include <vector>
#include <cmath>
#include <iterator>
#include <cassert>
using namespace std;
string make_plural(size_t ctr, const string &word, const string &ending = "s")
{
    return (ctr > 1) ? word + ending : word;
}

int main()
{
    cout << __FILE__ << endl;
    cout << __DATE__ <<endl;
    cout << make_plural(1,"success") << endl;
    cout << make_plural(2,"success","es") << endl;
    

    cout << make_plural(1,"failure") << endl;
    cout << make_plural(2,"failure") << endl;

    return 0;
}