/****************************
**
**    request.cpp
**    Author: Prantick4u
**
****************************/
#include "request.hpp"

Request::Request()
{
}
void Request::SetRequest(int amt)
{
    Amount = amt;
}

int Request::GetRequest()
{
    return Amount;
}


