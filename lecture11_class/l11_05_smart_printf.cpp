#include <stdio.h>

//*************************************//
// iostream
namespace NANE
{
    class Print
    {
    private:
    public:
        int len = 0;
        void print(int a)
        {
            len += printf("%d", a);
        }

        void print(char *str)
        {
            len += printf("%s", str);
        }

        Print &operator<<(int a)
        {
            print(a);
            return *this;
        }
        Print &operator<<(char *str)
        {
            print(str);
            return *this;
        }

        Print &operator<<(Print &(*f)(Print &p))
        {
            return f(*this);
        }
    };

    Print &endl(Print &p)
    {
        printf("\n");
        return p;
    }

    Print cout;
};
//*************************************//

using namespace NAME;
int main()
{
    int a = 10;
    char str[] = "Hello World!";

    cout << a;
    cout << str << endl;

    cout << a << str << endl;

    printf("\nlen = %d\n", cout.len);
    return 0;
}