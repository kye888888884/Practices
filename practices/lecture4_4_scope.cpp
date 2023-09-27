#include <iostream>
using namespace std;

// 스코프(scope): 변수가 존재하는 범위
int main() {
    for (int i = 0; i < 10; i++) {
        int temp = 0;
        cout << temp << endl;
        temp++;
    }
    cout << endl;

    int temp = 0;
    for (int i = 0; i < 10; i++) {
        cout << temp << endl;
        temp++;
    }
    cout << endl;

    int x = 10;
    {
        int x = 1;
        x++;
        cout << x << endl;
    }
    cout << x << endl;

    return 0;
}