#include <iostream>
using namespace std;
const int Size_of_queue = 5;

class Queue
{
private:
    int queue_array[Size_of_queue] = {0};
    int rear = 0;

public:
    void enqueue(int x)
    {
        if ((rear) == Size_of_queue)
        {
            cout << "Overflow !! Insertion not allowed\n";
        }
        else
        {
            queue_array[rear] = x;
            rear++;
            cout << "Element " << x << " inserted!!\n";
        }
    };
    void dequeue()
    {
        if ((rear - 1) == -1)
        {
            cout << "underflow !! deletion not allowed\n";
        }
        else
        {
            int temp[Size_of_queue] = {0};
            for (int i = 0; i <= (rear); i++)
            {
                temp[i] = queue_array[i];
            }

            for (int i = 0; i <= (rear - 1); i++)
            {
                queue_array[i] = temp[i + 1];
            }

            rear--;
        }
    };

    void display()
    {
        cout << "\nelements in queue are : ";
        for (int i = 0; i < rear; i++)
        {
            cout << queue_array[i] << " ";
        }
    }
};

int main()
{
    Queue queueobj;
    queueobj.dequeue();
    queueobj.enqueue(1);
    queueobj.enqueue(2);
    queueobj.enqueue(3);
    queueobj.enqueue(4);
    queueobj.enqueue(5);
    queueobj.enqueue(6);
    queueobj.display();
    queueobj.dequeue();
    queueobj.dequeue();
    queueobj.display();
    return 0;
}