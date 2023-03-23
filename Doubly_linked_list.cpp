#include <iostream>
#include <string>
using namespace std;
/*
Node structure gets changed and a given node stores 3 vlaues
namely a data,a pointer pointing towards next node and apointer pointing towards previous node
First step is same as singly linked list to create a node class and store all the variables in it
        Insertion at head in a doubly linked list:-
        1)Changing the previous pointer of the inital head is the extra step that is required to be done all other steps remain the same
        as in case of singly linked list.
        2)In case no intital node is there and the head pointer is pointing towards null then segmentation fault will occur
        in order to avoid that while inserting make an additional if else case for head==null.
        3)Deletion in a doubly linked list is also same as singly linked list only extra will be done to change the previous pointer also.
*/
class node
{
public:
    int data;
    node *next;
    node *previous;
    node(int f)
    {
        this->data = f;
        this->next = NULL;
        this->previous = NULL;
    }
};
void insert(node *&head, int d)

{
    if(head==NULL){
node*newnode=new node(d);
head=newnode;

    }
    else{
    node *node2 = new node(d);
    node2->next = head;
    head->previous = node2;
    head = node2;
    }
}
void print(node *&head)
{
    node *temp1 = head;
    while (temp1 != NULL)
    {
        cout << temp1->data << endl;
        temp1 = temp1->next;
    }
    cout << endl;
}
int getlength(node *&head)
{
    int count = 0;
    node *temp1 = head;
    while (temp1 != NULL)
    {
        count++;
        temp1 = temp1->next;
    }
    return count;
}
int insertattail(node *&tail, int m)
{
    node *node3 = new node(m);
    // Initially head is same as tail so no problem//
    tail->next = node3;
    node3->previous = tail;
    tail = node3;
}
void insertatmid(node *head, int s, int position)
{
    node *mid = new node(s);
    if(position==1){
        insert(head,s);
        return;
    }
    
    node *temp = head;
    int count = 1;
    while (position - 1 > count)
    {
        temp = temp->next;
        count++;
    }
    //node *mid = new node(s);
    mid->previous = temp;
    mid->next = temp->next;
    temp->next->previous=mid;
    temp->next = mid;
}

int main()
{
    node *node1 = new node(768);
    node *head = node1;
    node *tail = node1;
    insert(head, 47);
    //print(head);
    insertattail(tail, 818);
   // print(head);
    insertatmid(head, 6532,2);
    //print(head);
    insertatmid(head,1242,3);
    print(head);
    
    int f = getlength(head);
    cout << f << endl;
}