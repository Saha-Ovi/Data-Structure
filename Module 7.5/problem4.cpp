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
void insert_tail(Node *&head, Node *&tail, int val) // O(1) time complexity
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
void print_linkedlist(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}
int findmax(Node *head)
{
    int mx=INT_MIN;
    Node*tmp=head;
    while(tmp!=NULL)
    {
        if(tmp->val > mx)
        {
            mx=tmp->val;
        }
        tmp=tmp->next;
    }
    return mx;
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
    int mx=findmax(head);
    cout<<mx;


    return 0;
}