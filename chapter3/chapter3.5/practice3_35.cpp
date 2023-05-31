#include <iostream>
#include <memory>
#include <cstring>
#include <functional>
#include <vector>
#include <cmath>
#include <iterator>
using namespace std;
int randMax100()
{
    return rand()/100;
};

void outputIntArray(int ia[8] )
{
    cout << "当前数组元素: ";
    for(int i = 0 ; i < 8; i++){
        cout << ia[i] << " ";
    }
    cout << endl;
};
int main()
{
    int count = 8;
    int ia[count] = {randMax100(),randMax100(),randMax100(),randMax100(),randMax100(),randMax100(),randMax100(),randMax100()};
    outputIntArray(ia);
    cout << "请输入要置为0的索引" <<endl;
    int index = 0;
    while (cin >> index)
    {
        ia[index] = 0;
        outputIntArray(ia);
    }
    

    return 0;
}