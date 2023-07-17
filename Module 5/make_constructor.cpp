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
        this->val=val; //this is pointer that points to object to which value will be added
        this->next=NULL; //NULL is pointer that points to end of list because after NULL there is
                        // no address of next node 
    }

};
int main()
{  
    Node a(5);
    Node b(10);
    a.next=&b;
    cout<<a.val<<endl;
    cout<<b.val<<endl;
    cout<<(*a.next).val<<endl;
    cout<<a.next->val<<endl;



    
  return 0;
}