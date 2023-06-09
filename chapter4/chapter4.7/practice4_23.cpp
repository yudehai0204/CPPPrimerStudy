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

    string s = "word";

    string p1 = s +(s[s.size() -1] == 's' ? "": "s");

    return 0;
}