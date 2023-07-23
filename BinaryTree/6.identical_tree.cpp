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


bool isSameTree(Node* p, Node* q)
{
    // Base case: if both trees are null, they are identical
    if (p == NULL && q == NULL)
    {
        return true;
    }
    // If only one tree is null or the values are different, they are not identical
    if (p == NULL || q == NULL || p->val != q->val)
    {
        return false;
    }

    // Recursively check if the left and right subtrees are identical
    return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
}

int main()
{
    
}
