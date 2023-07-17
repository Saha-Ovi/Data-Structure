#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    string val;
    Node *prev;
    Node *next;

    // constructor
    Node(string val)
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
void insert_At_Tail(Node *&head, Node *&tail, string  val)
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
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    Node *cur =NULL;
    string val;
    while(true)
    {
        cin>>val;
        if(val=="end") 
        {
            break;
        }
        
        insert_At_Tail(head,tail,val);

    }
    int q;
    cin >> q;
    while (q--)
    {
       string command;
       cin>>command;
       if(command=="visit")
       {
            string address;
            cin>>address;
            Node *tmp=head;
            while(tmp!=NULL)
            {
                if(tmp->val==address)
                {
                   cur= tmp;
                   break;
                }
                tmp=tmp->next;

            }
            if(cur==NULL)
            {
                cout<<"Not Available"<<endl;
            }
       }
       else if(command=="prev")
       {
            if(cur!=NULL)
            {
                cout<<cur->val<<endl;
                if(cur->prev==NULL)
                {
                    cout<<"Not Available"<<endl;
                    cur=cur;

                }
                
            }
            else if(cur->prev!=NULL)
            {
                cur=cur->prev;
            }

       }
       else if(command=="next")
       {
                if(cur!=NULL)
                {
                    cout<<cur->val<<endl;
                    if(cur->next==NULL)
                {
                    cout<<"Not Available"<<endl;
                    cur=cur;
                }
                   
                }
                else if(cur->next!=NULL)
                {
                    
                    cur=cur->next;
                }

       }
    }

    return 0;
}