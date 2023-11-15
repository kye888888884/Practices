#include <iostream>
#include <string.h>

using namespace std;

template <typename T>
class smartptr
{
private:
    T *ptr;

public:
    int *ref;
    smartptr(T *p = 0) : ptr(p)
    {
        ref = new int(1);
    }
    ~smartptr()
    {
        if (--(*ref) == 0) // 참조계수가 0이면 메모리 해제
        {
            delete ptr;
            delete ref;
            cout << "delete" << endl;
            cout << "count: " << *ref << endl; // 쓰레기값 또는 0
        }
    }
    T &operator*()
    {
        return *ptr;
    }
    T *&operator->()
    {
        return ptr;
    }
    // 참조계수
    smartptr(const smartptr &p) : ptr(p.ptr), ref(p.ref)
    {
        (*ref)++;
        cout << "count: " << *ref << endl;
        cout << "origin: " << (void *)ptr << endl;
        cout << "new: " << (void *)p.ptr << endl;
    }
    // 장점: 적은 메모리를 사용한다.
    // 단점: 잘못 만들면 메모리 누수가 발생한다.
};

void gunc(smartptr<int> q)
{
}

void func()
{
    smartptr<int> p1 = new int;
    *p1 = 10;
    cout << "p1 count: " << *(p1.ref) << endl;

    // gunc(p1);
    smartptr<int> p2 = p1;
    cout << "p1 count: " << *(p1.ref) << endl;
    cout << "p2 count: " << *(p2.ref) << endl;
}

int main()
{
    func();
    return 0;
}