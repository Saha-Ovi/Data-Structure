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
    cout << endl;
}
void printlinkedlist(Node *head)
{
    cout << "L -> ";
    printlist(head);
    cout << "R -> ";
    Node *tmp = head;
    if (tmp == NULL)
    {
        cout << endl;
        return;
    }
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}
// ================================ |Size of the List | ======================================

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
        printlinkedlist(head);
    }
    else if (pos == size(head))
    {
        insert_At_Tail(head, tail, val);
        printlinkedlist(head);
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
        printlinkedlist(head);
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int q;
    cin >> q;
    while (q--)
    {
        int X, V;
        cin >> X >> V;
        if (X <= size(head))
        {

            insertAtAny(head, tail, X, V);
        }
        else
        {
            cout << "Invalid" << endl;
        }
    }

    return 0;
}