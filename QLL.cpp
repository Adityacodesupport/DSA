#include <bits/stdc++.h>
using namespace std;

class QLL
{
    struct Node
    {
        int data;
        struct Node *next;
        Node(int d)
        {
            int data = d;
            next = NULL;
        }
    };
    Node *head;
    Node *tail;
    Node *front;
    int size;
    public:
    QLL()
    {
        head = NULL;
        size = 0;
    }
    bool empty(){
        return head==NULL;
    }
    void enqueue(int data){
        Node *nn=new Node(data);
        if(empty())
        {
            head=nn;
            front=tail=nn;
        }
        else{
            tail->next=nn;
            tail=tail->next;
            size+=1;
        }
    }
    void dequeue(){
        Node *temp;
        head=head->next;
        temp=front;
        free(temp);
        front=head;
    }
    int getFront(){
        return front->data;
    }
    int getRear(){
        return tail->data;
    }
    void print()
    {
        if(empty())
        {
            cout<<"Queue is empty"<<endl;
        }
        Node *p;
        for(p=head;p->next!=NULL;p=p->next) 
        {
            cout<<p->data<<" ";
        }
        cout<<endl;
    }
};
int main()
{
    QLL q;
    q.enqueue(25);
    q.enqueue(26);
    q.enqueue(27);
    q.enqueue(28);
    q.print();
    return 0;
}
