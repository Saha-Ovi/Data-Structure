#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:

    int val;
    Node *prev;
    Node *next;
    

    //constructor
    Node(int val)
    {
        this->val=val;
        this->prev=NULL;
        this->next=NULL;
    }

};
void printlist(Node *head)
{
    Node *tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
}
int main()
{  
    // Node

    Node *head= new Node(10);
    Node *a= new Node(20);
    Node *b= new Node(30);
    Node *c= new Node(40);
    Node *d= new Node(50);

    //  Connections
    head->next=a;
    a->prev=head;
    a->next=b;
    b->prev=a;
    b->next=c;
    c->prev=b;
    c->next=d;
    d->prev=c;

    // print linked list
    
    printlist(head);



    
  return 0;
}