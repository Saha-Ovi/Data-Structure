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
   Node *head=NULL;
   Node *tail=NULL;
    //  print_linkedlist(head);
    int v;
    while(true)
    {
        cin>>v;
        if(v==-1)
        {
            break;
        }
        insert_tail(head,tail,v);
    }
    print_linkedlist(head);
  return 0;
}