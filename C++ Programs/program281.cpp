#include <iostream>
using namespace std;

typedef unsigned int UINT; 

bool ChangeBit(UINT iNo)
{
    UINT iMask = 4294965247;    //12
    UINT iResult = 0;

    iResult = iNo & iMask;

    return iResult;

}

int main()
{
    UINT iValue = 0;
    int iRet = 0;

    cout<<"Enter the number : \n";
    cin>>iValue;

    iRet = ChangeBit(iValue);
    
    cout<<"Updated No is : "<<iRet<<"\n";

    return 0;
}