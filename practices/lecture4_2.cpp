#include <iostream>
using namespace std;

int f(int x);
int g(int y);

// 프로토 타입이 필요한 경우 - 함수가 정의되기 전에 호출되는 경우
int f(int x) {
    return g(x);
}
int g(int y) {
    return f(y);
}

int main() {
    int answer = 1 + 2 + f(3);

    cout << answer << endl;

    return 0;
}