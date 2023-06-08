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

    int ia[6] = {0,1,2,3,6,7};
    int ib[6];
    vector<int> vi(begin(ia),end(ia));
    int ibIndex = 0;
    for (auto &i : vi){
        cout << i << " ";
        ib[ibIndex] = i;
        ibIndex++;    
    }
    cout << endl;
    cout << ib[5] << endl;

    int x[10]; int *p = x;
    cout << sizeof(x)/sizeof(*x) << endl; // 10
    cout << sizeof(p)/sizeof(*p) << endl;//2
    cout << sizeof(p) << "  " << sizeof(*p) << endl;
    return 0;
}