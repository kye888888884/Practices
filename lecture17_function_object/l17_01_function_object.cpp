#include <iostream>
using namespace std;

struct Plus
{
    int operator()(int a, int b)
    {
        return a + b;
    }
};

int main()
{
    Plus p;
    int n = p(1, 2);
    cout << n << endl;
    // 좋은 점
    // 1. 최적화에 좋다.
    // 2. 객체이기 때문에 상태 저장 가능
    // 3. 자신만의 type을 가짐
    return 0;
}