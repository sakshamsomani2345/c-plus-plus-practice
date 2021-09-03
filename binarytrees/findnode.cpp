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
bool findnode(Binarytreenode<int> *root,int x)
{

    if (root->data == -1)
    {
        return false;
    }
    if(root->data==x){
        return true;
    }

    queue<Binarytreenode<int> *> pendingnodes;
    pendingnodes.push(root);
    while (pendingnodes.size() != 0)
    {
        Binarytreenode<int> *front = pendingnodes.front();
        pendingnodes.pop();

        if (front->left->data != -1)
        {
            if (front->left->data==x)
            {
                return true;
            }
            
            pendingnodes.push(front->left);
        }

        if (front->right->data != -1)
        {
            if (front->right->data == x)
            {
                return true;
            }

            pendingnodes.push(front->right);
        }
        cout << endl;
    }
    return false;
}

int main()
{
    Binarytreenode<int> *root = takeinputlevewise();
    // printlevelwise(root);
    int x;
    cin>>x;
    int find=findnode(root,x);
    cout<<find;
    delete root;
}