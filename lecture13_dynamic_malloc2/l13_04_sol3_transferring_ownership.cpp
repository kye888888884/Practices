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
    // 소유권 이전
    smartptr(smartptr &p) : ptr(p.ptr) // const가 없다.
    {
        p.ptr = NULL;
        // delete 0 은 아무것도 하지 않는다.
    }
    // 장점:
    // 단점:
};

void gunc(smartptr<int> q)
{
}

void func()
{
    smartptr<int> p1(new int);
    // smartptr<int> p1 = new int; // 대입이라 error
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