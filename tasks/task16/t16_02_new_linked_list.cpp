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
    node *tail;
    node *current;

public:
    slist() : head(0), tail(0), current(0) {}
    void push_front(const int &d)
    {
        if (!head)
            head = tail = new node(d, head);
        else
            head = new node(d, head);
    }
    void push_back(const int &d)
    {
        if (!head)
            head = tail = new node(d, head);
        else
            tail = tail->next = new node(d, 0);
    }
    slist &next()
    {
        if (!current)
            current = head;
        else
            current = current->next;
        return *this;
    }
    int get()
    {
        return current->data;
    }
    void print()
    {
        node *p = head;
        while (p)
        {
            cout << p->data << " ";
            p = p->next;
        }
        cout << endl;
    }
};

int main()
{
    slist s;

    s.push_front(10);
    s.push_front(20);
    s.push_front(30);
    s.push_back(40);
    s.print();
    return 0;
}