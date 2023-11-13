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
    // new/delete: 연산자 -> 오버로딩 가능
    // malloc/free: 함수
    // 면접에 많이 나옴!

    // AAA *p = new AAA('c');
    AAA *p = (AAA *)malloc(sizeof(AAA)); // 생성자 호출 안됨

    delete p;
    // free(p); // 파괴자 호출 안됨

    return 0;
}