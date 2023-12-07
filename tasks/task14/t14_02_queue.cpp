#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

class my_queue
{
private:
public:
    node *head = nullptr;
    node *tail = nullptr;
    void Enqueue(int value)
    {
        node *n = new node;
        n->data = value;
        n->next = nullptr;

        if (tail == nullptr)
        {
            head = n;
            tail = n;
        }
        else
        {
            tail->next = n;
            tail = n;
        }
    }
    int Dequeue()
    {
        if (head == nullptr)
        {
            cout << "Queue is empty" << endl;
            return 0;
        }
        int value = head->data;
        node *n = head;
        head = head->next;
        delete n;
        return value;
    };
    void Peek();
};

int main()
{
    my_queue q;

    q.Enqueue(10);
    q.Enqueue(20);
    q.Enqueue(30);
    cout << q.Dequeue() << endl;
    cout << q.Dequeue() << endl;
    cout << q.Dequeue() << endl;
    cout << q.Dequeue() << endl;
    return 0;
}