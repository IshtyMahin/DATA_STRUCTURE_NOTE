#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
# define vl vector <ll>
#define nl  '\n'
# define all(v) (v).begin() , (v).end()

class Node{
    public:
         int val;
         Node * left;
         Node * right;
    Node(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};


//* Level order input 
Node *input_tree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);

    queue<Node *> q;

    if (root)
        q.push(root);

    while (!q.empty())
    {

        Node *p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;

        if (l == -1)
            p->left = NULL;
        else
            p->left = new Node(l);

        if (r == -1)
            p->right = NULL;
        else
            p->right = new Node(r);

        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}

//* pre order input  (root -> left -. right)

Node *buildTree()
{
    cout << "Enter the data: " << endl;

    int data;
    cin >> data;

    if (data == -1)
    {
        return NULL;
    }

    Node *root = new Node(data);

    cout << "Enter data for inserting in left of " << data << endl;
    root->left = buildTree();

    cout << "Enter data for inserting in right of " << data << endl;
    root->right = buildTree();

    return root;
}



int main(){
     
}