#include <iostream>
#include <memory>
#include <cstring>
#include <functional>
#include <vector>
#include <cmath>
#include <ctime>
#include <iterator>
using namespace std;

void printArray(int* arr, int count)
{
    for (int i = 0; i < count; i++)
    {
        cout << *arr << " " ;
        arr++;
    }
    cout << endl;
    
}

void changeArray(int(*a)[10],int(*b)[10], int count)
{
    for (size_t i = 0; i < count; i++)
    {
        
        int temp = (*a)[i];
        (*a)[i] = (*b)[i];
        (*b)[i] = temp; 
        cout << (*a)[i] << " " << *(b[i]) << endl;
    }
    
}
int main()
{
    srand((unsigned) time(NULL));
    int a[10];
    int b[10];

    for(int i = 0 ; i < 10 ; i ++){
        a[i] = rand()&100;
        b[i] = rand()&100;
        
    }
    cout << "Arr A = " ;
    printArray(&(a[0]),10);
    
    cout << "Arr B = " ;
    printArray(&(b[0]),10);

    cout << "Change" << endl;
    changeArray(&a,&b,10);
    
    cout << "Arr A = " ;
    printArray(&(a[0]),10);
    
    cout << "Arr B = " ;
    printArray(&(b[0]),10);
    return 0;
}