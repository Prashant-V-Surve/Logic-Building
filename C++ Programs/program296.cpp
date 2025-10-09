//////////////////////////////////////////////////////////////////////////////
//     
//  File name :     program296.cpp
//  Descreption :   Swapping of two numbers.
//  Author :        Prashant V. Surve
//  Date :          16/06/2025
//
//////////////////////////////////////////////////////////////////////////////


#include <iostream>
using namespace std;

//Call by Address
void Swap(int *No1,int *No2)
{
    int temp = 0;

    temp = *No1;
    *No1 = *No2;
    *No2 = temp;
}

int main()
{
    int a = 10, b = 11;
    Swap(&a,&b);

    cout<<"Value of a : "<<a<<"\n";
    cout<<"Value of b : "<<b<<"\n";

    return 0;
}