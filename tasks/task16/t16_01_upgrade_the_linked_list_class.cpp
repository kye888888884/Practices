#include <iostream>
using namespace std;

class my_list
{
private:
    struct node
    {
        int data;
        node *next = nullptr;
    };
    node *head = nullptr;
    node *tail = nullptr;
    node *current_node = nullptr;
    int length = 0;
    int current = 0;

public:
    my_list &append(int value)
    {
        node *n = new node;
        n->data = value;
        n->next = nullptr;

        if (length == 0)
        {
            head = n;
            tail = n;
            current_node = n;
        }
        else
        {
            tail->next = n;
            tail = n;
        }
        length++;
        return *this;
    }
    my_list &next()
    {
        current++;
        current_node = current_node->next;
        return *this;
    }
    int get()
    {
        return current_node->data;
    }
    void rewind()
    {
        current = 0;
        current_node = head;
    }
    void info() { cout << "length: " << length << ", current: " << current << endl; }
    my_list operator+(int value)
    {
        return append(value);
    }
    my_list &operator+(my_list &l)
    {
        tail->next = l.head;
        tail = l.tail;
        length += l.length;
        return *this;
    }
    my_list &operator-(int n)
    {
        if (length == 0)
        {
            cout << "Error: empty list" << endl;
            return *this;
        }
        if (n >= length)
        {
            cout << "Error: out of index" << endl;
            return *this;
        }

        node *p = head;    // 제거할 노드
        node *prev = head; // 제거할 노드의 이전 노드
        int i = n;
        while (i-- > 0)
        {
            prev = p;
            p = p->next;
        }

        if (p == head)
            head = p->next;
        else
            prev->next = p->next;
        delete p;
        length--;

        return *this;
    }
    void printall()
    {
        if (length == 0)
        {
            cout << "Empty" << endl;
            return;
        }
        node *p = head;
        while (p != nullptr)
        {
            cout << "[" << p->data << "]";
            p = p->next;
        }
        cout << endl;
    }
};

int main()
{
    my_list l;
    my_list ll;

    l.append(10).append(20).append(30).append(40);

    l.next().next();
    cout << l.get() << endl; // print out 30

    ll = ll + 100 + 200 + 300; // append values 100, 200 and 300 to ll.

    ll.next();
    cout << ll.get() << endl; // print out 200

    ll = ll + l; // concatenate the list 'l' to the list 'll';

    // The list 'll' would be '[100][200][300][10][20][30][40]'

    //                   index:   0    1    2   3   4   5   6

    ll.printall();

    ll.next().next().next();
    cout << ll.get() << endl; // print out 20

    ll = ll - 5; // remove the 5-th node.
    ll.next();
    ll.printall();

    cout << ll.get() << endl; // print out 40, not 30.

    for (int i = 0; i < 7; i++)
    {
        ll = ll - 0;
        ll.printall();
    }
    return 0;
}