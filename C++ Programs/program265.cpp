///////////////////////////////////////////////////////////////
//     
//  File name :     program265.cpp
//  Descreption :   Display input given in Binary(Zero).
//  Author :        Prashant V. Surve
//  Date :          15/06/2025
//
//////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

int CountZero(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 2;
        if(iDigit == 0)
        {
            iCnt++;
        }
        iNo = iNo / 2;
    }
    return iCnt;
    
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter the number : \n";
    cin>>iValue;

    iRet = CountZero(iValue);

    cout<<"Digit 0 occurs "<<iRet<< " times.\n";    
    
    return 0;
}