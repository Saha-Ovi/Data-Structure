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
void inserttail(Node *&head,Node *&tail,int val)
{   
    Node *newnode= new Node(val);
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
    }
    tail->next=newnode;
    tail=newnode;

}
int count_element(Node *head)
{
    Node*tmp=head;
    int count=0;
    while(tmp!=NULL)
    {
        count++;
        tmp=tmp->next;
    }
    return count;

}
void mid_element(Node *head)
{
    int size=count_element(head);
    int mid=((size+1)/2);
    Node *tmp=head;
    for(int i=0;i<mid-1;i++)
    {
        tmp=tmp->next;

    }
    if(size%2==0)
    {
        cout<<tmp->val<<" "<<tmp->next->val<<endl;
    }
    else
    {
        cout<<tmp->val<<endl;
    }
}
int main()
{  
    Node *head=NULL;
    Node *tail =NULL;
    int val;
    while(true)
    {
        cin>>val;
        if(val==-1)
        break;
        inserttail(head,tail,val);
    }
    mid_element(head);
    
  return 0;
}