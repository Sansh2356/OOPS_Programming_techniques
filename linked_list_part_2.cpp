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
    node *ptr = new node(d);
    ptr->next = head;
    head = ptr;
}

void print(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
}
void tail(node*&head,int data){
node*ptr=new node(data);
head->next=ptr;
head=ptr;
}
int main()
{
    node *head = new node(45);
    insert(head, 69);
    print(head);

    cout << "*******************" << endl;
    insert(head, 56);
    // Using pass by refernce in a parameter will allow us to change the defination of head in the entire function and will automatically change the head
    // to the new head position.
    print(head);
    cout<<" --------------------------"<<endl;
    tail(head,906);
    print(head);
}