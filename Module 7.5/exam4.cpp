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
void insert_tail(Node *&head, Node *&tail, int val) 
{
    Node *newnode = new Node(val);
    Node *tmp = head;
    if (tmp == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}
void print_reverse(Node *n)
{
    //base case
    if(n==NULL)
    return;
    
    print_reverse(n->next);
    cout<<n->val<<" ";
}
  
void print_it(Node *n)
{
    //base case
    if(n==NULL)
    return;

    cout<<n->val<<" ";
    print_it(n->next);
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_tail(head, tail, val);
    }
    print_reverse(head);
    cout<<endl;
    print_it(head);

    return 0;
}