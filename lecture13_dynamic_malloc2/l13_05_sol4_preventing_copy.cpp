#include <iostream>
using namespace std;

template <typename T>
class smartptr
{
private:
    T *ptr;
    // 복사생성자를 private으로 선언하면 복사생성자를 호출할 수 없다.
    smartptr(const smartptr &p) : ptr(p.ptr) {}
    // 대입도 금지
    void operator=(const smartptr &p) {}

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
    // C++11에서는 이렇게 가능하다.
    // smartptr(const smartptr &p) = delete;
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