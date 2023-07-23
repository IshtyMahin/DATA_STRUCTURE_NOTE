//* The diameter of tree (sometimes called the width)  is the number of nodes on the longest path , between two end nodes.
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


//* Tc => O(n*n)
int diameter(Node *root){
    if(root==NULL){
        return 0;
    }

    int op1 = diameter(root->left);
    int op2= diameter(root->right);
    int op3 = maxHeight(root->left)+maxHeight(root->right);

    return max(op1,max(op2,op3));
}


//* TC => O(n)
int res=0;
int diameterFast(Node *root){
    if(root==NULL){
        return 0;
    }

    int l = diameterFast(root->left);
    int r = diameterFast(root->right);
    res= max(res,l+r);

    return max(l,r)+1;
}
int diameterOfBinaryTree(Node *root)
{
    diameterFast(root);
    return res;
}

//* DFS
int dfs(Node *root, int &result)
{
    if (root == NULL)
    {
        return 0;
    }
    int left = dfs(root->left, result);
    int right = dfs(root->right, result);
    result = max(result, left + right);
    return 1 + (max(left, right));
}
int diameterOfBinaryTree(Node *root)
{
    int result = 0;
    dfs(root, result);
    return result;
}



int main()
{
    
}
