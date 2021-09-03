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
void printLevelWise(Treenode<int> *root)
{

    if (root == NULL)
    {
        return;
    }
    queue<Treenode<int> *> pendingQ;
    pendingQ.push(root);
    while (pendingQ.size() != 0)
    {
        Treenode<int> *front = pendingQ.front();
        cout << front->data << ":";
        pendingQ.pop();
        for (int i = 0; i < root->children.size(); i++)
        {
            pendingQ.push(root->children[i]);

            if (root->children.size() - 1 != i)
            {
                cout << root->children[i]->data << ",";
            }
            else
            {
                cout << root->children[i]->data;
            }
        }
        root = pendingQ.front();
        cout << endl;
    }
}
int height(Treenode<int>* root){
   int max=0;
   for (int i = 0; i <root->children.size(); i++)
   {
       int ans=height(root->children[i]);
       if (max<ans)
       {
           max=ans;
       }
       
   }
   return max+1;
   
}
int main()
{
    
    Treenode<int> *root = takeinputlevelwise();
    printLevelWise(root);
    int getheight=height(root);
    cout<<getheight;

  
    
}