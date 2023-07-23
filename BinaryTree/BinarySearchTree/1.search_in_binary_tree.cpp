//* Binary search tree ==>
/*
 * Binary search tree is a data structure that quickly allows us to maintain a sorted list of numbers.

        *=> It is called a binary tree because each tree node has a maximum of two children.
        *=> It is called a search tree because it can be used to search for the presence of a number in O(log(n)) time.

* The properties that separate a binary search tree from a regular binary tree is

        *=> All nodes of left subtree are less than the root node
        *=> All nodes of right subtree are more than the root node
        *=> Both subtrees of each node are also BSTs i.e. they have the above two properties
 *
*/

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



// best case O(log n) //wrost case O(n)

// TC = O(hight of tree)

bool search(Node *root, int x)
{
    if (root == NULL)
        return false;
    if (root->val == x)
        return true;
    if (x < root->val)
    {
        return search(root->left, x);
    }
    else
    {
        return search(root->right, x);
    }
}

int main()
{

}