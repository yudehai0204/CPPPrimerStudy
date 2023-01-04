#include <iostream>

using namespace std;
void printValue(int a);
void printValue(char* a);

int main()
{

    printValue(12);
    char asdf[] = "Practice Test";
    printValue(asdf);
    // practice 1.6  correct method

    int v1 = 0;
    int v2 = 10;
    cout << "The sum of " << v1;
    cout << " and " << v2;
    cout << " is " << v1 + v2 << endl;
    return 0;
}

void printValue(int a)
{
    cout << a << endl;
}


void printValue(char* a)
{
    cout << a << endl;
}