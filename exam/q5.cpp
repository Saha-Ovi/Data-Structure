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
                cur=cur->prev;
            }
            else
            {
                cout<<"Not Available"<<endl;
            }

       }
       else if(command=="next")
       {
                if(cur!=NULL)
                {
                    cout<<cur->val<<endl;
                    cur=cur->next;
                }
                else
                {
                    cout<<"Not Available"<<endl;
                }

       }
    }

    return 0;
}