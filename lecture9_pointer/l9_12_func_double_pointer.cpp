#include <iostream>
using namespace std;

int add(int a, int b) { return a + b; }

// 함수 포인터를 리턴하는 함수
int (*get(int c))(int, int)
{
    cout << c << endl;
    return &add;
}

int main()
{
    int (*ptr_add)(int, int);

    ptr_add = get(1);
    cout << ptr_add(10, 20) << endl;

    int (**ptr_ptr_add)(int, int) = &ptr_add;
    cout << (*ptr_ptr_add)(50, 60) << endl;
}