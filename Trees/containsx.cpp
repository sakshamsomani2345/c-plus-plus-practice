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
bool isPresent(Treenode<int> *root, int x)
{
    // Write your code here
    if (root->data == x)
        return true;

    bool ans = false;
    for (int i = 0; i < root->children.size(); i++)
    {
        bool smallans = isPresent(root->children[i], x);
        if (smallans != ans && smallans == true)
            ans = smallans;
    }

    return ans;
}
// bool isPresent(TreeNode<int> *root, int x)
// {
//     queue<TreeNode<int> *> q;
//     q.push(root);

//     while (!q.empty())
//     {
//         TreeNode<int> *p = q.front();
//         q.pop();

//         if (p->data == x)
//         {
//             return true;
//         }
//         for (int i = 0; i < p->children.size(); i++)
//         {
//             q.push(p->children[i]);
//         }
//     }
//     return false;
// }

int main()
{
    Treenode<int> *root = takeinputlevelwise();
    int x;
    cin>>x;
    bool a=isPresent(root,x);
    cout<<a;
}