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
    Dog *pDog = dynamic_cast<Dog *>(p);
    cout << pDog << endl;

    if (pDog != 0)
    {
        cout << "p is a Dog!" << endl;
        p->Cry();
    }
};

int main()
{
    Animal a;
    Dog d;

    foo(&a);
    foo(&d);

    return 0;
}