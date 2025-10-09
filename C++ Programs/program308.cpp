//////////////////////////////////////////////////////////////////////////////
//     
//  File name :     program308.cpp
//  Descreption :   Creating Array and Display it(Object Oriented Programming). 
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

};


int main()
{
    ArrayX aobj(5);

    aobj.Accept();
    aobj.Display();

    return 0;
}