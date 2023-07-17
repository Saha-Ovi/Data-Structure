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
void printit(Node *n)
{
    if(n==NULL)
    return;
    cout<<n->val<<" ";
    printit(n->next);
    cout<<endl;
      
}

void printitreverse(Node *n)
{
    if(n==NULL)
    return;
    printitreverse(n->next);
    cout<<n->val<<" ";
    
}

int main()
{  
    Node*head=NULL;
    Node*tail=NULL;

    int n;
    while(true)
    {
        cin>>n;
        if(n==-1) break;
        insert_tail(head,tail,n);
    }
    printit(head);
    printitreverse(head);

    
  return 0;
}