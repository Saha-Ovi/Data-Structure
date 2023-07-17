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
class myQueue
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int size = 0;
    void push(int val)
    {
        size++;
        Node *newnode = new Node(val);
        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
            return;
        }
        else
        {
            tail->next = newnode;
            tail = newnode;
            newnode->prev = head;
        }
    }
    void pop()
    {
        size--;
        Node *deletenode = head;
        head = head->next;
        if (head == NULL)
        {
            tail = NULL;
            delete deletenode;
            return;
        }
        else
        {
            head->prev = NULL;
            delete deletenode;
        }
    }
    int front()
    {
        return head->val;
    }

    bool empty()
    {
        if (size == 0)
            return true;
        else
            return false;
    }
};

int main()
{  
    myStack st;
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        st.push(x);
    }
    myQueue q;
    for(int i=0;i<m;i++)
    {
        int x;
        cin>>x;
        q.push(x);
    }
    int flag=1;

    if(n==m)
    {
        while(!st.empty())
        {
             if(st.top()!=q.front())
             {
                 flag=0;
             }
             st.pop();
             q.pop();
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