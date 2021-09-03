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
    // Write your code here

    if (root == NULL)
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
void mirror(Binarytreenode<int> *root)
{

    queue<Binarytreenode<int> *> pendingnodes;
    pendingnodes.push(root);
    while (pendingnodes.size() != 0)
    {
        Binarytreenode<int> *front = pendingnodes.front();
        pendingnodes.pop();

        if (front->left->data != -1)
        {
            pendingnodes.push(front->left);
        }

        if (front->right->data != -1)
        {
            pendingnodes.push(front->right);
        }
        if(front->left->data!=-1 && front->right->data!=-1){
        int temp=front->left->data;
        front->left->data=front->right->data;
        front->right->data=temp;}
    }
}
int main()
{
    Binarytreenode<int> *root = takeinputlevewise();
    printlevelwise(root);
    // Binarytreenode<int> *root1 = mirror(root);
    mirror(root);
    printlevelwise(root);

    delete root;
}