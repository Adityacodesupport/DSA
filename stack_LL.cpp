#include <bits/stdc++.h>
using namespace std;

class Stack
{
    struct Node
    {
        int data;
        Node *next;
        Node(int d)
        {
            data = d;
            next = NULL;
        }
    };
    Node *head;
    int size;
    public:
    Stack(){
        head=NULL;
        size=0;
    }
    bool empty()
    {
        return head == NULL;
    }
    void push(int data)
    {
        Node *newNode=new Node(data);
        if(empty()){
           head=newNode;
        }
        else{
            newNode->next=head;
            head=newNode;
            size +=1;
        }
    }
    void pop()
    {
        if(empty())
        {
            cout<<"Stack Underflow"<<endl;
        }
        else{
            Node *toDelete=head;
            head=head->next;
            delete toDelete;
            size-=1;
        }
    }
    int top()
    {
        if(empty())
        {
            return -1;
        }
        else{
            return head->data;
        }
    }
    int getSize()
    {
        return size;
    }
    void Print()
    {
        if(empty())
        {
            cout<<"Stack is empty"<<endl;
            return;
        }
        else{
            Node *curr=head;
            while(curr!=NULL)
            {
                cout<<curr->data<<" ";
                curr=curr->next;
            }
            cout<<endl;
        }
    }

};
int main()
{
    // stack st=stack();
    // Stack s;
    // s.push(14);
    // s.push(25);
    // s.push(34);
    // s.Print();
    // s.pop();
    // s.pop();
    // s.pop();
    // s.pop();
    // s.Print();
    // cout<<"Top of stack is= "<<s.top()<<"\n";
    // cout<<"Size of stack is="<<s.getSize();
    // s.Print();
    // return 0;
    stack<int> st1;
    stack<int> st2;

    // First stack--
    st1.push(14);    
    st1.push(10);    
    st1.push(12);

    // Second stack--    
    st2.push(78);
    st2.push(89);
    st2.push(85);

    st1.swap(st2);

    cout<<"stack1=";
    while(!st1.empty())
    {
        cout<<st1.top()<<" ";
        st1.pop();
    }

    cout<<endl<<"stack2=";
    while(!st2.empty())
    {
        cout<<st2.top()<<" ";
        st2.pop();
    }
}