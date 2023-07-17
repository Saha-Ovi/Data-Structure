#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *prev;
    Node *next;

    // constructor
    Node(int val)
    {
        this->val = val;
        this->prev = NULL;
        this->next = NULL;
    }
};
// ==================================|Insert Operation|==================================
void insert_At_Tail(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if (tail == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
}
void printlist(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
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
        {
            break;
        }
        insert_At_Tail(head, tail, val);
    }
    Node *i=head;
    Node *j=tail;
    int flag=1;
    while(i!=j && i->next!=j)
    {
        if(i->val != j->val)
        {
            flag=0;
        }
        i=i->next;
        j=j->prev;
    }
    if(i->val!=j->val)
        {
            flag=0;
        }
        else
        {
            flag=1;
        }

        if (flag==1)
        {
            cout<<"Yes";
        }
        else
        {
            cout<<"No";
        }
   
    return 0;
}