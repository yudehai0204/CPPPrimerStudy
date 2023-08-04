
#ifndef SCREEN_H
#define SCREEN_H

#include <iostream>
#include <cstring>

class Window_mgr
{
private:
    /* data */
    
public:
    Window_mgr(/* args */);
    ~Window_mgr();
    void clear();
};

Window_mgr::Window_mgr(/* args */)
{
}

Window_mgr::~Window_mgr()
{
}


class Screen
{
    friend void Window_mgr::clear();
    typedef std::string::size_type pos;
private:
    /* data */
    pos width;
    pos height;
    pos cursor = 0;
    std::string strName;
public:
    Screen(/* args */) = default;
    Screen(pos posW, pos posH ):Screen(posW,posH,' ')
    {
    }
    Screen(pos posW, pos posH , char def):width(posW),height(posH),strName( width * height,def)
    {

    }
    
    ~Screen();

    Screen& move(pos r , pos c )
    {
        cursor = r * width  + c;
        return *this;
    }

    Screen& set(char v)
    {
        strName[cursor] = v;
        return *this;
    }

    Screen& display()
    {
        std::cout << strName << std::endl;
        return * this;
    }
    pos size();
};

Screen::pos Screen::size()
{
    return width * height;
}



Screen::~Screen()
{
}

void Window_mgr::clear()
{
    Screen myScreen(5,5,'x');
    myScreen.cursor = 10;
    myScreen.strName[3] = 'b';
    myScreen.display();
}

#endif