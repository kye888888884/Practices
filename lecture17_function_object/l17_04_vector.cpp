#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    // for (auto i : v)
    for (auto i = v.begin(); i != v.end(); i++)
        cout << *i << endl;

    cout << endl;
    cout << &v[0] << endl
         << v.capacity() << endl;

    v.push_back(50);
    cout << &v[0] << endl
         << v.capacity() << endl; // 자동으로 복붙 후 크기 2배로 늘임
}