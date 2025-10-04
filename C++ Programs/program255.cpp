//////////////////////////////////////////////////////////////////////////////
//     
//  File name :     program255.cpp
//  Descreption :   Find Maximum.(Generic)
//  Author :        Prashant V. Surve
//  Date :          13/06/2025
//
//////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

template <class T>
T Maximum(T No1, T No2, T No3)
{
    if ((No1 > No2) && (No1 > No3))
    {
        return No1;
    }
    if ((No2 > No2) && (No2 > No3))
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

    cout<<Maximum(14,18,16) <<"\n";

    cout<<Maximum(21,18,17) <<"\n";

    cout<<Maximum(21.89,18.90,27.45) <<"\n";

    return 0;
}