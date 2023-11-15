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
    operator int *()
    {
        return ptr;
    }
};

int main()
{
    smartptr<int> p1(new int);
    *p1 = 10;

    int *ptr = p1;
    cout << *ptr << endl;
    return 0;
}