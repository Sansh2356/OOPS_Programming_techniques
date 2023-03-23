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
insert(node *&tail, int data, int value)
{
    if (tail == NULL)
    {
        node *newnode = new node(data);
        tail = newnode;
        newnode->next = newnode;
    }
    else
    {
        node *temp = tail;
        while (temp->data != value)
        {
            temp = temp->next;
        }
        node *test = new node(data);
        test->next = temp->next;
        temp->next = test;
    }
}
print(node *tail)
{
    node *temp = tail;
    while (temp != tail)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    node *tail = NULL;
    insert(tail, 45, 0);
    print(tail);
}