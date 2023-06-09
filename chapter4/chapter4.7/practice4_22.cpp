#include <iostream>
#include <memory>
#include <cstring>
#include <functional>
#include <vector>
#include <cmath>
#include <iterator>
using namespace std;
int random100()
{
    return rand()%100;    
}
int main()
{
    vector<int> vi;
    for (size_t i = 0; i < 10; i++)
    {
        /* code */
        vi.push_back(random100());
    }
    
    cout << "条件运算" << endl;
    for (auto iter = vi.begin(); iter != vi.end(); iter++)
    {   
        int grade = *iter;
        cout << grade ;
        cout <<" " << ((grade < 60)? "fail" : ((grade < 75) ? "low pass" : (( grade < 90) ? "pass" : " high pass"))) << endl;
    }
    
    cout << "if运算" << endl;
        for (vector<int>::iterator iter = vi.begin(); iter != vi.end(); iter++)
    {   
        int grade = *iter;
        cout << grade << " ";
        if(grade < 60) 
        {
            cout << "fail"  <<endl;
        }
        else if( grade < 75)
        {
            cout << "low pass"  <<endl;

        }
        else
        {
            cout << "pass"  <<endl;
        }
    }
    
    
    return 0;
}