#include <iostream>
#include <memory>
#include <cstring>
#include <functional>
#include <vector>
#include <cmath>

using namespace std;
int main()
{

    int ia[] = {1,3,6,7,9};

    int *p1 = &ia[0];
    int *p2 = &ia[3];
    cout << "p1=" << *p1 << "p2=" << *p2 << endl;
    p1 += p2-p1; // p1 指向p2位置  当p1 index 大于p2 违法
    cout << *p1 << endl;
    
    return 0;
}