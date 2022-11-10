#include<bits/stdc++.h>
using namespace std;

class CircularQueue
{
    int * arr;
    int front;
    int rear;
    int max_size;
    public:
    CircularQueue(int default_size=10)
    {
        arr=new int(default_size);
        front=-1;
        rear=-1;
        max_size=default_size;
    }
    bool empty()
    {
        return (front==-1 && rear==-1);
    }
    bool full()
    {
        return( rear!=-1 && front==rear);
    }
    void enqueue(int data)
    {
        if(full())
        {
            cout<<"Queue Overflow";
            return;
        }
        else{
            if(empty())
            {
                front=0;
                rear=0;
                arr[rear]=data;
            }
            else{
                arr[rear]=data;
            }
            rear=(rear+1)%max_size;
        }
    }
    int getFront()
    {
        return arr[front];
    }
    int getRear()
    {
        if(empty())
        {
            cout<<"Empty re baba: kayko chahiye tereko rear data";
        }
        else{
            return arr[(rear-1)+max_size%max_size];
        }
    }
    int getMaxsize()
    {
        return max_size;
    }
    void dequeue()
    {
        if(empty())
        {
            cout<<"Queue underflow";
            return;
        }
        else{
            arr[front]=-1;
            front=(front+1)%max_size;
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
    CircularQueue cq=CircularQueue(5);
    int n;
    cin>>n;
    // cq.enqueue(25);
    // cq.enqueue(26);
    // cq.enqueue(27);
    // cq.enqueue(28);
    // cq.enqueue(29);
    // cq.print();
    // // cq.enqueue(30);
    // cq.dequeue();
    // cq.dequeue();
    // cq.dequeue();
    // cq.enqueue(31);
    // cq.print();
    for(int i=0;i<n;i++)
    {
        int data;
        cin>>data;
        cq.enqueue(data);
    }
    cq.print();
    // cq.enqueue(23);
    
    return 0;
}