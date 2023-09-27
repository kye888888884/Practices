#include <iostream>
#include <ctime>
using namespace std;

long long factorial(long long n)
{
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

template <long long N> // template meta programming
struct FACT
{
    enum
    {
        value = N * FACT<N - 1>::value
    };
};

template <>
struct FACT<0>
{
    enum
    {
        value = 1
    };
};

int main()
{
    clock_t start, end;
    start = clock();
    for (int i = 0; i < 100000000; i++)
    {
        // factorial(20);   // time: 3.759
        FACT<20>::value; // time: 0.03, 값을 미리 계산해놓고 쓰기 때문에 빠름. 대신 컴파일 시간이 오래 걸림.
    }
    end = clock();
    cout << "time: " << (double)(end - start) / CLOCKS_PER_SEC << endl;

    return 0;
}