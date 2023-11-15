#include <iostream>
#include <memory>
using namespace std;

int main()
{
    unique_ptr<int> p1(new int);

    *p1 = 10;
    cout << *p1 << endl;

    unique_ptr<int> p2 = std::move(p1);
    cout << *p2 << endl;
    return 0;
}