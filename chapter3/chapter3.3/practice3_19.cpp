#include <iostream>
#include <memory>
#include <cstring>
#include <functional>
#include <vector>
#include <cmath>

using namespace std;
int main()
{
    vector<int> ivec(10,42);//最优


    vector<int> ivec1(10);

    for(int i = 0; i< 10 ; i++)
    {
        ivec1[i] = 42;
    }

    vector<int> ivec2{42,42,42,42,42,42,42,42,42,42};
    return 0;
}