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
    int flag=1;
    
    for(Node *i=head;i->next!=NULL;i=i->next )
    {
        for(Node *j=i->next;j!=NULL;j=j->next)
        {
            if(i->val > j->val)
            {
                flag=0;
                break;
            }
        }
    }
    if(flag==1)
    {
        cout<<"Yes";
    }
    else cout<<"NO";
   
    

    
  return 0;
}