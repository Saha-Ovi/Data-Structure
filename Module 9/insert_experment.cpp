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
    while (true)
    {
        cout << "Option 1 : Insert At Tail :" << endl;
        cout << "Option 2 : Insert At Head :" << endl;
        cout << "Option 3 : Insert At Any Position:" << endl;
        cout << "Option 4 : Print Linked List :" << endl;
        cout << "Option 5: Terminate" << endl;
        int op;
        cin >> op;
        if (op == 1)
        {
            int val;
            cin >> val;
            // if (val == -1)
            // {
            //     break;
            // }

            insert_At_Tail(head, tail, val);
        }

        else if (op == 2)
        {
            int val;
            cin>>val;
            insertAtHead(head, tail,val);
        }

        else if (op == 3)
        {
            int pos, v;
            cin >> pos >> v;
            if (pos == 0)
            {
            }
            else if (pos == size(head))
            {
                insert_At_Tail(head, tail, v);
            }
            else
            {
                insertAtAny(head, tail, pos, v);
            }
        }

        if (op == 4)
        {
            printlist(head);
        }

        if (op == 5)
        {
            break;
        }
    }

    // print linked list
    // insertAtAny(head, tail, 0,10);
    // insertAtAny(head, tail, 1,20);
    // insertAtAny(head, tail, 2,30);
    // insertAtAny(head, tail, 3,40);
    // insertAtAny(head, tail, 4,50);
    // insertAtAny(head, tail, 2,25);

    return 0;
}