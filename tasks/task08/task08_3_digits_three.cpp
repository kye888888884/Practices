#include <iostream>
#include <stack>
using namespace std;

int main()
{
    string num;
    stack<char> stack;
    cout << "input number: ";
    cin >> num;

    for (int i = 0; i < num.length(); i++)
    {
        stack.push(num[num.length() - i - 1]);
        if (i % 3 == 2 && i < num.length() - 1)
            stack.push(',');
    }

    while (!stack.empty())
    {
        cout << stack.top();
        stack.pop();
    }
    return 0;
}