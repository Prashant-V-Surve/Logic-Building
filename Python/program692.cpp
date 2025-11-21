///////////////////////////////////////////////////////////////////////////////
//     
//  File name :     program692.cpp
//  Descreption :   OOP.
//  Author :        Prashant V. Surve
//  Date :          3/08/2025
//
///////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

class Demo
{
    public:
        int No1;
        int No2;

    Demo(int A = 0,int B = 0)
    {
        cout<<"Inside Constructor\n";
        this->No1 = A;
        this->No2 = B;
    }

    ~Demo()
    {
        cout<<"Inside Destructor\n";
    }

    void Display()
    {
        cout<<"Value No1 is :"<<this->No1<<"\n";
        cout<<"Value No2 is :"<<this->No2<<"\n";
    }
};

int main()
{
    cout<<"Inside main";
    

    Demo obj1;
    Demo obj2;

    obj1.Display();
    obj2.Display();

    cout<<"End of main";

    return 0;
}
