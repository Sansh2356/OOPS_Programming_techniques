#include <iostream>
#include <string>
#include <vector>
using namespace std;
// Code for deletion//
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
void print(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "  ";
        temp = temp->next;
    }
    cout << endl;
}
void insertAthead(node *&head, int d)
{
    node *newnode = new node(d);
    newnode->next = head;
    head = newnode;
}
void deletion(node *head, int position)
{
    if(position==1){
        node*temp=head;
        head=head->next;
        delete temp;
    }
    else{
    node *current = head;
    node *previous = NULL;
    int count = 1;
    while (count < position )
    {
            previous = current;
        current = current->next;
    
        count++;
    }
    previous->next = current->next;
    current->next = NULL;

    delete current;
    }
}
void insertAttail(node*&tail,int d){
node*test=new node(d);
tail->next=test;
tail=test;
}
int main()
{
    node *head = new node(42);
    node*tail=head;
    print(head);
    insertAthead(head, 76);
    print(head);
    insertAthead(head, 929);
    print(head);
    insertAthead(head, 4578);
    print(head);
    insertAthead(head, 456321);
    print(head);
    insertAttail(tail,23);
    print(head);
    cout<<"The value of tail before deletion is:-"<<tail->data<<endl;
        //deletion(head,6);
        insertAthead(head,654);
        insertAttail(tail,564);
         cout<<"The value of tail after deletion is:-"<<tail->data<<endl;
        print(head);
       
}
