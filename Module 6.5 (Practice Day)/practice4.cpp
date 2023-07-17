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
void inserttail(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
    }
    tail->next = newnode;
    tail = newnode;
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
void insert_element(Node *&head, int pos, int val)
{
    Node *newnode = new Node(val);
    Node *tmp = head;
    if (pos == 0)
    {
        newnode->next = tmp;
        head = newnode;
    }
    else
    {
        for (int i = 1; i <= pos - 1; i++)
        {
            tmp = tmp->next;
        }
        newnode->next = tmp->next;
        tmp->next = newnode;
    }
}
void print_linked_list(Node *head)
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
            break;
        inserttail(head, tail, val);
    }
    int q;
    cin >> q;
    while (q--)
    {
        int pos, val;
        cin >> pos >> val;
        if (pos > size(head))
        {
            cout << "Invalid" << endl;
        }
        else
        {
            insert_element(head, pos, val);
            print_linked_list(head);
        }
    }

    return 0;
}