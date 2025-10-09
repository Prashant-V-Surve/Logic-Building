//////////////////////////////////////////////////////////////////////////////
//     
//  File name :     program291.cpp
//  Descreption :   Calculate the sum of elements of Array.
//                  (Generic)
//  Author :        Prashant V. Surve
//  Date :          13/06/2025
//
//////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

bool CheckBit(int iNo)
{
    int iMask = 0x00000040;    // 12
    int iResult = 0;

    iResult = iNo & iMask;

    if(iResult == 0)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    cout<<"Enter the number : \n";
    cin>>iValue;

    bRet = CheckBit(iValue);
    
    if(bRet == true)
    {
        cout<<"4th Bit is ON\n";
    }
    else
    {
        cout<<"4th Bit is OFF\n";
    }
    return 0;
}