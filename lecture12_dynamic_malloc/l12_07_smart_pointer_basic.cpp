#include <iostream>
using namespace std;

class smartptr
{
private:
    int *ptr;

public:
    smartptr(int *p = 0) : ptr(p) {}
    ~smartptr()
    {
        cout << "smartptr destructor" << endl;
        delete ptr;
    }
};

int main()
{
    // int *a = new int;
    smartptr ptr = new int;

    return 0;
}