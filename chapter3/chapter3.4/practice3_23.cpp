#include <iostream>
#include <memory>
#include <cstring>
#include <functional>
#include <vector>
#include <cmath>

using namespace std;
int main()
{

    vector<int> ivec(10);

    for(auto &v : ivec)
    {
        v = rand();
    }

    cout << "Before:" << endl;
    for(auto &v : ivec)
    {
       cout << v << endl;
       v *= 2;
    }
    cout << "After:" << endl;

    for(vector<int>::iterator it = ivec.begin(); it != ivec.end(); ++it )
    {
        cout << *it << endl;
    }

    return 0;
}