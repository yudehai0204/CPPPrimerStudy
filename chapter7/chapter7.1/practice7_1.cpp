#include <iostream>
#include "D:\UnRealWorkSapce\CPPPrimerStudy\Sales_data.h"


using namespace std;


int main()
{
    Sales_data total;

    if(cin >> total)
    {
        Sales_data trans;
        while (cin >> trans)
        {
            if(total.bookNo == trans.bookNo)
            {
                total += trans;
            }
            else
            {
                cout << "book " << total.bookNo << "; nums = " << total.units_sold << endl;\
                total = trans;
            }
        }
         cout << "book " << total.bookNo << "; nums = " << total.units_sold << endl;\
        
    }
    cout << " End" << endl;


}