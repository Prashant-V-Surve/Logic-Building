////////////////////////////////////////////////////////
//     
//  File name :     program276.cpp
//  Descreption :   Check Bit (ON or OFF).
//  Author :        Prashant V. Surve
//  Date :          15/06/2025
//
////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

typedef unsigned int UINT; 

bool CheckBit(UINT iNo)
{
    UINT iMask = 2048;
    UINT iResult = 0;

    iResult = iNo & iMask;

    return (iResult == iMask);

}

int main()
{
    UINT iValue = 0;
    bool bRet = false;

    cout<<"Enter the number : \n";
    cin>>iValue;

    bRet = CheckBit(iValue);
    
    if(bRet == true)
    {
        cout<<"12th Bit is ON\n";
    }
    else
    {
        cout<<"12th Bit is OFF\n";
    }
    return 0;
}