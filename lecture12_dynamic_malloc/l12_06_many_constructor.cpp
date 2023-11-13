#include <iostream>
using namespace std;

class Klass
{
private:
    int a = 0; // for memory check
public:
    Klass()
    {
        cout << "Constructor" << a++ << endl;
    }
    ~Klass()
    {
        cout << "Destructor" << a++ << endl;
    }
};

int main()
{
    Klass k; // placement new

    // k.Klass(); // 안됨
    new (&k) Klass; 
    new (&k) Klass; 
    new (&k) Klass; 

    k.~Klass(); // explicit destructor call
    k.~Klass(); // explicit destructor call
    k.~Klass(); // explicit destructor call
    

    return 0;
}