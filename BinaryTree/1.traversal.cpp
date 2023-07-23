#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
# define vl vector <ll>
#define nl  '\n'
# define all(v) (v).begin() , (v).end()

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

//* level order traversal 
void level_order(Node *root)
{

    if (root == NULL)
    {
        cout << "Tree nai" << endl;
        return;
    }
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        // 1.ber kore ana
        Node *f = q.front();
        q.pop();

        // 2.  jabatiyo ja kaj ache
        cout << f->val << " ";

        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
}

//* Pre_order traversal ==> Root -> Left -> Right
void printPreOrder(Node *a)
{
    if (a == NULL)
    {
        return;
    }

    cout << a->val << " ";
    printPreOrder(a->left);
    printPreOrder(a->right);
}

//* Post_order traversal ==>  Left -> Right -> Root
void printPostOrder(Node *a)
{
    if (a == NULL)
    {
        return;
    }

    printPostOrder(a->left);
    printPostOrder(a->right);
    cout << a->val << " ";
}

//* In_order traversal ==>  Left -> Root -> Right
void printInOrder(Node *a)
{
    if (a == NULL)
    {
        return;
    }

    printInOrder(a->left);
    cout << a->val << " ";
    printInOrder(a->right);
}
int main(){
     
}