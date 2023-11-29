#include <iostream>
#include <typeinfo>
using namespace std;

class Animal
{
public:
    virtual void Cry(){}; // pure virtual function
};

class Dog : public Animal
{
public:
    void Cry() { cout << "Mung Mung" << endl; }
    void Bark() { cout << "Bow Wow" << endl; }
};

void foo(Animal *p)
{
    // p가 어떤 동물일까? -> RTTI(Run-Time Type Information)
    p->Cry();
};

int main()
{
    Animal a;
    Dog d;

    cout << typeid(Animal).name() << endl;
    cout << typeid(Dog).name() << endl;
    cout << typeid(a).name() << endl;
    cout << typeid(d).name() << endl;

    return 0;
}