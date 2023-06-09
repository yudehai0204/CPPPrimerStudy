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
    int result1 = 12/3*4 + 5*15 +24%8/2;

    cout << result1 << endl;
    int result2 =  ((12/3)*4) + (5*15) +(24%(8/2));
    cout << result2 << endl;

    int result3 = -30 *3 +21/5;
    cout << result3 << endl; 
    int result4 = 30/3*21%5;
    cout << result4<<endl;
    return 0;
}