//////////////////////////////////////////////////////////////////////////////
//     
//  File name :     program249.cpp
//  Descreption :   Taking input from user and Add those two numbers.
//  Author :        Prashant V. Surve
//  Date :          13/06/2025
//
//////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

int Addition(int No1, int No2)
{
    int Ans;

    Ans = No1 + No2;
    return Ans;
}

int main()
{
    int Ret , Value1, Value2;

    cout<<"First Number : \n";
    cin>>Value1;

    cout<<"First Number : \n";
    cin>>Value2;

    Ret = Addition(Value1, Value2);

    cout<<"Addition is : "<<Ret<<"\n";


    return 0;
}