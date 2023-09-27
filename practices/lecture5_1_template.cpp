#include <iostream>
using namespace std;

template <typename T, typename U>
U add(T a, U b)
{
    return a + b;
}

int main()
{
    cout << add(1, 2) << endl;
    cout << add(1.1, 2.2) << endl;
    cout << add(1, 2.5) << endl;        // 묵시적 인스턴스화
    cout << add<short>(10, 20) << endl; // 명시적 인스턴스화

    return 0;
}