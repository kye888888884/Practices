#include <iostream>
using namespace std;

const class
{
public:
    template <class T>
    operator T *() const
    {
        return 0;
    }
    template <class C, class T>
    operator T C::*() const
    {
        return 0;
    }

private:
    void operator&() const; // 주소는 못 취하게 함
} my_nullptr = {};

void func(int n)
{
    cout << "void func(int) called" << endl;
}
void func(char *p)
{
    cout << "void func(char *) called" << endl;
}

int main()
{
    func(0);
    func(my_nullptr);
    return 0;
}