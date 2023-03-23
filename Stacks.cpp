#include <iostream>
using namespace std;
#include <string>
// Creating a stack by array//
//HW-) create a stack by linked list// 
class stack
{
public:
    int top;
    int size;
    int *array ;
    stack(int f)
    {
        this->top = -1;
        this->size = f;
        array=new int[size];
    }
    void pushback(int element)
    {
        // We will have to check whether the stack is full or not//
        if (size - top > 1)
        {
            top++;
            array[top] = element;
        }
        else
        {
            cout << "Stack has overflown" << endl;
        }
    }
    void popback()
    {
        if (top>=0 )
        {
            
            top--;
        }
        else
        {
            cout << "No element is present" << endl;
        }
    }
    void peek()
    {
        if(top==-1){
            cout<<"EMpty";
        }
        else{
            cout<<array[top];
        }
    }
    bool isempty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
int main()
{
   stack so(4);
   //From above step a stack has been created in memory//
   so.pushback(1);
   so.pushback(2);
    so.pushback(3);
    so.peek();
    cout<<endl;
cout<< so.isempty();

}