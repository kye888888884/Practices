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
    T *&operator->() // 클래스 멤버에 접근하기 위해 -> 오버로딩 필요
    {
        return ptr;
    }
};

void func()
{
    smartptr<int> p(new int);
    *p = 10;
    cout << *p << endl;

    smartptr<int> p2 = p;
    cout << *p2 << endl;
}

int main()
{
    cout << "Call" << endl;
    func();
    cout << "Done" << endl;
    // 프로그램이 종료될 때 p가 파괴되며 p가 가리키는 메모리도 파괴된다. 이후 p2가 파괴될 때 p2가 가리키는 메모리를 파괴하려고 하지만 이미 파괴된 메모리를 파괴하려고 하므로 에러가 발생한다.
    return 0;
}