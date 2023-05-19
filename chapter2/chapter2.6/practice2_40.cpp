#include <iostream>
#include <memory>
#include <cstring>
#include <functional>
#include <vector>
#include <cmath>

using namespace std;


class Sales_data
{
    friend istream& operator>>(istream&,Sales_data&);

    public:
    string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};


istream& operator>>(istream& is ,Sales_data& sd )
{
    is >> sd.bookNo >> sd.units_sold >> sd.revenue;
    return is;
};


int main()
{

    return 0;
}