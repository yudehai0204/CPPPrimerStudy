#include <iostream>
#include "D:\UnRealWorkSapce\CPPPrimerStudy\Sales_data.h"


using namespace std;


int main()
{
    Sales_data total;

    if(cin >> total)
    {
        Sales_data trans;
        while (read(cin,trans))
        {
            if(total.isbn() == trans.isbn())
            {
               total.combine(trans);
            }
            else
            {
                print(cout,total);
                // cout << "book " << total.bookNo << "; nums = " << total.units_sold << endl;
                total = trans;
            }
        }
         cout << "book " << total.bookNo << "; nums = " << total.units_sold << endl;\
        
    }
    cout << " End" << endl;


}