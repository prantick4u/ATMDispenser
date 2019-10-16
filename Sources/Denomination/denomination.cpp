#include "denomination.hpp"

Denomination::Denomination()
{
    nextHandler = nullptr;
}

void Denomination::Handle(Request req)
{
    nextHandler->Handle(req);
}

void Denomination::SetNext(Denomination* nxt)
{
    nextHandler = nxt;
}
void Denom100::Handle(Request req)
{
    int val = (req.GetRequest()/DenomId);
    int rem = 0;
    if(val)
    {
        cout<<val<< " 100 note(s)";
        rem = req.GetRequest()%DenomId;
        if(rem)
        {
            req.SetRequest(rem);
            cerr<<"extra "<<rem;
            cerr<<" Cannot process"<<endl;
        }
    }
    else
        Denomination::Handle(req);
}

void Denom500::Handle(Request req)
{
    int val = (req.GetRequest()/DenomId);
    int rem = 0;
    if(val)
    {
        cout<<val<< " 500 note(s)";
        rem = req.GetRequest()%DenomId;
        if(rem)
        {
            req.SetRequest(rem);
            //cerr<<"extra "<<rem;
            Denomination::Handle(req);
        }
    }
    else
        Denomination::Handle(req);
}
void Denom2000::Handle(Request req)
{
    int val = (req.GetRequest()/DenomId);
    int rem = 0;
    if(val)
    {
        cout<<val<< " 2000 note(s)";
        rem = req.GetRequest()%DenomId;
        if(rem)
        {
            req.SetRequest(rem);
            //cerr<<"extra "<<rem;
            Denomination::Handle(req);
        }
    }
    else
        Denomination::Handle(req);
}
