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
void sortlist(Node *head, Node *tail)
{

    for (Node *i = head; i != tail; i = i->next)
    {
        for (Node *j = i->next; j != NULL; j = j->next)
        {
            if (i->val > j->val)
            {
                int tmp = i->val;
                i->val = j->val;
                j->val = tmp;
            }
        }
    }
}

int main()
{
    // Node
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
        insert_tail(head, tail, val);
    }
    // sort
    sortlist(head, tail);
    Node *temp = head;
    while (temp->next = NULL)
    {
        if (temp->val != temp->next->val)
        {
            temp = temp->next;
        }
        else
        {

            // Node *deletenode=temp;
            // temp=temp->next;
            // delete deletenode;
            Node *temp2=temp->next;
            temp->next = temp->next->next;
            Node *deletenode = temp2;
            delete deletenode;
        }
    }
    print_linkedlist(head);

    return 0;
}