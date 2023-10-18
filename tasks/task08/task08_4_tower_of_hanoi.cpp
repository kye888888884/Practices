#include <iostream>
#include <stack>
using namespace std;

stack<int> A, B, C;

void move(char from, char to, char temp)
{
    stack<int> *s_from = from == 'A' ? &A : (from == 'B' ? &B : &C);
    stack<int> *s_to = to == 'A' ? &A : (to == 'B' ? &B : &C);
    cout << "Moved the disk " << s_from->top() << " from " << from << " to " << to << " via " << temp << endl;
    s_to->push(s_from->top());
    s_from->pop();
}

void hanoi(int n, char from, char to, char temp)
{
    if (n == 0)
    {
        return;
    }
    hanoi(n - 1, from, temp, to);
    move(from, to, temp);
    hanoi(n - 1, temp, to, from);
}

int main()
{
    int n;
    cout << "Enter the number of disks: ";
    cin >> n;

    for (int i = n; i > 0; i--)
        A.push(i);

    hanoi(n, 'A', 'B', 'C');

    return 0;
}