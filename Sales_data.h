



#ifndef SALES_DATA_H
#define SALES_DATA_H
#include <iostream>
#include <string>


class Sales_data
{
    public:
    friend std::istream& operator>>(std::istream& is, Sales_data& Sales_data);
    friend std::istream& read(std::istream& is, Sales_data& Sales_data);
    friend std::ostream& print(std::ostream& os, Sales_data& Sales_data);
    public:
     Sales_data& operator+=(Sales_data& b)
     {
        units_sold += b.units_sold;
        revenue += b.revenue;
        return *this;
     };

     std::string& isbn()
     {
        return bookNo;
     }

     Sales_data& combine(Sales_data& rhs) 
     {
        bookNo += rhs.bookNo;
        units_sold += rhs.units_sold;
        revenue += rhs.revenue;
        return *this;
     }

     Sales_data add(Sales_data& lhs, Sales_data& rhs)
     {
        Sales_data sum = lhs;
        sum.combine(rhs);
        return sum;
     }

    public:
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
    
    /* data */
};

std::istream& operator>>(std::istream& is, Sales_data& Sales_data)
{
    is >> Sales_data.bookNo >> Sales_data.units_sold >> Sales_data.revenue;
    return is;
}

 std::istream& read(std::istream& is, Sales_data& data)
{
    is>> data;
    return is;
}

std::ostream& print(std::ostream& os, Sales_data& Sales_data)
{
    os << "os bookno " << Sales_data.bookNo << " sale num " << Sales_data.units_sold << std::endl;
    return os;
}


#endif
