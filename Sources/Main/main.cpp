/****************************
**
**    main.cpp
**    Author: Prantick4u
**
****************************/
#include<iostream>
#include "denomination.hpp"
using namespace std;

int main()
{

    Denom2000 obj1;
    Denom500  obj2;
    Denom100  obj3;
    obj1.SetNext(&obj2);
    obj2.SetNext(&obj3);

    cout<<"Please Enter Amount : ";
    int val(0);
    cin>>val;
    Request ObjRq;
    ObjRq.SetRequest(val);
    if(val)
    {
        obj1.Handle(ObjRq);
    }
}
