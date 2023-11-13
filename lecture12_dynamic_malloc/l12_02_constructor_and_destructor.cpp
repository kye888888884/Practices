#include <iostream>
using namespace std;

class AAA
{
private:
    char id;

public:
    AAA(char c)
    {
        cout << "I am a " << c << endl;
        this->id = c;
    }
    ~AAA()
    {
        cout << "I am dying " << id << endl;
    }
};

int main()
{
    AAA a('a');              // main 함수가 끝나면 a는 사라짐
    AAA *ptr = new AAA('b'); // AAA 객체를 동적으로 생성, main 함수가 끝나도 알아서 사라지지 않음

    delete ptr; // 실행하지 않으면 메모리 누수 발생

    return 0;
}