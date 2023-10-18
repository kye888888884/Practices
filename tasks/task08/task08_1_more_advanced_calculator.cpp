#include <iostream>
using namespace std;

template <typename T>
T calculate(T a, T b, char op)
{
    switch (op)
    {
    case '+':
        return a + b;
    case '-':
        return a - b;
    case '*':
        return a * b;
    case '/':
        if (b == 0)
        {
            cout << "Error: divide by zero" << endl;
            return 0;
        }
        return a / b;
    default:
        return 0;
    }
    return a + b;
}

int main()
{
    float a, b;
    char op;

    cout << "Select an operator: ";
    cin >> op;

    cout << "Input two numbers: ";
    cin >> a >> b;

    cout << "Answer: " << calculate(a, b, op) << endl;

    return 0;
}