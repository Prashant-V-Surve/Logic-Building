////////////////////////////////////////////////////////
//     
//  File name :     program271.cpp
//  Descreption :   Check Bit (ON or OFF).
//  Author :        Prashant V. Surve
//  Date :          15/06/2025
//
////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

bool CheckBit(int iNo)
{
    int iMask = 8;
    int iResult = 0;

    iResult = iNo & iMask;

    if(iResult == iMask)
    {
        return true;
    }
    else
    {
        return false;
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