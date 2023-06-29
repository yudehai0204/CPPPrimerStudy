#include <iostream>
#include <vector>
using namespace std;
double calc(double d){return 0;};
int count(const string& str,char c){return 0;};
int sum(vector<int>::iterator start,vector<int>::iterator end, int sum ){return 0;};
int main()
{
    //calc(23.4,55.1) 错误 形参个数对不上
     count("abcd",'a');
    calc(66);//隐转换为double
    vector<int> ivec(10);
    sum(ivec.begin(),ivec.end(),3.8);//3.8转换为3
}