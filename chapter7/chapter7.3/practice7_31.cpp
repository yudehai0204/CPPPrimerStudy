#include <iostream>
using namespace std;

class X;
class Y
{
private:
    /* data */
    X* a;
public:
    Y(/* args */){};
    ~Y(){};
};

class X{

private:
    Y y;
public:
    X(/* args */){};
    ~X(){};
};


int main()
{
    return 0;
}