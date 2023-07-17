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
// ================================|Size Of Linked List|===============================

int size1(Node *head1)
{
    Node *tmp1 = head1;
    int count1 = 0;
    while (tmp1 != NULL)
    {
        count1++;
        tmp1 = tmp1->next;
    }
    return count1;
}
int size2(Node *head2)
{
    Node *tmp2 = head2;
    int count2 = 0;
    while (tmp2 != NULL)
    {
        count2++;
        tmp2 = tmp2->next;
    }
    return count2;
}

// ==================================|Insert Operation|==================================
void insert_At_Tail(Node *&head1, Node *&tail1, int val)
{
    Node *newnode = new Node(val);
    if (tail1 == NULL)
    {
        head1 = newnode;
        tail1 = newnode;
        return;
    }
    tail1->next = newnode;
    newnode->prev = tail1;
    tail1 = newnode;
}
void insert_At_Tail2(Node *&head2, Node *&tail2, int val)
{
    Node *newnode = new Node(val);
    if (tail2 == NULL)
    {
        head2 = newnode;
        tail2 = newnode;
        return;
    }
    tail2->next = newnode;
    newnode->prev = tail2;
    tail2 = newnode;
}

int main()
{
    Node *head1 = NULL;
    Node *tail1 = NULL;
    Node *head2 = NULL;
    Node *tail2 = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_At_Tail(head1, tail1, val);
    }
    int value;
    while (true)
    {
        cin >> value;
        if (value == -1)
        {
            break;
        }
        insert_At_Tail2(head2, tail2, value);
    }
    int count1 = size1(head1);
    int count2 = size2(head2);

    Node *tmp = head1;
    Node *tmp2 = head2;
    int flag = 1;
    if (count1 == count2)
    {
        while (tmp != NULL && tmp2 != NULL)
        {
            if (tmp->val != tmp2->val)
            {
                flag = 0;
            }
            tmp = tmp->next;
            tmp2 = tmp2->next;
        }
    }
    else
    {
        flag = 0;
    }

    if (flag==1)
    {
        cout << "Yes" << endl;

    }
        
    else
    {
         cout << "No" << endl;
    }
       

    return 0;
}