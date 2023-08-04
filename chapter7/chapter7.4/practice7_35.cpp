#include <iostream>
#include <string>
using namespace std;


typedef string Type;
Type initVal();

class Exercise
{
public:
    typedef double Type;
    Type setVal(Type t);
    Type initVal();
private:
    int val;
};
Exercise::Type Exercise::setVal(Exercise::Type t)
{

}

int main()
{
    return 0;
}