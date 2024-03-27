#include <iostream>
using namespace std;

class Queue {
private:
    int size;
    int front;
    int rear;
    int *Q;
public:
    Queue(){size = 10; front = rear = -1; Q = new int[size];}

    Queue(int size) {
        this->size = size;
        front = rear = -1;
        Q = new int[this->size];
    }

    void enqueue(int x) {
        if(rear == size-1) {
            cout<<"Queue is full";
        }
        else {
            rear++;
            Q[rear] = x;
        }
    }
    int dequeue() {
        int x = -1;
        if(front == rear) {
            cout<<"Queue is empty";
        }
        else {
            front++;
            x = Q[front];
        }
        return x;
    }
    void Display() {
        for (int i = front+1; i <= rear; i++) {
            cout<<Q[i]<<" ";
        }
        cout<<endl;
    }

};
int main() {
    Queue q(5);
    q.enqueue(1);
    q.enqueue(3);
    q.enqueue(5);
    q.Display();

    cout<<"The dequeued element is:"<<q.dequeue()<<endl;
    q.Display();
    return 0;
}