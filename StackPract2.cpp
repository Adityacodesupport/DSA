#include<bits/stdc++.h>
using namespace std;

class Stack
{
    int top;
    int *arr;
    int max_size;
    public:
    Stack(int max_size)
    {
        arr=new int(max_size);
        top=-1;
    }
    void push(int data)
    {
        if(full())
        {
            cout<<"stack overflow"<<endl;
        }
        else{
            ++top;
            arr[top]=data;
        }
    }
    bool full()
    {
        return ((top+1)==max_size);
    }
    bool empty()
    {
        return top==-1;
    }
    void pop()
    {
        if(empty())
        {
            cout<<"stack underflow"<<endl;
        }
        else{
            --top;
        }
    }
    int getTop()
    {
        if(empty())
        {
            return -1;
        }
        else{
            return arr[top];
        }
    }
    void print()
    {
        for(int i=0;i<top+1;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main()
{
    Stack s1(10);
    s1.push(2);
    s1.push(4);
    s1.push(8);
    s1.print();
    s1.pop();
    s1.print();
    cout<<s1.getTop()<<endl;
    return 0;
}