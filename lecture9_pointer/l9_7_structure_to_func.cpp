#include <iostream>
using namespace std;

struct Big
{
    double a;
    int b[1000];
    long c;
}; // 구조체는 편하지만 시간과 메모리를 많이 먹는다.

void func(Big *value)
{ // Call by address, 전부 하지 말고 주소만 보내자.
    cout << sizeof(value) << endl;
    cout << value->a << endl; // -> : 구조체 참조 연산자
    cout << (*value).a << endl;
}

int main()
{
    Big mystruct;
    mystruct.a = 100;

    cout << sizeof(mystruct) << endl;
    func(&mystruct);
}