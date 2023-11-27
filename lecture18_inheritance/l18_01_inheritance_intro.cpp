#include <iostream>
using namespace std;

class Animal
{
    string sound;

public:
    Animal(string s) : sound(s) {}
    void cry() { cout << sound << endl; }
};

class Dog : public Animal
{
public:
    Dog(string s) : Animal(s) {}
};

int main()
{
    Dog d("mung mung");
    d.cry();
    return 0;
}