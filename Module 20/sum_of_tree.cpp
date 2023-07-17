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
    
    if(root)
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
int sum=0;
void level_order(Node *root)
{
    // queue ke ei module e line bolche
    // **Note : level order print er jonno always ekta queue lage er queue theke ber hoye
    // value other variable insert kore jabotiyo kaj korte hoi then children queue te push korte
    // hobe

    if (root == NULL)
    {
        return;
    }
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        // 1. queue theke value ber kore anbo and kothao rakbo further kaj er jonno

        Node *f = q.front();
        q.pop();

        // 2. jabotiyo sob kaj korbo like print , push anything

        sum=sum + f->val;

        // 3. so sheshe children gulo queue push korbo
        // if f->left means if (true) push else not

        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
}
int main()
{
    // Taking node as input

    Node *root = input_tree();

    // printing using the oredering way
    level_order(root);
    cout<<sum<<endl;

    return 0;
}