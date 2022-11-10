/*
Author:Aditya Khatode
Date:21/10/2021
Topic: Singly Linked List operations
*/
#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};
class LLO
{
public:
    Node *head, *p,*q,*nn;
    int n;
    Node *create();
    Node *insert(Node *, int, int);
    Node *Delete(Node *, int);
    void print(Node *);
    int count(Node *);
    Node *search(int key);
};

Node *LLO::create()
{
    cout << "How many items you want to insert:" << endl;
    cin >> n;
    cout << "Enter items One by One:\n";
    head = NULL;
    head = new Node;
    cin >> head->data;
    head->next = NULL;
    p = head;
    for (int i = 1; i < n; i++)
    {
        p->next = new Node;
        p = p->next;
        cin >> p->data;
        p->next = NULL;
    }
    return (head);
}
Node *LLO::insert(Node *nn, int LOC, int X)
{
    cout << "Enter location where you want to insert" << endl;
    cin >> LOC;
    cout << "Enter data you want to insert" << endl;
    cin >> X;
    nn = new Node;
    nn->data = X;
    nn->next = NULL;
    if (head == NULL)
    {
        nn->next = head;
        return (head);
    }
    else
    {
        p = head;
        for (int i = 1; i < LOC - 1; i++)
        {
            p = p->next;
        }
        nn->next = p->next;
        p->next = nn;
    }
    return (head);
}
void LLO::print(Node *p)
{
    while (p != NULL)
    {
        cout << "<-" << p->data << "->";
        p = p->next;
    }
}
Node *LLO::Delete(Node *head, int X)
{
    cout << "Enter an item you want to delete"<< "\n";
    cin >> X;
    if (X== head->data)
    {
        p=head;
        head=head->next;
        delete p;
    }
    else
    {
        p=head;
        while(X!=(p->next)->data && p->next!=NULL){
            p=p->next;
        }
        if(p->next!=NULL){
            q=p->next;
            p->next= (p->next)->next;
            delete q;
        }
    }
    return (head);
}
int LLO::count(Node *head){
    int count1=0;
    for(p=head;p!=NULL;count1++)
    {
        p=p->next;
    }
    return count1;
}
Node* LLO::search(int key)
{
    Node  *p;
    p=head;
    int count=1;
    cin>>key;
    while(p!=NULL)
    {
        if(key==p->data)
        {
            cout<<"Element present at position =>"<<count<<endl;
        }
        count=count+1;
        p=p->next;
    }
    return(head);
}
int main()
{
    Node *HEAD, *nn,*p;
    int LOC, X ,key;
    LLO l;
    int ch,Total;
    char x;
    do
    {
        cout << "Enter your choice"<< "\n";
        cin >> ch;
        switch(ch){
            case 1:cout<<"Create  a linked list"<<"\n";
            HEAD=l.create();
            break;
            case 2:cout<<"Insert an item in a linked list"<<"\n";
            l.insert(nn,LOC,X);
            break;
            case 3:cout<<"Delete an item of linked list"<<"\n";
            l.Delete(HEAD,X);
            break;
            case 4:cout<<"Display linked list"<<"\n";
            l.print(HEAD);
            break;
            case 5:cout<<"How many items are present in a linked list"<<'\n';
            Total=l.count(HEAD);
            cout<<Total;
            break;
            case 6:cout<<"Enter element you want to search"<<"\n";
            l.search(key);
            break;
            case 7:exit;
            break;
        }
        cout<<"\n Do you want to continue"<<endl;
        cin>>x;
    }while(x=='y'|| x=='Y');
    return 0;
}