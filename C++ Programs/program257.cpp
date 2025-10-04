//////////////////////////////////////////////////////////////////////////////
//     
//  File name :     program257.cpp
//  Descreption :   Take elements drom user and Display the Array elements.
//  Author :        Prashant V. Surve
//  Date :          13/06/2025
//
//////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

int main()
{
    int Size, iCnt = 0;

    cout<<"Enter the Number of Elements : \n";
    cin>>Size;

    int *ptr = new int [Size];

    cout<<"Enter The elements : \n";

    for(iCnt = 0; iCnt < Size; iCnt++)
    {
        cin>>ptr[iCnt];
    }

    cout<<"Elements of the array are :\n";
    
    for(iCnt = 0; iCnt < Size; iCnt++)
    {
        cout<<ptr[iCnt]<<"\n";
    }
    //use

    delete []ptr;
    
    return 0;
}