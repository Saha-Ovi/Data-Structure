#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:

    int val;
    Node *next;

    //constructor
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
    }

};

void print_linkedlist(Node *head)
{
    Node *tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
}
int size(Node *head)
{
    Node *tmp=head;
    int count=0;
    while(tmp!=NULL)
    {
        count++;
        tmp=tmp->next;
    }
    return count;
}
void insert_position(Node *head,int pos,int val) //O(N) time complexity
{
    Node *newnode= new Node(val);
    Node*tmp=head;
    for(int i=1;i<=pos-1;i++)
    {
        tmp=tmp->next;
    }
    newnode->next=tmp->next;
    tmp->next=newnode;
}
void insert_head(Node *&head,int val)     //O(1) time comlexity
{
    Node *newnode=new Node(val);
    newnode->next=head;
    head=newnode;
}
void insert_tail(Node *&head,Node *&tail,int val)  //O(1) time complexity
{
    Node *newnode= new Node(val);
    Node *tmp=head;
    if(tmp==NULL)
    {
        head=newnode;
        tail=newnode;
    }
    tail->next=newnode;
    tail=newnode;
}

int main()
{  
    // Node 
    Node *head=new Node(10);
    Node *a=new Node(20);
    Node *b=new Node(30);
    Node *c=new Node(40);
    Node *d=new Node(50);
    Node*tail=d;

    // Connections
     head->next=a;
     a->next=b;
     b->next=c;
     c->next=d;
     
    //  print_linkedlist(head);
     int pos;
     cin>>pos;
     if(pos>size(head))
     {
        cout<<"Invalid Index";
     }
     else if(pos==0)
     {
        int val;
        cin>>val;
        insert_head(head,val);
        print_linkedlist(head);
     }
     else if(pos==size(head))
     {
        int val;
        cin>>val;
        insert_tail(head,tail,val);
        print_linkedlist(head);
     }
     else
     {
        int val;
        cin>>val;
        insert_position(head,pos,val);
        print_linkedlist(head);
     }  
  return 0;
}