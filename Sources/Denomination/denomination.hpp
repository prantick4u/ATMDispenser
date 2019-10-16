#pragma once
#include "request.hpp"
#include<iostream>

using namespace std;
class Denomination
{
private:
    Denomination* nextHandler;
public:
    Denomination();
    void SetNext(Denomination*);
    //void AddNext(Denomination*);
    virtual void Handle(Request);
};

class Denom100:public Denomination
{
private:
    int DenomId = 100;
public:
    void Handle(Request);
};

class Denom500:public Denomination
{
private:
    int DenomId = 500;

public:
    void Handle(Request);
};

class Denom2000:public Denomination
{
private:
    int DenomId = 2000;

public:
    void Handle(Request);

};
