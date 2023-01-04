#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    cout << "请输入两个整数" << endl;

    int v1,v2;
    cin >> v1 >> v2;

    int start ,end;
    cout << "input numer = " << v1 << " ; " << v2 << endl;
    start = min(v1,v2);
    end = max(v1,v2);

    while (start <= end)
    {
        /* code */
        cout << start << endl;
        start++;
    }
    

    return 0;
}