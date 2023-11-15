#include <iostream>
using namespace std;

template <typename T>
class smartptr
{
private:
    T *ptr;

public:
    smartptr(T *p = 0) : ptr(p) {}
    ~smartptr()
    {
        delete ptr;
    }
    T &operator*()
    {
        return *ptr;
    }
    T *&operator->()
    {
        return ptr;
    }
};

void gunc(smartptr<int> q)
{
}

void func()
{
    smartptr<int> p1 = new int;
    *p1 = 10;
    cout << *p1 << endl;

    gunc(p1);
}

int main()
{
    cout << "Call" << endl;
    func();
    cout << "Done" << endl;
    return 0;
}