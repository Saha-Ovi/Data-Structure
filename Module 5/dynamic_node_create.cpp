#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:

    int val;
    Node *next;

    //constructor
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
    }

};
int main()
{  
    //dynamic Node create

    Node *head= new Node(10);
    Node *a= new Node(20);
    Node *b= new Node(30);
    Node *c= new Node(40);

 // Address of next node
 // here head,a,b,c is a pointer is a pointer that why head->next= &a nah hoye only a hoyeche 
//  a->next, b->next , b->next also pointer 

    head->next=a;
    a->next=b;
    b->next=c;
    
// Becaue Head ,A ,B ,C evereyone is pointer

    cout<<head->val<<endl;  //head
    cout<<a->val<<endl;      //a
    cout<< a->next->val<<endl; //b
    cout<<(*(*b).next).val<<endl; //c

  return 0;
}