#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:

    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
    
};
void preorder_print(Node *root)
{
    // base case
    if(root==NULL)
    {
        return;
    }
    cout<<root->val<<" ";
    preorder_print(root->left);
    preorder_print(root->right);
}
void postorder_print(Node *root)
{
    // base case
    if(root==NULL)
    {
        return;
    }
    postorder_print(root->left);
    postorder_print(root->right);
    cout<<root->val<<" ";
}
void inorder_print(Node *root)
{
    // base case
    if(root==NULL)
    {
        return;
    }
    inorder_print(root->left);
    cout<<root->val<<" ";
    inorder_print(root->right);
    
}
int main()
{
    // Node create means value is taking itself without input  
    Node *root= new Node(10);
    Node *a= new Node(20);
    Node *b= new Node(30);
    Node *c= new Node(40);
    Node *d= new Node(50);
    Node *e= new Node(60);
    Node *f= new Node(70);
    Node *g= new Node(80);
    Node *h= new Node(90);
    Node *i= new Node(100);
    
    //connection

    root->left=a;
    root->right=b;
    a->left=c;
    a->right=h;
    c->right=e;
    b->right=d;
    d->left=f;
    d->right=g;
    h->right=i;

    // printing using the oredering way
    preorder_print(root);
    cout<<endl;
    postorder_print(root);
    cout<<endl;
    inorder_print(root);

    
  return 0;
}