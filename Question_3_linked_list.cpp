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
void insertAtmid(node *&head, int f, int position)
{
    // In order to insert a node in the mid//
    if (position == 1)
    {
        insertAthead(head, f);
        return;
    }
    else
    {
        node *midnode = new node(f);
        node *temp = head;
        int count = 1;
        while (count < position - 1)
        {
            temp = temp->next;
            count++;
        }
        midnode->next = temp->next;
        temp->next = midnode;
    }
}
void Kgroup(node*&head,int k){
    if(head==NULL){
        return NULL;
    }
//Step-1 to reverse first K nodes//

node *temp1 = NULL;
    node *temp2 = head;
    node *temp3 = head;
    int count = 0;
    do
    {

        temp2 = temp3->next;
        temp3->next = temp1;    
        temp1 = temp3;
        temp3 = temp2;
        count++;
    } while (count != k );
    //Step -2  To provide recursive call//

    head->next=(temp3,k);
    //Step-3 to return the head pointer of the reversed linked list//
return temp3;

}

int main()
{
    node *node1 = new node(67);
    node *head = node1;
    insertAthead(head, 789);
   // print(head);
    insertAtmid(head, 7866, 2);
    //print(head);
    insertAtmid(head, 5446, 1);
    print(head);
}