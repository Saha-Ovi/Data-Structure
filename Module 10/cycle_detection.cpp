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

void insert_At_Tail(Node *&head,Node *&tail,int val)
{
    Node *newnode=new Node (val);
    if(head == NULL)
    {
        head= newnode;
        tail= newnode;
        return;
    }
    tail->next=newnode;
    tail=newnode;

}

int main()
{ 
    Node *head=NULL;
    Node *tail=NULL;
    int val;
    while(true)
    {
        cin>>val;
        if(val==-1)
        break;
        insert_At_Tail(head,tail,val);
    } 
    // tail->next=head;
    Node*slow=head;
    Node *fast=head;
    bool flag=false;
    while(fast!=NULL && fast->next!=NULL)
    {
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)
            {
                flag=true;
            }

    }
    if (flag==true) cout<<"Cycle Detected";
    else cout<<"Cycle is Not Detected ";
   

    
  return 0;
}