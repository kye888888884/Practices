#include <iostream>
using namespace std;

class Dog
{
    int i;

protected:
    int j;

public:
    int k;
    Dog(int a, int b, int c) : i(a), j(b), k(c) {}
    void print()
    {
        cout << "a = " << i << endl;
        cout << "b = " << j << endl;
        cout << "c = " << k << endl;
    }
};

class myDog : protected Dog
{
public:
    myDog(int a, int b, int c) : Dog(a, b, c) {}
    void print()
    {
        // cout << "a = " << i << endl; // error
        cout << "b = " << j << endl; // ok
        cout << "c = " << k << endl;
    }
};

int main()
{
    myDog dog(1, 2, 3);

    dog.print();
    return 0;
}