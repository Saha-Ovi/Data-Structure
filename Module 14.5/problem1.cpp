#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:

    int val;
    Node *next;
    Node *prev;

    //constructor
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};
class myStack
{
    public:
    Node *head=NULL;
    Node *tail=NULL;
    int size=0;

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
            newnode->prev=tail;
            tail=newnode;
        }
    }
    void pop()
    {
        size--;
        Node *deletenode=tail;
        tail=tail->prev;
        if(tail==NULL)
        {
            head=NULL;
            delete deletenode;
            return;
        }
        else
        {
            tail->next=NULL;
            delete deletenode;
        }
    }
    int top()
    {
        return tail->val; 
    }

    bool empty()
    {
        if(size==0) return true;
        else return false;
    }

};

int main()
{  
    myStack st,sst;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        st.push(x);
    }
    int m;
    cin>>m;
    for(int i=0;i<m;i++)
    {
        int x;
        cin>>x;
        sst.push(x);
    }
    int flag=1;

    if(n==m)
    {
        while(!st.empty())
        {
             if(st.top()!=sst.top())
             {
                 flag=0;
             }
             st.pop();
             sst.pop();
        }
    }
    else
    {
        flag=0;
    }

    if (flag==1) cout<<"YES";
    else cout<<"NO";


    
  return 0;
}