////////////////////////////////////////////////////////
//     
//  File name :     program273.cpp
//  Descreption :   Check Bit (ON or OFF).
//  Author :        Prashant V. Surve
//  Date :          15/06/2025
//
////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

bool CheckBit(unsigned int iNo)
{
    unsigned int iMask = 8;
    unsigned int iResult = 0;

    iResult = iNo & iMask;

    return (iResult == iMask);

}

int main()
{
    unsigned int iValue = 0;
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