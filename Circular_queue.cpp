#include <iostream>
using namespace std;
class queue
{
public:
    int size;
    int *array;
    int rear;
    int front;
    queue()
    {
        size = 1000;
        int *array = new int[size];
        rear = front = -1;
    }
    void inqueue()
    {
        // Check whether the given queue is full or not//
        if ((front == 0 && rear == size - 1) || (front))
        {
            cout << "Queue is empty" << endl;
        }
        else
        {
            // not empty//
            if (front == -1)
            {
                front = rear = 0;
                array[rear] = data;
            }
            else if (rear == size - 1 && front != 0)
            {

                rear = 0;
                array[rear] = data;
            }
            else
            {
                array[rear] = data;
                rear++;
            }
        }
    }
    void dequeue()
    {
        // Check whther the queue is empty or not//
        if (rear == -1 && front == -1)
        {
            cout << "the given queue is empty" << endl;
        }
        else
        {
            int ans = -1;
            array[front] = ans;
            // Queue is not empty//
            if (rear == front)
            {
                rear = front = -1;
            }
            else if (front = size - 1)
            {
                front = 0;
            }
            else
            {
                front++;
            }
        }
    }
};
int main()
{
}