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

    // int source1 = 0B0011;
    // int source2 = 0B1111;
    // cout << source1 << endl;
    // cout << source2 << endl;
    // cout << (source1&source2) << endl;
    // cout << (source1|source2) << endl;
    // uint8_t source3 = 0B01110000;
    // int8_t source4 = 0b11111111;
    // cout << ((int)source4)<< endl;
    // cout << ((int)~source3) << endl;
    unsigned long quiz1 = 0;
    quiz1 |= 1UL << 26;
    quiz1 |= 1UL << 20;
    cout << (quiz1 & (1UL << 26)) << endl; 
    cout << (quiz1 & (1UL << 25)) << endl; 
    cout << (quiz1 & (1UL << 20)) << endl; 
    return 0;
}