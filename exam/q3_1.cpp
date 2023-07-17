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
// void reverselist(Node *&head, Node *cur)
// {
//     while (cur->next == NULL)
//     {
//         head = cur;
//         return;
//     }
//     reverselist(head, cur->next);
//     cur->next->next = cur;
//     cur->next = NULL;
// }
void reverselist(Node*& head, Node* cur, Node* prev = NULL)
{
    if (cur == NULL)
    {
        head = prev;
        return;
    }

    Node* next = cur->next;
    cur->next = prev;
    reverselist(head, next, cur);
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
    Node *newHead = NULL;
    Node *newTail = NULL;
    Node *tmp = head;
    while (tmp != NULL)
    {
        insert_tail(newHead, newTail, tmp->val);
        tmp = tmp->next;
    }
    int flag = 1;
    if(head->next==NULL && newHead->next==NULL)
    {
        flag=1;
    }
    else
    {
        reverselist(newHead,newHead);
    }
    
    tmp = head;
    Node *tmp2 = newHead;
    
    while (tmp != NULL)
    {
          if (tmp->val != tmp2->val)
         {
            flag = 0;
         }
        tmp = tmp->next;
        tmp2 = tmp2->next;

       
    }

    if (flag == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}