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
class myQueue
{
    public:
   
    Node*head=NULL;
    Node *tail=NULL;
    int size =0;
    void push(int val)
    {
        size++;
        Node *newnode= new Node(val);
        if(head==NULL)
        {
            head=newnode;
            tail=newnode;
            return;
        }
        else
        {
            tail->next=newnode;
            tail=newnode;
        }  
    }
    void pop()
    {
        size--;
        Node *deletenode=head;
        head=head->next;
        if(head==NULL)
        {
            tail==NULL;
        }
        delete deletenode;
    }
   int front()
    {
        return head->val;
    }

    bool empty()
    {
        if(size==0) return true;
        else return false;
    }

};
int main()
{  
    myQueue q;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        q.push(x);
    }
    while(!q.empty())
    {
        cout<<q.front()<<endl;
        q.pop();
    }
    
  return 0;
}