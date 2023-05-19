#include <iostream>
#include <memory>
#include <cstring>
#include <functional>
#include <vector>
#include <cmath>

using namespace std;
int main()
{
    // vector<int> ivec(10,0);
    vector<int> ivec{0,20,30};
    ivec[0] = 42;
    cout << ivec[0] << endl;
    return 0;
}