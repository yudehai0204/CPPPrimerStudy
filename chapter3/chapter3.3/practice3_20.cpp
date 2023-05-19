#include <iostream>
#include <memory>
#include <cstring>
#include <functional>
#include <vector>
#include <cmath>

using namespace std;
int main()
{
    vector<int> ivec{1,3,5,7,9,11};

    int size = ivec.size();
    cout << "相邻：" << endl;
    int result = 0;
    for(int i = 0 ; i < size ;  i++){
        result = ivec[i];
        if(i+1 < size)
        {
            result += ivec[i+1];
        }
        cout << result << endl;
    }

    cout << "首末" << endl;
    int start = 0 , end = size-1;
    while (start < end)
    {
        /* code */
        cout << (ivec[start] + ivec[end]) << endl;
        start++;
        end--;
    }
    

    return 0;
}