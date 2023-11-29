#include <iostream>
#include <list>
using namespace std;

class Animal
{
public:
    virtual void Cry() = 0; // pure virtual function
};

class Dog : public Animal
{
public:
    void Cry() { cout << "Mung Mung" << endl; }
};

void foo(Animal *p)
{
    p->Cry();
};

int main()
{
    // Animal a; // 추상 클래스는 객체를 생성할 수 없다.
    Dog d;

    // foo(&a);
    foo(&d);

    return 0;
}