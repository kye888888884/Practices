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
    smartptr(long *p = 0) : ptr((T *)p) {}
};

int main()
{
    long i = 1234;
    int j = i;          // implicit conversion
    int *p = (int *)&i; // explicit conversion
    // ▲ 문제없음

    // 문제는...
    smartptr<int> p1 = new int;
    *p1 = 10;
    p1 = &i;
    cout << *p1 << endl;

    return 0;
}