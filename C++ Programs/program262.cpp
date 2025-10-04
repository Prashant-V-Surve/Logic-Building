//////////////////////////////////////////////////////////////////////////////
//     
//  File name :     program262.cpp
//  Descreption :   Calculate the sum of elements of Array.
//                  (Generic)
//  Author :        Prashant V. Surve
//  Date :          13/06/2025
//
//////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

template <class T>
T Addition(T Arr[], int iLength)
{
    int iCnt = 0;
    T Sum = 0;
    
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        Sum = Sum + Arr[iCnt];
    }
    return Sum;
}

int main()
{
    int Size, iCnt = 0;
    float Ret = 0.0f;

    cout<<"Enter the Number of Elements : \n";
    cin>>Size;

    float *ptr = new float [Size];

    cout<<"Enter The elements : \n";

    for(iCnt = 0; iCnt < Size; iCnt++)
    {
        cin>>ptr[iCnt];
    }

    Ret = Addition(ptr,Size);
    
    cout<<"Sum of Elements : "<<Ret<<"\n";

    //use

    delete []ptr;
    
    return 0;
}