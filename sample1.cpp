#include<bits/stdc++.h>
using namespace std;
// Implementation of stack data structure using arrays

// template<class T>
class Stack{
    int max_size;
    int  top;
    int  *arr;
    public:
    Stack(int max_size){
        arr =new int[max_size]; //Array of integers and stored in some pointer variable.
        // max_size=size;
        top=-1;

    }
    void push(int data){
        if(full())
        {
            cout<<"Stack overflow";
            return;
        }
        else{
            ++top;
            arr[top]=data;
        }
    }
    void pop(){
        if(empty()){
            cout<<"Stack underflow"<<endl;
            return;
        }
        else{
            --top;
        }
    }
    bool full(){
        return ((top+1)==max_size);
    }
    bool empty(){
        return top==-1;
    }
    int getTop(){
        if(empty()){
            return -1;
        }
        else{
            return arr[top];
        }
    }
    void print(){
        cout<<endl;
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
    s1.push(14);
    s1.print();
    s1.pop();
    cout<<s1.getTop()<<endl;
    return 0;
}