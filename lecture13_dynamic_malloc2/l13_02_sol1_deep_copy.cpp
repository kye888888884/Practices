#include <iostream>
#include <string.h>

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
    // deep copy
    smartptr(const smartptr &p)
    {
        ptr = new T;
        memcpy(ptr, p.ptr, sizeof(T));

        cout << (void *)ptr << endl;
        cout << (void *)p.ptr << endl;
    } // 단점: 많은 메모리를 사용한다.
};

void gunc(smartptr<int> q)
{
}

void func()
{
    smartptr<int> p1 = new int;
    *p1 = 10;

    gunc(p1);
}

int main()
{
    cout << "Call" << endl;
    func();
    cout << "Done" << endl;
    return 0;
}