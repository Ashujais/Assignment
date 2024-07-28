#include<iostream>
using namespace std;

class Queue
{
    public:

    int queue[1000];
    int max_capacity;
    int fornt;
    int rear;
    int size;

    Queue()
    {
        this->fornt = 0;
        this->rear = -1;
        this->max_capacity = 1000;
        this->size=0;
    }

    void enqueue(int data)
    {
        if(size==max_capacity)
        {
            cout<<"Maximum capacity has been reached";
            return;
        }
        rear = (rear+1)%max_capacity;
        queue[rear] = data;
        size++;
    }

    void dequeue()
    {
        if(size==0)
        {
            cout<<"The size of the queue is 0 and there are no more elements to deque";
            return;
        }
        cout<<"The element to be dequeue is "<<queue[fornt]<<endl;
        fornt++;
        size--;
    }

    void peekqueue()
    {
        cout<<"The element at the fornt of the queue is "<<queue[fornt]<<endl;
    }

    void sizeofqueue()
    {
        cout<<"The queue currently has "<<size<<"ememnts in it"<<endl;
    }
};

int main()
{
    Queue q;

    q.enqueue(5);
    q.enqueue(6);
    q.enqueue(7);
    q.enqueue(8);
    q.enqueue(1);

    q.dequeue();
    q.dequeue();

    q.peekqueue();

    q.dequeue();
    q.peekqueue();
    
    q.dequeue();

    return 0;
}