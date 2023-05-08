#include <iostream>
#include <memory>
#include <cstring>
#include <functional>
#include <vector>
#include <cmath>

using namespace std;
int x = 40;
int main()
{
    int x = 30;
    int y = x;
    cout << y << endl;
    int i =100 , sum =0 ;
    for(int i = 0 ; i != 10 ; ++i )
        sum += i;

    cout << sum << endl;   
    return 0;
}