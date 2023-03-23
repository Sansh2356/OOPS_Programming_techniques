#include <iostream>
#include <string>
using namespace std;

/*


Linked list is a type of dynamic array which stores the data along with the address of the next node
node store the address of next node and linear assembling of all nodes comprise to form singly linked list.
types of linked lists consists of-:
1)singly linked list
2)doubly linked list
3)circular linked list
4)doubly circular linked list
advantages of linked lists over array and vector is that it can be shrinked or expanded during the run time of code.

Firstly implementation of a node which will store data along with the address of next node
                Advantages of linked lists:-
1)Dynamic in nature
2)Insertion and Deletion of elements is much easier3

            Disadvantages of linked list:-
1)Random access is not possible and hence binary search cannot be implemented much easily
2)Not cache friendly and extra memory is required to store pointer of each node
            Operations to be performed in a linked list are:-
1)Insertion-done
2)Deletion
3)Transversal-done
4)Display-done

0  1  2  3
1->3->2->4->

1,1,1,1,1

5

1.
p = 3
n = 2(3->next,p->next)

2.
i = 5 (new)
->5->

p->next = i;
i->next = n;

  |
1,3,2,4
1->3->5->2->4->
Deletion from a linked list:-
Firstly making of a destructor for freeing the memory space
Secondly-
While loop condition and making of two pointers namely current and previous and then to avoid segmentation fault
to make the loop being deleted point towards a null pointer and also

*/
class node
{
public:
    int data;
    node *next;
    node(int d)
    {
        this->data = d;
        this->next = NULL;
    }

    
};
void tail(node *head, int f)
{
    node *ptr2 = new node(f);
    head->next = ptr2;
    head = ptr2;
}
void print(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
}
void insert(node *&head, int m)
{
    node *pointer = new node(m);
    pointer->next = head;
    head = pointer;
}
void midinsert(node *head, int position, int d)
{
    if (position == 1)
    {
        insert(head, d);
    }
    node *temp = head;
    int count = 1;

    while (position - 1 > count)
    {
        temp = temp->next;
        count++;
    }
    node *mid = new node(d);

    mid->next = temp->next;
    temp->next = mid;
}
void deletion(int position, node *&head)
{
    if (postion == 1)
    {
        node *temp = head;
        head = head->next;
        head->next = NULL;
        delete temp;
    }
    else
    {
        node *current = head;
        node *previous = NULL;
        int count = 1;
        while (count < postion - 1)
        {
            current = current->next;
            previous = current;
            count++;
        }
        previous->next = current->next;
        current->next = NULL;
        delete current;
    }
}
int main()
{
    node *head = new node(98);
    node *ptr = head;
    tail(ptr, 78);
    // print(head);
    insert(head, 9293);
    //  print(head);
    // we want to insert between 98 and 78//
    midinsert(head, 2, 727);
    print(head);
    // Deletion from a linked list//
    deletion()
}
