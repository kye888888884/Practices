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
        cout << "smartptr destructor" << endl;
        delete ptr;
    }
    T &operator*()
    {
        return *ptr;
    }
};

int main()
{
    smartptr<double> ptr = new double;
    *ptr = 3.14f;

    cout << *ptr << endl; // 진짜 포인터가 아니라 에러 발생. *오버로딩 필요

    return 0;
}