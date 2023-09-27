#include <iostream>
using namespace std;

int f(int a);

int main() {
    int answer = 1 + 2 + f(3);

    cout << answer << endl;

    return 0;
}

int f(int a) {
    return (a * a) + 1;
}