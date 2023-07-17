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

void reverselist(Node *n)
{
    //base case
    if(n==NULL)
    {
        return;
    }

    reverselist(n->next);
    cout<<n->val<<" ";
    
}
void normallist(Node *n)
{
    //base case
    if(n==NULL)
    {
        return;
    }
    cout<<n->val<<" ";
    normallist(n->next);
    
}
void reverse_linked_list(Node *&head,Node *cur)
{
   if(cur->next==NULL)
   {
        head=cur;
        return;
   }
   reverse_linked_list(head,cur->next);
   cur->next->next=cur;
   cur->next=NULL;
}
void printlist(Node *head)
{
    Node*tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}
void insert_At_Tail(Node *&head,int val)
{
    Node *newnode=new Node (val);
    if(head==NULL)
    {
        head=newnode;
        return;
    }
    Node*tmp=head;
    while(tmp->next!=NULL)
    {
        tmp=tmp->next;
    }
    tmp->next=newnode;

}

int main()
{ 
    Node *head=NULL;
    int val;
    while(true)
    {
        cin>>val;
        if(val==-1)
        break;
        insert_At_Tail(head,val);
    } 
    normallist(head);
    cout<<endl;
   reverselist(head);
   cout<<endl;
   reverse_linked_list(head,head);
   printlist(head);

    
  return 0;
}