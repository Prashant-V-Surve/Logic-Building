//////////////////////////////////////////////////////////////////////////////
//     
//  File name :     program251.cpp
//  Descreption :   Addition of two numbers.(Generic)
//  Author :        Prashant V. Surve
//  Date :          13/06/2025
//
//////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

template <class T>                      // Template header
T Addition(T No1, T No2)
{
    T Ans;

    Ans = No1 + No2;
    return Ans;
}

int main()
{
    float Ret , Value1, Value2;

    cout<<"First Number : \n";
    cin>>Value1;

    cout<<"First Number : \n";
    cin>>Value2;

    Ret = Addition(Value1, Value2);

    cout<<"Addition is : "<<Ret<<"\n";


    return 0;
}