#include <iostream>
#include <memory>
#include <cstring>
#include <functional>
#include <vector>
#include <cmath>
#include <iterator>
using namespace std;
int main()
{

    int* ptr ;

    vector<int> vec;

    int ival;

    int result1 = ptr != 0 && *ptr++; //ptr 不指向空 且ptr的下一位置也不指向空

    int result2 = ival++ && ival; //ival 的值  跟ival+1的值
    int result3 = vec[ival++] <= vec[ival]; //vec  ival索引的值 跟ival+1的索引值作比较
    

    return 0;
}