#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> vec1;
    // list<int>::iterator it; // 너무 길어

    for (size_t i = 0; i < 8; i++)
    {
        vec1.push_back(i);
    }

    // auto 키워드
    // for (auto it = vec1.begin(); it != vec1.end(); it++)
    for (auto it: vec1) // 더 짧게
    {
        cout << it << endl;
    }
    
    return 0;
}