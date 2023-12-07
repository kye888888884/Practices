#include <iostream>
using namespace std;

class my_calc
{
private:
    int a, b;

public:
    my_calc(int a, int b) : a(a), b(b) {}
    int add() { return a + b; }
    int sub() { return a - b; }
    int mul() { return a * b; }
    int div()
    {
        if (b == 0)
        {
            cout << "Error: 0으로 나눌 수 없습니다." << endl;
            return 0;
        }
        return a / b;
    }
};

int main()
{
    my_calc c(10, 20);

    cout << c.add() << endl;
    cout << c.sub() << endl;
    cout << c.mul() << endl;
    cout << c.div() << endl;
}