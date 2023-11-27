#include <iostream>
using namespace std;

class Dog
{
public:
    void bark() { cout << "mung mung" << endl; }
};

class myDog : public Dog
{
public:
    void bark() { cout << "mung mung" << endl; }                          // overriding
    void bark(bool feed) { cout << "mgumgunugdsgsdmgsudgmdsgu" << endl; } // overloading
};

int main()
{
    Dog d;
    d.bark();

    myDog md;
    md.bark();
    md.bark(true);
    return 0;
}