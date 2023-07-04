#include <iostream>
#include <memory>
#include <cstring>
#include <functional>
#include <vector>
#include <cmath>
#include <iterator>
using namespace std;

void printVec(vector<int>::iterator Now , vector<int>::iterator end)
{
    if(Now != end){
        cout << *Now << endl;
        printVec(++Now,end);
    }
    
}
int main()
{
    vector<int> v1 = {1,3,5,7,9};
    printVec(v1.begin(),v1.end());
    return 0;
}