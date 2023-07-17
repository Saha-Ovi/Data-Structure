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
void insertAtTail(Node *&head, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        cout<<"Head is inserted"<<endl<<endl;
        head = newnode;
        return;
    }
    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    cout<<"Tail is Inserted"<<endl;
    tmp->next = newnode;
}

void printlist(Node *head)
{
    cout<<"The List Is :";
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val<<" ";
        tmp = tmp->next;
    }
    
    cout<<endl;
}
void insertAtanyPostion(Node *head,int pos,int val)
{
    Node *newnode = new Node(val);
    Node*tmp=head;
    for(int i=1;i<=pos-1;i++)
    {
        tmp=tmp->next;
    }
    newnode->next=tmp->next;
    tmp->next=newnode;
}

int main()
{
    Node *head = NULL;
    while (true)
    {
        cout << "Option 1 : Insert At Tail :" << endl;
        cout << "Option 2 : Print Linked List :" << endl;
        cout << "Option 3 : Insert At Any Position:" << endl;
        cout << "Option 4: Terminate" << endl;
        int op;
        cin >> op;
        if (op == 1)
        {
            int v;
            cin >> v;
            insertAtTail(head, v);
        }
        else if(op==2)
        {
             printlist(head);
        }
        else if(op==3)
        {
            insertAtanyPostion(head,2,100);
        }
        else if(op==4)
        {
            break;
        } 
    }
    return 0;
}