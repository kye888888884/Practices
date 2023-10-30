#include <iostream>
using namespace std;

void func(int a, int b, int (*ptr)(int a, int b))
{
    cout << ptr(a, b) << endl;
}

int sum(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int main()
{
    func(10, 20, sum);
    func(10, 20, sub);
    return 0;
}
/* // 쉬운 예제
int sum() {
    return 10;
}

int main()
{
    int (*ptr)() = sum;
    cout << ptr() << endl;
    cout << (int*)&sum << endl;
    cout << (int*)ptr << endl;
    return 0;
}
*/