//////////////////////////////////////////////////////////////////////////////
//     
//  File name :     program304.cpp
//  Descreption :   Program with Object Oriented Programming 
//  Author :        Prashant V. Surve
//  Date :          16/06/2025
//
//////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

class ArrayX
{
    public:
        int *Arr;
        int iSize;

        ArrayX(int iLength)
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

};


int main()
{
    ArrayX aobj(5);

    return 0;
}