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
void insert_tail1(Node *&head1,Node *&tail1,int val)
{   
    Node *newnode= new Node(val);
    if(head1==NULL)
    {
        head1=newnode;
        tail1=newnode;
        return;
    }
    tail1->next=newnode;
    tail1=newnode;

}
void insert_tail2(Node *&head2,Node *&tail2,int val)
{   
    Node *newnode= new Node(val);
    if(head2==NULL)
    {
        head2=newnode;
        tail2=newnode;
        return;
    }
    tail2->next=newnode;
    tail2=newnode;
}
 bool linked_list_compare(Node *head1,Node*head2)
 {
    Node *tmp=head1;
    Node*tmp2=head2;
    while(tmp!=NULL && tmp2!=NULL)
    {
        if(tmp->val != tmp2->val)
        {
            return false;
        }
        tmp=tmp->next;
        tmp2=tmp2->next;
    }
    return (tmp==NULL && tmp2==NULL); //checking both tmp are null or not if null true else false
 }
int main()
{  
    Node *head1=NULL;
    Node *tail1 =NULL;
    Node *head2=NULL;
    Node *tail2 =NULL;
    int val;
    while(true)
    {
        cin>>val;
        if(val==-1)
        break;
        insert_tail1(head1,tail1,val);
    }
    int value;
    while(true)
    {
        cin>>value;
        if(value==-1) break;
        insert_tail2(head2,tail2,value);
    }


    if(linked_list_compare(head1,head2)==true)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    
  return 0;
}