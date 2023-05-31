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
    return 0;
}