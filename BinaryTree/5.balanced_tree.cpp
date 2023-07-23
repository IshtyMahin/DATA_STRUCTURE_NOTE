//* Balanced tree => A tree is height balanced if difference between height of left and right subtrees is not more than one for all nodes of tree

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define vl vector<ll>
#define nl '\n'
#define all(v) (v).begin(), (v).end()

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

//* height of  tree
int maxHeight(Node *root)
{
    if (root == NULL)
        return 0;
    int l = maxHeight(root->left);
    int r = maxHeight(root->right);
    
    return max(l, r) + 1;
}

//* TC => O(n^2)
bool isBalanced(Node * root){
    if(root==NULL){
        return true;
    }

    bool l = isBalanced(root->left);
    bool r = isBalanced(root->right);

    bool diff = abs(maxHeight(root->left)-maxHeight(root->right))<=1;

    return l && r && diff;
}



//* Tc => O(n)
int heightHelper(Node *root)
{
    if (root == NULL)
        return 0;
    int l = heightHelper(root->left);
    int r = heightHelper(root->right);
    if (l == -1 || r == -1)
        return -1;
    if (abs(l - r) > 1)
        return -1;
    return max(l, r) + 1;
}

bool isBalanced(Node *root)
{
    if (root == NULL)
        return true;
    if (heightHelper(root) == -1)
        return false;
    return true;
}

int main()
{
}
