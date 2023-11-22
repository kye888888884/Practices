#include <iostream>
using namespace std;

// bool up(int a, int b) { return a > b; } // 느림
struct UP
{
    bool operator()(int a, int b) { return a > b; }
};
struct DOWN
{
    bool operator()(int a, int b) { return a < b; }
};

template <typename T, typename U>
void Sort(U x, U n, T cmp)
{
    for (auto i = x; i < n; i++)
        for (auto j = i; j < n; j++)
            if (cmp(*i, *j))
            {
                auto temp = *i;
                *i = *j;
                *j = temp;
            }
}

int main()
{
    int arr[] = {1, 3, 5, 2, 4};
    // Sort(arr, 5, UP());
    Sort(arr, arr+5, [](int a, int b)
         { return a > b; }); // 람다 표현식

    for (auto i : arr)
        cout << i << " ";
    cout << endl;

    return 0;
}