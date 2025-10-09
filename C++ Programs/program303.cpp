//////////////////////////////////////////////////////////////////////////////
//     
//  File name :     program303.cpp
//  Descreption :   Find Maximum element from Array.(Generic)
//  Author :        Prashant V. Surve
//  Date :          16/06/2025
//
//////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

template<class T>

T Maximum(T Arr[], int iSize)
{
    T iMax = 0;
    int iCnt = 0;

    iMax = Arr[0];
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }
    return iMax;
}


int main()
{
    float *ptr = NULL;
    int iLength = 0,iCnt = 0; 
    float fRet = 0;

    cout<<"Enter number of elements \n";
    cin>>iLength;

    ptr = new float [iLength];

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

    fRet = Maximum(ptr,iLength);

    cout<<"Maximum element is : "<<fRet<<"\n";

    delete []ptr;           // if we miss [] then there is possibility of memory leak

    return 0;
}