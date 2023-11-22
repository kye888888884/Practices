#include <iostream>
using namespace std;

template <typename T>
struct Node
{
    T data;
    Node *next;
    Node(T a, Node *n) : data(a), next(n) {}
};

template <typename T>
class slist
{
    Node<T> *head;
    Node<T> *current;

public:
    slist() : head(0) {}
    void push_front(const T &a) { head = new Node<T>(a, head); }
    T &operator*() { return current->data; }

    slist<T> &next()
    {
        current = current->next;
        return *this;
    }

    slist<T> &begin()
    {
        current = head;
        return *this;
    }

    bool end()
    {
        return current == 0;
    }
};

int main()
{
    slist<int> s;

    s.push_front(10);
    s.push_front(20);
    s.push_front(30);
    s.push_front(40);

    for (s.begin(); !s.end(); s.next())
    {
        cout << *s << endl;
    }
    // 순회는 잘 되지만, 아직 xfind와 호환되지 않음
    // 자료형, 연산자 모두 안맞음.
}