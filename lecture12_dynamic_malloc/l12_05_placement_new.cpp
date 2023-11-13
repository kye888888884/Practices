#include <iostream>
using namespace std;

class Klass
{
private:
    int a = 0x41424344; // for memory check
public:
    Klass()
    {
        cout << "Constructor" << endl;
    }
    void foo()
    {
        cout << "foo" << endl;
    }
};

int main()
{
    char reserve[1024] = "Hello";
    cout << reserve << endl;

    Klass *ptr = new (reserve) Klass; // placement new

    cout << (void *)reserve << endl;
    cout << ptr << endl;

    cout << reserve << endl;

    return 0;
}