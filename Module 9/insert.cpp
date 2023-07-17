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
// ================================ |Print the List | ======================================
void printlist(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}
// ================================|Size Of Linked List|===============================

int size(Node *head)
{
    Node *tmp = head;
    int count = 0;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    return count;
}

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
void insertAtHead(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }

    head->prev = newnode;
    newnode->next = head;
    head = newnode;
}

void insertAtAny(Node *&head, Node *&tail, int pos, int val)
{
    if (pos == 0)
    {
        insertAtHead(head, tail, val);
    }
    else if (pos == size(head))
    {
        insert_At_Tail(head, tail, val);
    }

    else

    {
        Node *tmp = head;
        Node *newnode = new Node(val);
        for (int i = 1; i <= pos - 1; i++)
        {
            tmp = tmp->next;
        }

        newnode->next = tmp->next;
        tmp->next = newnode;
        newnode->prev = tmp;
        newnode->next->prev = newnode;
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
        insert_At_Tail(head,tail,val); 
    }

    int pos,v;
    cin>>pos>>v;
    if(pos==0)
        {
            insertAtHead(head,tail,v);
        }
        else if(pos==size(head))
        {
            insert_At_Tail(head,tail,v);

        }
        else
        {
            insertAtAny(head,tail,pos,v);
        }
        
    
    // print linked list
    // insertAtAny(head, tail, 0,10);
    // insertAtAny(head, tail, 1,20);
    // insertAtAny(head, tail, 2,30);
    // insertAtAny(head, tail, 3,40);
    // insertAtAny(head, tail, 4,50);
    // insertAtAny(head, tail, 2,25);

    printlist(head);

    return 0;
}