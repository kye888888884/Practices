#include <iostream>
#include <list>
using namespace std;

class PPP
{
    int a = 5;

protected:
    int b = 10;

public:
    virtual void func() { cout << "ppp" << endl; } // virtual function
};

class CCC : public PPP
{
    int x;

public:
    void func() { cout << "ccc" << endl; }
};

class DDD : public PPP
{
    int x;

public:
    void func() { cout << "ddd" << endl; }
};

class EEE : public PPP
{
    int x;

public:
    void func() { cout << "eee" << endl; }
};

void foo(PPP *p)
{
    p->func();
};

int main()
{
    PPP p;
    CCC c;
    DDD d;
    EEE e;

    foo(&c); // static binding
    foo(&d); // dynamic binding
    foo(&e);

    return 0;
}