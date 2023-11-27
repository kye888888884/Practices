#include <iostream>
using namespace std;

class Dog
{

public:
    Dog() { cout << "Dog constructor" << endl; }
    Dog(int age) { cout << "Dog aged " << age << endl; }
    ~Dog() { cout << "Dog destructor" << endl; }
};

class myDog : public Dog
{
public:
    myDog() { cout << "myDog constructor" << endl; }                   // 컴파일러가 Dog() 추가
    myDog(int age) : Dog(age) { cout << "myDog aged" << age << endl; } // 원하는 생성자 호출 가능
    ~myDog() { cout << "myDog destructor" << endl; }
};

int main()
{
    myDog dog(5);
    return 0;
}