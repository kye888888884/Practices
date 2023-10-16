#include <iostream>
using namespace std;

#define SUM(a, b) a + b

inline int add(int a, int b)
{
    int c = 5;
    return a + b + c;
}

int main()
{
    int c;
    c = add(10, 20); // c = a + b; 스택에 쌓이는 것이 아니라, 컴파일러가 함수를 호출하는 부분에 함수를 삽입한다.
    cout << c << endl;
    return 0;
}