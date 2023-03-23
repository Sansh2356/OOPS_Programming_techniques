#include <iostream>
#include <string>
using namespace std;
/*
Insertion of a node-:
Creating of insert function and passing pointer in parameter by reference
Initially head is  a pointer which store the address of head node
When we will insert another node with new data then it will store the head pointer as it will now point to next node
and simultaneously the next node will point to null pointer.
so inorder to insert a new node we will have to create an insert function and pass the address of inital node then we
will create a new node and pointer for that node which will assign next pointer in the class to the pointer of intial head node.
Transversing a linked list:-

*/
class node{
    public:
    int data;
    node*next;
    node(int f){
        this->data=f;
        this->next=NULL;
        //next pointer will point the address of next node and will be stored in all the nodes with different values//
    }
    
};
int main(){
    node*ptr=new node(67);
    //The above is a new node inserted and it will be the head node and its address will be stored in ptr//
    node*ptr2=new node(89);
    ptr2->next=ptr;
    //The above is another node that will store 89 and store the pointer named ptr 
    node*ptr3=new node(634);
    ptr3->next=ptr2;
    cout<<ptr3<<endl;//address of head node//
    cout<<ptr2<<endl;//address of mid node//
    cout<<ptr<<endl;//address of tail node//
    cout<<ptr->next<<endl;//address of next  node that will be null//
    cout<<ptr2->next<<endl;//adddress of next node that will be same as ptr//
    cout<<ptr3->next<<endl;//address of next node that will be same as ptr2//
            
            node*temp=ptr3;
            //The above line initialise a pointer that will point towards the address of first node//
            //so we will have to move that pointer so that it will point towards the address of next node with each passing iteration//
            while(temp!=NULL){
                cout<<temp->data<<endl;
                temp=temp->next;
            }
    
}