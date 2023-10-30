#include <iostream>
using namespace std;

int main()
{
    int a = 100;
    const int *ptr = &a; // 값을 상수화
    a = 200;
    ptr = ptr + 1;
    // *ptr = 300; // error
    int *const ptr2 = &a; // 포인터를 상수화
    // ptr2 = ptr; // error

    const int *const ptr3 = &a; // 값과 포인터 모두 상수화
    int const *const ptr4 = &a; // 이것도 되는데 위에 걸 많이 쓴다.
}