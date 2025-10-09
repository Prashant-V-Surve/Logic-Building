//////////////////////////////////////////////////////////////////////////////
//     
//  File name :     program300.cpp
//  Descreption :   Display elements of Array.
//  Author :        Prashant V. Surve
//  Date :          16/06/2025
//
//////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;


int main()
{
    int *ptr = NULL;
    int iLength = 0,iCnt = 0;

    cout<<"Enter number of elements \n";
    cin>>iLength;

    ptr = new int [iLength];

    cout<<"enter the elements : \n";

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        cin>>ptr[iCnt];
    }

    cout<<"Elements of the Array are : \n";

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        cout<<ptr[iCnt]<<"\n";
    }

    return 0;
}