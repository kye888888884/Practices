#include <iostream>
using namespace std;

void *operator new(size_t sz)
{
    cout << "aaaaaa" << endl;
    return malloc(sz); // 안하면 에러

    // 대충 동작
    // void *temp = malloc(sz);
    // if (temp is object) {
    //     temp()
    // }
    // return temp;
}

void operator delete(void *p)
{
    cout << "bbbbbb" << endl;
    // 파괴자 호출 후에 free
    free(p);
}

int main()
{
    int *p = new int;
    delete p; // 왜 안되지

    return 0;
}