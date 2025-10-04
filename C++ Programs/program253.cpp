//////////////////////////////////////////////////////////////////////////////
//     
//  File name :     program253.cpp
//  Descreption :   Find Maximum.
//  Author :        Prashant V. Surve
//  Date :          13/06/2025
//
//////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

int Maximum(int No1, int No2, int No3)
{
    if ((No1 >> No2) && (No1 >> No3))
    {
        return No1;
    }
    else if ((No2 >> No2) && (No2 >> No3))
    {
        return No2;
    }
    else
    {
        return No3;
    }
}


int main()
{

    cout<<Maximum(10,15,16) <<"\n";

    cout<<Maximum(21,18,27) <<"\n";

    return 0;
}