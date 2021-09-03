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

int nextlarger(Treenode<int> *root, int x)
{

    int ans = NULL;
    if (root->data > ans)
    {
        ans = root->data;
    }
    for (int i = 0; i < root->children.size(); i++)
    {

        int temp = nextlarger(root->children[i]);
        if (temp > root->data)
        {
            ans = root->data;
        }
    }
    return ans;
}

int main()
{
    Treenode<int> *root = takeinputlevelwise();
    int x;
    cin >> x;
    int a = nextlarger(root, x);
    cout << a;
}