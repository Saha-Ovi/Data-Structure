#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
Node *input_tree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
    {
        root = NULL;
    }
    else
    {
        root = new Node(val);
    }

    queue<Node *> q;

    // root true hole value push hobe

    if (root)
    {
        q.push(root);
    }

    while (!q.empty())
    {
        // 1. queue theke value ber kore anbo and kothao rakbo further kaj er jonno
        Node *p = q.front();
        q.pop();

        // 2. jabotiyo sob kaj korbo like print , push anything
        int l, r;
        cin >> l >> r;
        Node *myLeft;
        Node *myRight;

        if (l == -1)
        {
            myLeft = NULL;
        }
        else
        {
            myLeft = new Node(l);
        }
        if (r == -1)
        {
            myRight = NULL;
        }
        else
        {
            myRight = new Node(r);
        }
        p->left = myLeft;
        p->right = myRight;

        // 3. so sheshe children gulo queue push korbo
        // if p->left means if (true) push else not

        if (p->left)
            q.push(p->left);

        if (p->right)
            q.push(p->right);
    }
    return root;
}

bool perfect_binary_tree(Node *root)
{
    if(root==NULL) return true;
    // if(root->left==NULL && root->right==NULL|| root->left!=NULL && root->right!=NULL) 
    // return true;
    if(root->left!=NULL && root->right==NULL || root->left==NULL && root->right!=NULL )
    return false;
    bool l= perfect_binary_tree(root->left);
    bool r= perfect_binary_tree(root->right);
    if(l==true && r==true) return true;
    else return false;
    // return (l&&r);

}
int main()
{
    // Taking node as input

    Node *root = input_tree();

    // printing using the oredering way
    bool Tree = perfect_binary_tree(root);
    if(Tree) cout<<"YES";
    else cout<<"NO";

    return 0;
}