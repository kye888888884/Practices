#include <iostream>
using namespace std;

void func(int n)
{
    cout << "void func(int) called" << endl;
}
void func(char *p)
{
    cout << "void func(char *) called" << endl;
}

int main()
{
    func(0);
    // func(NULL); // 숫자인지 모인터인지 모호함
    func(nullptr); // nullptr는 클래스
    return 0;
}