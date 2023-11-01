#include <iostream>
using namespace std;

int dont_call_this()
{
    while (1)
        int *ptr = new int; // 메모리를 계속 먹다가 컴퓨터 다운
}

int main()
{
    int *ptr = new int;
    cout << ptr << endl;

    *ptr = 10;
    cout << *ptr << endl;
    delete ptr; // 새로 할당하기 전에 먼저 지워야 메모리 누수 방지

    ptr = new int;
    cout << ptr << endl;
    *ptr = 1234;
    cout << *ptr << endl;

    delete ptr; // ptr가 가리키는 곳을 지움
    cout << ptr << endl;
    cout << *ptr << endl; // 쓰레기값, 보안상 운영체제가 처리함

    *ptr = 9999;
    cout << *ptr << endl; // dangling pointer, 이미 free된 포인터를 사용함
    return 0;
}