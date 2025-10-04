////////////////////////////////////////////////////////
//     
//  File name :     program267.cpp
//  Descreption :   Display input given in Binary.
//  Author :        Prashant V. Surve
//  Date :          15/06/2025
//
////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

int CountOne(int iNo)
{
    int iCnt = 0;

    while(iNo != 0)
    {
        iCnt = iCnt + (iNo % 2);
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

    iRet = CountOne(iValue);

    cout<<"Digit 1 occurs "<<iRet<< " times.\n";
    
    return 0;
}