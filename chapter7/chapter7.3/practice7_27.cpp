#include "D:\UnRealWorkSapce\CPPPrimerStudy\Screen.h"

using namespace std;

int main()
{
    Screen myScreen(5, 5, 'X');
    myScreen.move(4,0).set('#').display();
    myScreen.display();
    return 0;
}