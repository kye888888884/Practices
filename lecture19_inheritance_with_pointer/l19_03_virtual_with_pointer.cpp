#include <iostream>
#include <list>
using namespace std;

class PPP
{
    int a = 5;
    void *vptr; // size: 8
    int b = 10;

public:
    virtual void func(int a = 10) { cout << "ppp: " << a << endl; } // virtual function
    // vtable에 가상함수의 주소를 저장
};

class CCC : public PPP
{
    int x;

public:
    virtual void func(int a = 20) { cout << "ccc: " << a << endl; }
};

void foo(PPP *p)
{
    p->func();
};

int main()
{
    PPP *p = new CCC;
    PPP *q = new PPP;

    p->func();
    q->func();

    // cout << sizeof(PPP) << endl;
    // cout << sizeof(CCC) << endl;

    return 0;
}