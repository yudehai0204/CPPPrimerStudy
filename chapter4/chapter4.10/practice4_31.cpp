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
    vector<int> ivec(10); 
    vector<int>::size_type cnt = ivec.size();
    cout << cnt << endl;
    for(vector<int>::size_type ix = 0;ix != ivec.size(); ix++,cnt--)
    {
        ivec[ix] = cnt;
        cout << ix  << " " << cnt << endl;
    }
    
    



    return 0;
}