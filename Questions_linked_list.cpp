#include <iostream>
#include <string>
using namespace std;
// Question 1-Reversing a linked list//
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
void insertAthead(node *&head, int d)
{
    node *newnode = new node(d);
    newnode->next = head;
    head = newnode;
}
void print(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "  ";
        temp = temp->next;
    }
}
void reversePrint(node *&tail, node *&head)
{
  
}
int main()
{
    node *node1 = new node(78);
    node *head = node1;
    node *tail = node1;
    insertAthead(head, 98);
    insertAthead(head, 99);
    insertAthead(head, 100);
    insertAthead(head, 101);
    insertAthead(head, 102);
    print(head);
    
}