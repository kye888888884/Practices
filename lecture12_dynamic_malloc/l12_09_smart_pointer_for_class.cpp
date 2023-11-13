#include <iostream>
using namespace std;

class member
{
private:
    int id;

public:
    member(int _id) : id(_id) {}
    void print()
    {
        cout << id << endl;
    }
};

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
    T *&operator->() // 클래스 멤버에 접근하기 위해 -> 오버로딩 필요
    {
        return ptr;
    }
};

int main()
{
    smartptr<member> ptr = new member(10); // 동작 안함

    ptr->print(); // -> 오버로딩 필요

    return 0;
}