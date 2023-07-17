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
    cout<<endl;
}
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
void printReverseList(Node* tail) {
    Node* curr = tail;
    while (curr != nullptr) {
        cout << curr->val << " ";
        curr = curr->prev;
    }
    cout << endl;
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
            printlist(head);
            printReverseList(tail);
        }
        else
        {
            cout << "Invalid";
        }
    }

    return 0;
}