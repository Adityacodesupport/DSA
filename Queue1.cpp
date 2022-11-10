#include<bits/stdc++.h>
using namespace std;

class Queue
{
    int *arr;
    int front;
    int rear;
    int max_size;
    int ans;
    public:
    Queue(int default_size=10)
    {
        arr=new int(default_size);
        front=-1;
        rear=-1;
        max_size=default_size;
    }
    bool empty()
    {
        return front==rear;
    }
    bool full()
    {
        return rear==max_size;
    }
    int getFront()
    {
        if(empty())
        {
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        else{
            ans = arr[front];
            return ans;
        }
    }
    int getBack()
    {
        if(empty())
        {
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        else{
            return arr[rear-1];
        }
    }
    void enqueue(int d)
    {
        if(full())
        {
            cout<<"Queue Overflow"<<endl;
            return;
        }
        else{
            if(front==-1)
            {
                front=0;
                rear=0;
                arr[rear]=d;
            }
            else{
                arr[rear]=d;
            }
            rear++;
        }
    }

    void dequeue()
    {
        if(empty())
        {
            cout<<"Queue Underflow"<<endl;
            return;
        }
        else{
            arr[front]=-1;
            front++;
            if(front==rear)
            {
                front=-1;
                rear=-1;
            }
        }
    }
    void print()
    {
        if(empty())
        {
            cout<<"Queue is empty"<<endl;
        }
        else{
            for(int i=0;i<max_size;i++)
            {
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
    }
};
int main()
{
    Queue s=Queue();
    s.enqueue(10);
    s.enqueue(20);
    s.enqueue(30);
    s.enqueue(40);
    s.enqueue(50);
    s.enqueue(60);
    s.enqueue(70);
    s.enqueue(80);
    s.enqueue(90);
    s.enqueue(100);
    s.print();
    s.dequeue();
    s.dequeue();
    // s.dequeue();
    // s.dequeue();
    // s.dequeue();
    // s.dequeue();
    // s.dequeue();
    // s.dequeue();
    // s.dequeue();
    // s.dequeue();
    // s.dequeue();
    // s.enqueue(45);    
    s.getFront();
    s.getBack();
    s.print();
    return 0;
}