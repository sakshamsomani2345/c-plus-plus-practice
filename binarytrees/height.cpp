#include <iostream>
using namespace std;
#include <queue>
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
void printlevelwise(Binarytreenode<int> *root)
{

    if (root->data == -1)
    {
        return;
    }

    queue<Binarytreenode<int> *> pendingnodes;
    pendingnodes.push(root);
    while (pendingnodes.size() != 0)
    {
        Binarytreenode<int> *front = pendingnodes.front();
        pendingnodes.pop();
        cout << front->data << ":";

        if (front->left->data != -1)
        {
            pendingnodes.push(front->left);
            cout << "L" << front->left->data;
        }

        if (front->right->data != -1)
        {
            pendingnodes.push(front->right);
            cout << "R" << front->right->data;
        }
        cout << endl;
    }
}

int height(Binarytreenode<int>* root){
    if(root==NULL){
        return 0;
    }
    int hello=1+height(root->left);
    int bye= 1+height(root->right);
    if(hello>bye){
        return hello;
    }else{
        return bye;
    }
}
    //other way
    // int height(Binarytreenode<int> *root){
    // // Write our code here
    //  if(root==NULL)
    //     return 0;
    // int h1=height(root->left);
    // int h2=height(root->right);
    // if(h1>h2)
    //     return h1+1;
    // else
    //     return h2+1;
    // }
    int main()
    {
        Binarytreenode<int> *root = takeinputlevewise();
        // printlevelwise(root);
        int x;
        cin >> x;
        int find = height(root);
        cout << find;
        delete root;
    }