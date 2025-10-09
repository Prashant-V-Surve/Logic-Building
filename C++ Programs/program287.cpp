#include <iostream>
using namespace std;

typedef unsigned int UINT; 

int OffBitMultiple(UINT iNo,int iPos1, int iPos2)
{
    UINT iMask1 = 1;
    UINT iMask2 = 1;
    UINT iMask = 0;

    UINT iResult = 0;

    iMask1 = iMask1 << (iPos1 - 1);
    iMask1 = iMask1 << (iPos2 - 1);

    iMask1 = ~iMask1;
    iMask2 = ~iMask2;

    iMask = (iMask1 & iMask2);

    iResult = iNo & iMask ;
    
    return iResult;
}

int main()
{
    UINT iValue = 0, iLocation1 = 0, iLocation2 = 0;
    int iRet = 0;

    cout<<"Enter the number : \n";
    cin>>iValue;

    cout<<"Enter the Location : \n";
    cin>>iLocation1;

    cout<<"Enter the Location : \n";
    cin>>iLocation2;

    iRet = OffBitMultiple(iValue, iLocation1, iLocation2);
    
    cout<<"Updated No is : "<<iRet<<"\n";

    return 0;
}