#include <iostream>
#include <vector>

using namespace std;


int funcTest(int a, int b)
{
    return a + b;
}

int main()
{
    vector<int(*)(int ,int )> vFunc;
    decltype(funcTest) * a = funcTest;
    vFunc.push_back(a);
    cout << vFunc[0](110,20) << endl;
    return 0;
}