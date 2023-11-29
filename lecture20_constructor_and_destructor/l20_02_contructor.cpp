#include <iostream>
using namespace std;

class A
{
public:
    void foo() { cout << "A::foo" << endl; }
};

class B : public A
{
public:
    void goo() { cout << "B::goo" << endl; }
};

int main()
{
    // 생성자가 하는 일
    // 1. 부모 클래스의 생성자를 호출
    // 2. 멤버객체의 생성자를 호출
    // 3. vtable 초기화
    A *p = static_cast<A *>(malloc(sizeof(A)));
    B *q = static_cast<B *>(malloc(sizeof(B)));

    p->foo();

    // 자명한 생성자: 아무것도 하지 않는 생성자

    return 0;
}