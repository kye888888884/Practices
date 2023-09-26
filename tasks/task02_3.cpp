#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "My age is ";
    cin >> age;

    cout << "age: " << age << endl;

    return 0;

    // 123 -> 123
    // abc -> 0
    // abc123 -> 0
    // 123abc -> 123
    // 이 결과를 통해 int로 선언된 변수에 cin으로 값을 입력할 경우 문자를 하나씩 읽다가 숫자가 아닌 문자가 나오면 그 지점에서 읽기를 종료한다는 것을 유추할 수 있다.
    // 또한 첫 문자가 숫자가 아닌 경우 값은 0으로 저장된다.
}