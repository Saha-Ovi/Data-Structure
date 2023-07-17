#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;

    // constructor
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_tail(Node *&head, Node *&tail, int val,int pos) 
{
    Node *newnode = new Node(val);
    Node *tmp = head;
    if (tmp == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    else if(pos==0)
    {
        newnode->next=head;
        head=newnode;
    }
    else if(pos==1)
    {
        tail->next = newnode;
        tail = newnode;
    }
    
}
void print_linkedlist(Node *head,Node *tail)
{
    Node *tmp=head;
    Node*tmp2=tail;
    while(tmp!=NULL && tmp2!=NULL)
    {
        cout<<tmp->val<<" "<<tmp2->val<<endl;
        tmp=tmp->next;
        tmp2=tmp2->next;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int q;
    cin>>q;
    while(q--)
    {
        int X,val;
        cin>>X>>val;
        insert_tail(head,tail,val,X);
        print_linkedlist(head,tail);
    }
    return 0;
}