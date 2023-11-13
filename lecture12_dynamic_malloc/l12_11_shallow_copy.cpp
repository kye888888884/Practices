#include <iostream>
#include <string>
using namespace std;

int idx = 0;

class Point
{
private:
    int x, y;
    int id;
    char *name;

public:
    Point(int _x, int _y) : x(_x), y(_y), id(++idx) // constructor
    {
        cout << "Point" << id << "(" << x << ", " << y << ") is created." << endl;
        name = new char[8];
    }
    Point(const Point &p) : x(p.x), y(p.y), id(++idx), name(p.name) // copy constructor
    {
        cout << "Point" << id << "(" << x << ", " << y << ") is copied." << endl;
    }
    ~Point()
    {
        cout << "Point" << id << "(" << x << ", " << y << ") is destroyed." << endl;
        delete name;
    }
    void setName(char *_name)
    {
        strcpy(name, _name);
    }
    void getName()
    {
        cout << name << endl;
    }
};

int main()
{
    Point p1(1, 2);
    p1.setName("p1"); // 타입캐스팅하기
    Point p2 = p1;    // shallow copy, copy constructor
    p2.setName("p2");
    p1.getName();

    // Point p3(3, 4);
}