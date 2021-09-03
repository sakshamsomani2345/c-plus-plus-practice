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

    ~Treenode()
    {
        for (int i = 0; i < children.size(); i++)
        {
            delete children[i];
        }
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
bool areIdentical(Treenode<int> *root1, Treenode<int> *root2)
{
    if (root1->data != root2->data)
    {
        return false;
    }

    if (root1->children.size() != root2->children.size())
    {
        return false;
    }

    for (int i = 0; i < root1->children.size(); i++)
    {
        areIdentical(root1->children[i], root2->children[i]);
    }
    return true;
}
int main()
{
    Treenode<int> *root1 = takeinputlevelwise();
    Treenode<int> *root2 = takeinputlevelwise();

    int x;
    cin >> x;
    int a = areIdentical(root1, root2);
    cout << a;
}