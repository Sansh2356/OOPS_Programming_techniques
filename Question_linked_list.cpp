#include <iostream>
#include <string>
using namespace std;
// Q)To find middle node and return its value//
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
        cout << temp->data <<"  ";
        temp = temp->next;
    }
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
int mid(node *&head, int length)
{

    // node *temp = head;
    // int count = 0;

    // if (length % 2 == 0)
    // {

    //      //cout<<"hello ";

    //     while (count = (length / 2))
    //     {
    //         temp = temp->next;
    //         count++;
    //     }
    //     cout<< temp->data;
    // }
    // else
    // {
    //      cout<<"hello ";
    //     while (count == (length / 2))
    //     {
    //         temp = temp->next;
    //         count++;
    //     }
    //    cout<< temp->data<<endl;
    // }
    node *temp = head;
    int count = 1;
    // while (count == length / 2)
    // {
    //     temp = temp->next;
    //     count++;
    // }
    // cout << temp->data << endl;
    do{
        count++;
        temp=temp->next;
    }
    while(count==length/2);
    cout<<temp->data<<endl;
}
int main()
{
    node *node1 = new node(76);
    node *head = node1;
    insertAthead(head, 77);
    insertAthead(head, 78);
    insertAthead(head, 79);
   // insertAthead(head,75);
    int f = length(head);
    cout << f << endl;
    mid(head, f);
    print(head);
}