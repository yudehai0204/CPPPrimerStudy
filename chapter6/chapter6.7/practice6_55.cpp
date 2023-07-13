#include <iostream>
#include <vector>

using namespace std;

int func1(int a,int b)
{
    return a + b;
}

int func2(int a,int b)
{
    return a - b;
}
int func3(int a,int b)
{
    return a * b;
}
int func4(int a,int b)
{
    return a / b;
}

int main()
{

    vector<int(*)(int,int)> VpFunc;
    VpFunc.push_back(func1);
    VpFunc.push_back(func2);
    VpFunc.push_back(func3);
    VpFunc.push_back(func4);
        for (size_t i = 0; i < VpFunc.size(); i++)
        {
            /* code */
           cout <<  VpFunc[i](10,2) << endl;
        }
        
    

}