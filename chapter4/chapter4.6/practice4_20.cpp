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

    vector<string> vstr;
    vstr.push_back("a");
    vstr.push_back("b");
    vector<string>::iterator iter = vstr.begin();
    cout << *iter++ << endl;
    //cout <<(*iter)++ << endl; //string不支持++
    //cout <<*iter.empty() <<endl;//指针没有empty函数
    cout << (*iter).empty() <<endl;
    iter = vstr.begin();
    cout << *++iter << endl;
    cout << iter++->empty()<<endl;

    return 0;
}