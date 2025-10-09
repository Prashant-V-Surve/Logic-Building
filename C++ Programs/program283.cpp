#include <iostream>
using namespace std;

typedef unsigned int UINT; 

bool ToggleBit(UINT iNo, int iPos)
{
    if(iPos < 0 || iPos > 32 )
    {
        cout<<"Invalid bit position";
        
        return false;
    }

    UINT iMask = 1;
    UINT iResult = 0;

    iMask = iMask << (iPos - 1);

    iResult = iNo ^ iMask;

    return iResult;
}

int main()
{
    UINT iValue = 0, iLocation = 0;
    int iRet = 0;

    cout<<"Enter the number : \n";
    cin>>iValue;

    cout<<"Enter the Location : \n";
    cin>>iLocation;

    iRet = ToggleBit(iValue, iLocation);
    
    cout<<"Updated No is : "<<iRet<<"\n";

    return 0;
}