#include <iostream>
#include <string>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int f)
    {
        this->data = f;
        this->next = NULL;
    }
};
void insert(node *&head, int d)
{
    node *pointer = new node(d);
    pointer->next = head;
    head = pointer;
}

void tailinsert(node *&tail, int value)
{
    node *ptr2 = new node(value);
    tail->next = ptr2;
    tail = ptr2;
}
void mid(node *&head, int position, int data)
{
    if (position == 1)
    {
        insert(head, data);
    }
    int count = 1;
    node *temp = head;
    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    }
    node *mid = new node(data);
    mid->next = temp->next;
    temp->next = mid;
}
void print(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    node *head = new node(99);
    node *tail = head;
    // Insertion of first node is done//
    insert(head, 76);
    tailinsert(tail, 919);
}