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
void printlevelwise(Binarytreenode<int> *root)
{

    if (root == NULL)
    {
        return ;
    }

    queue<Binarytreenode<int> *> pendingnodes;
    pendingnodes.push(root);
    while (pendingnodes.size() != 0)
    {
        Binarytreenode<int> *front = pendingnodes.front();
        pendingnodes.pop();
        cout << front->data << ":";

        if (front->left != NULL)
        {
            pendingnodes.push(front->left);
            cout << "L:" << front->left->data << ",";
        }
        else
        {
            cout << "L:" << -1 << ",";
        }

        if (front->right != NULL)
        {
            pendingnodes.push(front->right);
            cout << "R:" << front->right->data;
        }
        else
        {
            cout << "R:" << -1;
        }
        cout << endl;
    }
}
////other way to count nodes
int countnodes(Binarytreenode<int> * root){
    if (root == NULL)
    {
        return 0;
    }
int sum=0;
    queue<Binarytreenode<int> *> pendingnodes;
    pendingnodes.push(root);
    sum++;
    while (pendingnodes.size() != 0)
    {
        Binarytreenode<int> *front = pendingnodes.front();
        pendingnodes.pop();
        

        if (front->left != NULL)
        {sum++;
            pendingnodes.push(front->left);
        }
        else
        {
        }

        if (front->right != NULL)
        {sum++;
            pendingnodes.push(front->right);
        }
        else
        {
        }
        cout << endl;
    }
    return sum;
}
int count(Binarytreenode<int>* root){
if(root==NULL){
    return 0;
}
return 1+count(root->left)+count(root->right);
}
int main()
{
    Binarytreenode<int> *root = takeinputlevewise();
    printlevelwise(root);
    // int count=countnodes(root);
    // cout<<count;
    int sum=count(root);
    cout<<sum;
    delete root;
}