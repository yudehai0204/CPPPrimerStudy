
#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <cstring>


class Person
{
friend void read(Person& person);
friend void print(const Person& person);
private:
    /* data */
    std::string m_name;
    std::string m_addr;
public:
    Person()
    {

    }
    Person(/* args */std::string name ,std::string addr ):m_name(name),m_addr(addr)
    {
        std::cout << "Construct person( " << name << "," << addr << ")" << std::endl;
    };
    ~Person();

    inline std::string GetName() const 
    {
        return m_name;
    }
    inline std::string GetAddr() const 
    {
        return m_addr;
    }
};
void read(Person& person)
{
    std::cin >> person.m_name >> person.m_addr;
}

void print(const Person& person)
{
    std::cout << "Person(" << person.m_name << "," << person.m_addr << ")" << std::endl; 
}

Person::~Person()
{
}



#endif