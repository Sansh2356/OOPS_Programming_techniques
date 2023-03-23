#include <iostream>
#include <string>
using namespace std;
#include<stack>
#include <queue>
//Implementation of queue by arrays and linked list//
class queue
{
public:
stack<int>st;
st
    int element;
    int *array;
    int size;
    int front = 0;
    int rear = 0;
    queue(int a)
    {
        this->size = a;
        array = new int[size];
    }
    // Pop/dequeue function//
    void inqueue()
    {
        if (rear == size - 1)
        {
            cout << "queue is full" << endl;
        }
        else
        {
            array[rear] = element;
            rear++;
        }
    }
   int dequeue()
    {
        if (front == rear)
        {
            cout << "queue is empty" << endl;
        }
        else
        {
            int ans=array[front];
            array[front] = -1;
            front++;
            if (front == rear)
            {
                front = 0;
                rear = 0;
            }
            return ans;
        }
    }
    bool isempty()
    {
        if (rear == front)
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
}