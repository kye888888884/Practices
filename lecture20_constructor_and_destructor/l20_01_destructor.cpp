#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void Cry() { cout << "Animal!" << endl; }
    // virtual ~Animal() { cout << "Animal destructor" << endl; }
protected:
    ~Animal() { cout << "Animal destructor" << endl; }
};

class Dog : public Animal
{
public:
    void Cry() { cout << "Mung Mung" << endl; }
    ~Dog() { cout << "Dog destructor" << endl; }
};

int main()
{
    Animal *p = new Dog;
    p->Cry();

    // delete p;
    delete static_cast<Dog *>(p);

    return 0;
}