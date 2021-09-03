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
bool countnode(Binarytreenode<int>* root,int x){
    if(root->data==x){
        return true;
    }
    if(root==NULL){
        return false;
    }
    bool count1=countnode(root->left,x);
    if(count1==true){
        return true;
    }

   bool count2= countnode(root->right,x);
   if (count2== true)
   {
       return true;
   }
}
void preorder(Binarytreenode<int>* root){
    if(root==NULL){
        return;
    }
    cout << root->data<<" ";

    preorder(root->left);
    preorder(root->right);
}
int main()
{
    Binarytreenode<int> *root = takeinputlevewise();
    // printtree(root);
   preorder(root);
    delete root;
}