#include <iostream>
#include <vector>
#include <queue>
using namespace std;
template <typename T>
class Treenode
{
public:
    T data;
    vector<Treenode<T> *> children;
    Treenode(T data)
    {
        this->data = data;
    }
};
Treenode<int> *takeinputlevelwise()
{
    int rootdata;
    cout << "Enter root data" << endl;
    cin >> rootdata;
    Treenode<int> *root = new Treenode<int>(rootdata);
    queue<Treenode<int> *> pendingnodes;
    pendingnodes.push(root);
    while (pendingnodes.size() != 0)
    {
        Treenode<int> *front = pendingnodes.front();
        pendingnodes.pop();
        cout << "enter no of children " << front->data;
        int numchild;
        cin >> numchild;
        int i;
        for (i = 0; i < numchild; i++)
        {
            int childdata;

            cout << "enter " << i << "the child of " << front->data << endl;
            cin >> childdata;
            Treenode<int> *child = new Treenode<int>(childdata);
            front->children.push_back(child);
            pendingnodes.push(child);
        }
    }
    return root;
}
void preordertraversal(Treenode<int>* root){
    cout<<root->data<<" ";
    for (int i = 0; i < root->children.size(); i++)
    {
        preordertraversal(root->children[i]);
    }
}


int main()
{
    Treenode<int> *root = takeinputlevelwise();
    preordertraversal(root);
}
