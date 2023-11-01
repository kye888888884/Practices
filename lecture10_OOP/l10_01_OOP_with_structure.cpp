#include <iostream>
using namespace std;

class Stack
{
private: // 접근 지정자 사용 가능. 이 차이점밖에 없다.
    int stack[16];
    int sp = 0;

public:
    void push(int v) { stack[sp++] = v; } // member function
    int pop() { return stack[--sp]; }     // or method
};
class Animal
{
    int age;
    int weight;
};
class Dog : public Animal
{
    int color;
};
// 1. Capsulation: data hiding, 정보 은닉
/*
    - Gathering: 변수와 함수 모음
    - Hiding: 외부에서 접근 불가능하게 만듦
        - private: 외부에서 접근 불가
        - public: 외부에서 접근 가능
        - protected: 상속 관계에서만 접근 가능
    - Creating: 새로운 자료형을 만듦
*/
// 2. Polymorphism: 다형성
/*
    - Overloading: 함수 이름은 같지만, 매개변수의 타입이나 개수가 다른 함수를 만듦
    - Overriding: 상속 관계에서 부모 클래스의 함수를 자식 클래스에서 재정의
*/
// Inheritance: 상속성
/*
    - 중복 삭제
    - 업무 분담
    - 코드 흐름 강제
        - framework: 내가 불린다 (라이브러리: 내가 부른다)
*/

int main()
{
    Stack s1 = Stack();
    s1.push(10);
    s1.push(20);
    s1.push(30);

    int num[10] = {0, 10, 20, 30, 40, 50, 60, 70, 80, 90};
    for (auto n : num)
        s1.push(n);

    cout << s1.pop() << endl;
    cout << s1.pop() << endl;
    cout << s1.pop() << endl;

    return 0;
}