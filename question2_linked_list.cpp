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
void insertathead(node *&head, int data)
{
    node *newnode = new node(data);
    newnode->next = head;
    head = newnode;
}
void print(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "  ";
        temp = temp->next;
    }
}
void insertAttail(node *&tail, int data)
{
    node *newnode = new node(data);
    tail->next = newnode;
    newnode->next = NULL;
    tail = newnode;
}
int length(node *&head)
{
    node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        temp = temp->next;
        count++;
    }
    return count;
}
void ReversePrint(node *&head, int length,node*&tail)
{

    
    node *temp1 = NULL;
    node *temp2 = head;
    node *temp3 = head;
    node *temp4 = tail;
    
    do
    { 

        temp2 = temp3->next;
        temp3->next = temp1;    
        temp1 = temp3;
        temp3 = temp2;
       
    } while (temp3 != NULL );

    cout << endl;

    while (temp4 != NULL)
    {
        cout << temp4->data << "  ";
        temp4 = temp4->next;
    }
}
int main()
{
    node *node1 = new node(78);
    node *head = node1;
    node *tail = node1;
    insertathead(head, 77);
    insertathead(head, 79);
    insertathead(head, 90);
    int f = length(head);
    cout << "The length of the linked list is:" << f << endl;
    print(head);
    ReversePrint(head, f,tail);
}
/*
node*prev=null;
node*next=null;
node*current=head;
current->next=prev;
current=current->next;
next=current;
prev=current; 




*/