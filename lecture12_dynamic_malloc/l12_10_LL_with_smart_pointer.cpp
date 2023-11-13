#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
    node(int d, node *n) : data(d), next(n) {}
};

class slist
{
private:
    node *head;
    node *current;

public:
    slist() : head(0), current(0) {}
    void push_front(int d) { head = new node(d, head); } // 머리에 추가
    slist &next()
    {
        if (!current)
            current = head;
        else
            current = current->next;
        return *this; // 이거 안써도 알아서 되네
    }
    int get()
    {
        return current->data;
    }
};

int main()
{
    slist s;
    s.push_front(10);
    s.push_front(20);
    s.push_front(30);
    s.push_front(40);

    cout << s.next().get() << endl;
    cout << s.next().get() << endl;
    cout << s.next().get() << endl;
    cout << s.next().get() << endl;
}