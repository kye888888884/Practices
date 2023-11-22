#include <iostream>
using namespace std;

template <typename T, typename U>
U add(T a, U b)
{
    return a + b;
}

// 특정 타입은 다르게 처리하고 싶을 때
template <>
char add(char a, char b)
{
    return a + 0x20;
}

int main()
{
    cout << add(1, 2) << endl;
    cout << add('a', 'b') << endl;

    return 0;
}