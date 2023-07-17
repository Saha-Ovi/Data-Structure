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
void delete_node(Node *head,int pos)
{
    Node *tmp=head;
    for(int i=1;i<=pos-1;i++)
    {
        tmp=tmp->next;
    }
    Node*tmp2=tmp->next->next;
    Node *deletenode=tmp->next;
    tmp->next=tmp2;
    delete deletenode;

}
void delete_head(Node *&head)
{
   Node *deletehead=head;
   head=head->next;
   delete deletehead;
}
// void delete_tail(Node *head,Node*&tail)
// {
//     Node*tmp=head;
//     while(tmp->next!=NULL)
//     {
//         tmp=tmp->next;
//     }
//     Node*deletetail=tmp->next;
//     tail=tmp;
//     delete deletetail;
// }


int main()
{  
    // Node 
    Node *head=new Node(10);
    Node *a=new Node(20);
    Node *b=new Node(30);
    Node *c=new Node(40);
    Node *d=new Node(50);
    // Node*tail=d;

    // Connections
     head->next=a;
     a->next=b;
     b->next=c;
     c->next=d;
     
    //  print_linkedlist(head);
     int pos;
     cin>>pos;
     if(pos>=size(head))
     {
        cout<<"Invalid Index";
     }
     else if(pos==0)
     {
        delete_head(head);
        print_linkedlist(head);
     }
    //  else if(pos==size(head))
    //  {
    //     delete_tail(head,tail);
    //     print_linkedlist(head);
    //  }
     else
     {
        delete_node(head,pos);
        print_linkedlist(head);
     }  
  return 0;
}