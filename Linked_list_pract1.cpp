#include<iostream>

using namespace std;

struct Node{
    int data;
    Node* next;
};

Node *createLL(int x)
{
    Node *head,*temp;
    int n;
    cin>>n;
    head =new Node;
    cin>>head->data;
    head->next=NULL;
    temp=head;
    for(int i=0;i<=n+1;i++)
    {
        temp->next=new Node;
        temp=temp->next;
        cin>>temp->data;
        temp->next=NULL;
    }
    return(head);
}
void Print(Node *temp)
{
    while(temp->next!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
int main()
{
    Node *temp;
    temp=createLL(4);
    Print(temp);
    return 0;
} 