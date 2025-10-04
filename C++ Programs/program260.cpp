//////////////////////////////////////////////////////////////////////////////
//     
//  File name :     program260.cpp
//  Descreption :   Take elements drom user and Display the Array elements.
//                  (Generic)
//  Author :        Prashant V. Surve
//  Date :          13/06/2025
//
//////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

template <class T>
void Display(T Arr[], int iLength)
{
    int iCnt = 0;

    cout<<"Elements of the array are :\n";
    
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        cout<<Arr[iCnt]<<"\n";
    }
}

int main()
{
    int Size, iCnt = 0;

    cout<<"Enter the Number of Elements : \n";
    cin>>Size;

    float *ptr = new float [Size];

    cout<<"Enter The elements : \n";

    for(iCnt = 0; iCnt < Size; iCnt++)
    {
        cin>>ptr[iCnt];
    }

    Display(ptr,Size);

    //use

    delete []ptr;
    
    return 0;
}