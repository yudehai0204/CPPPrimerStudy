#include <iostream>
#include <memory>
#include <cstring>
#include <functional>
#include <vector>
#include <cmath>
#include <iterator>
using namespace std;

typedef int intarray[4];
int main()
{
    constexpr int x = 3,y = 4;
    int ia[x][y] = {0,1,2,3,4,5,6,7,8,9,10,11};

    cout << " first  "<< endl;
    //One 
    for(intarray &row : ia )
    {
        for(int &col : row){
            cout << col << " " ;
        }
    }
    cout << endl;
    cout << " Second  "<< endl;
    
    for(int row = 0 ; row < x ; row++)
    {
        for(int col = 0; col < y ; col++)
        {
            cout << ia[row][col] << " ";
        }
    }
    cout << endl;
    cout << "Third" << endl;

    for(intarray *p = ia ; p != ia + x; p++)
    {
        for(int *q = *p; q != *p + y; q++)
        {
            cout << *q << " ";
        }
    }
    cout << endl;

    return 0;
}