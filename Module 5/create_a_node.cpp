#include<bits/stdc++.h>
using namespace std;
// Normal node
class Node
{
    public:

    int val;
    Node *next; //next node address dibe jah user defined datatype node er pointer

};
int main()
{  
    Node a,b;
    a.val=10;
    b.val=20;
    a.next=&b; //a.next ekta pointer jeh b er address rakhe
    cout<<a.val<<endl;
    cout<<b.val<<endl;
    cout<<a.next->val<<endl; //a ke use kore b er value print kora or dereference kore value print kora
    cout<<(*a.next).val<<endl;

    
  return 0;
}