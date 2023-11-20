#include <iostream>
using namespace std;

// 개불편한 C++을 파이썬처럼 편하게 쓸 수 있다??
// STL: Standard Template Library
// 이것만 있으면 나도 코테 1등??
// 근데 여기서 배우는건 만드는 법

// Generic 알고리즘: 모든 기본 자료형에 대해 동작하는 알고리즘
// Adaptor: Iterator, Function Object

// Container - Interface - Algorithm
// Interface: Adaptor <-> (Iterator, Function Object)

int main()
{
    string s1 = "Hello!";
    string s2 = "World!";
    cout << s1 + s2 << endl;
    return 0;
}