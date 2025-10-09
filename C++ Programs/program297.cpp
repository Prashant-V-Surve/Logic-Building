//////////////////////////////////////////////////////////////////////////////
//     
//  File name :     program297.cpp
//  Descreption :   Swapping of two numbers.(Generic)
//  Author :        Prashant V. Surve
//  Date :          16/06/2025
//
//////////////////////////////////////////////////////////////////////////////


#include <iostream>
using namespace std;

template<class T>
//Call by Address
void Swap(T *No1,T *No2)
{
    T temp = 0;

    temp = *No1;
    *No1 = *No2;
    *No2 = temp;
}

int main()
{
    int a = 10, b = 11;
    
    cout<<"Value of a before swap: "<<a<<"\n";
    cout<<"Value of b before swap: "<<b<<"\n";
    Swap(&a,&b);
    cout<<"Value of a after : "<<a<<"\n";
    cout<<"Value of b after swap: "<<b<<"\n";

    char x = 'A', y = 'B';
    cout<<"Value of x before swap: "<<x<<"\n";
    cout<<"Value of y before swap: "<<y<<"\n";
    Swap(&x,&y);
    cout<<"Value of x : "<<x<<"\n";
    cout<<"Value of y : "<<y<<"\n";

    return 0;
}