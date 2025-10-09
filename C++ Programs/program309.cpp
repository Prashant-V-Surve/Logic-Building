//////////////////////////////////////////////////////////////////////////////
//     
//  File name :     program309.cpp
//  Descreption :   Creating Array and Display Maximum element
//                  (Object Oriented Programming). 
//  Author :        Prashant V. Surve
//  Date :          16/06/2025
//
//////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

class ArrayX
{
    private:                         // change
        int *Arr;
        int iSize;

    public:
        ArrayX(int iLength = 5)
        {
            cout<<"Inside Constructor\n";
            iSize = iLength;
            Arr = new int[iSize];
        }

        ~ArrayX()
        {
            cout<<"Inside destructor\n";
            delete []Arr;
        }

        void Accept()
        {
            cout<<"Enter the Elements: \n";
            int iCnt = 0;
            for(iCnt = 0;iCnt < iSize; iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }

        void Display()
        {
            cout<<"Elements are: \n";
            int iCnt = 0;
            for(iCnt = 0;iCnt < iSize; iCnt++)
            {
                cout<<Arr[iCnt]<<"\n";
            }
        }

        int Maximum()
        {
            int iMax = 0;
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

};


int main()
{
    ArrayX aobj(5);

    aobj.Accept();
    aobj.Display();

    int iRet = 0;
    iRet = aobj.Maximum();

    cout<<"Maximum element is : "<<iRet<<"\n";

    return 0;
}