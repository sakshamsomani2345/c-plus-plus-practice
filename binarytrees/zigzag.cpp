#include <iostream>
using namespace std;
#include <queue>
#include <stack>

template <typename T>
class Binarytreenode
{
public:
    T data;
    Binarytreenode *left;
    Binarytreenode *right;
    Binarytreenode(T data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
    ~Binarytreenode()
    {
        delete left;
        delete right;
    }
};
void printtree(Binarytreenode<int> *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << ":";
    if (root->left != NULL)
    {
        cout << "L" << root->left->data;
    }
    if (root->right != NULL)
    {
        cout << "R" << root->right->data;
    }
    cout << endl;
    printtree(root->left);
    printtree(root->right);
}
Binarytreenode<int> *takeinputlevewise()
{
    int rootdata;
    cout << "Enter root Data" << endl;
    cin >> rootdata;
    if (rootdata == -1)
    {
        return NULL;
    }
    Binarytreenode<int> *root = new Binarytreenode<int>(rootdata);
    queue<Binarytreenode<int> *> pendingnodes;
    pendingnodes.push(root);
    while (pendingnodes.size() != 0)
    {
        Binarytreenode<int> *front = pendingnodes.front();
        pendingnodes.pop();
        cout << "Enter left child of " << front->data << endl;
        int leftchilddata;
        cin >> leftchilddata;
        if (leftchilddata != -1)
        {
            Binarytreenode<int> *child = new Binarytreenode<int>(leftchilddata);
            front->left = child;
            pendingnodes.push(child);
        };
        cout << "Enter right child of " << front->data;
        int rightchilddata;
        cin >> rightchilddata;
        if (rightchilddata != -1)
        {
            Binarytreenode<int> *child = new Binarytreenode<int>(rightchilddata);
            front->right = child;
            pendingnodes.push(child);
        }
    }
    return root;
}

// if (root == NULL)
// {
//     return 0;
// }

// int leftheight = 1 + isBalanced(root->left);
// int rightheight = 1 + isBalanced(root->right);
// if (leftheight == rightheight)
// {
//     return true;
// }
// else
// {
//     return false;
// }
void zigzag(Binarytreenode<int>* root){
    if(root==NULL){
        return;
    }
    stack<Binarytreenode<int> *> s1;
    stack<Binarytreenode<int> *> s2;

    s1.push(root);
    while (s1.size() != 0 && s2.size()!=0)
    {
        while(s1.size()!=0){
        Binarytreenode<int> *top = s1.top();
        s1.pop();
        cout<<top->data;
        if(top->left!=NULL){
            s2.push(top->left);
        }
        if (top->right != NULL)
        {
            s2.push(top->right);
        }
        }
        cout<<endl;
        while (s2.size()!=0)
        {
            Binarytreenode<int> *top = s2.top();
            s2.pop();
            cout<<top->data<<" ";
            if(top->right != NULL)
            {
                s1.push(top->right);
            }
            if (top->left != NULL)
            {
                s1.push(top->left);
            }
            cout<<endl;
        }
        
}


}
int main()
{
    Binarytreenode<int> *root = takeinputlevewise();
    zigzag(root);
    delete root;
}