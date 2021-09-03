#include <iostream>
#include <vector>
#include<queue>
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
Treenode<int> *takeinputlevelwise(){
    int rootdata;
    cout << "Enter root data" << endl;
    cin >> rootdata;
    Treenode<int> *root = new Treenode<int>(rootdata);
    queue<Treenode<int> *> pendingnodes;
    pendingnodes.push(root);
    while (pendingnodes.size()!= 0)
    {
        Treenode<int> *front = pendingnodes.front();
        pendingnodes.pop();
        cout<<"enter no of children "<<front->data;
        int numchild;
        cin>>numchild;
        int i;
        for (i = 0; i < numchild; i++)
        {
            int childdata;

            cout<<"enter "<<i<<"the child of "<<front->data<<endl;
            cin>>childdata;
            Treenode<int> *child=new Treenode<int>(childdata);
            front->children.push_back(child);
            pendingnodes.push(child);
        }
    }
    return root;
}
// Treenode<int> *takeinput()
// {
//     int rootdata;
//     cout << "Enter data" << endl;
//     cin >> rootdata;
//     Treenode<int> *root = new Treenode<int>(rootdata);
//     int n;
//     cout << "enter no. of children" << rootdata << endl;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         Treenode<int> *child = takeinput();
//         root->children.push_back(child);
//     }
//     return root;
// }
void printtree(Treenode<int> *root)
{
    if (root == NULL)
    {
        return;
    }

    cout << root->data << ":";
    for (int i = 0; i < root->children.size(); i++)
    {
        cout << root->children[i]->data << ",";
    }
    cout << endl;
    for (int i = 0; i < root->children.size(); i++)
    {
        printtree(root->children[i]);
    }
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
// int sum(Treenode<int> *root)
// {
//     int static sum=0;
//     sum=sum+root->data;

//     if (root == NULL)
//     {
//         return;
//     }
//     queue<Treenode<int> *> pendingQ;
//     pendingQ.push(root);
//     while (pendingQ.size() != 0)
//     {
//         Treenode<int> *front = pendingQ.front();
//         cout << front->data << ":";
//         pendingQ.pop();
//         for (int i = 0; i < root->children.size(); i++)
//         {
//             pendingQ.push(root->children[i]);

//             if (root->children.size() - 1 != i)
//             {
//                 cout << root->children[i]->data << ",";
//                 sum = sum + root->children[i]->data;
//             }
//             else
//             {
//                 cout << root->children[i]->data;
//                 sum = sum + root->children[i]->data;
//             }
//         }
//         root = pendingQ.front();
//         cout << endl;
//     }
//     return sum;
// }
int maxnode(Treenode<int> *root){
    if (root == NULL)
    {
        return 0;
    }
    int max=0;
    queue<Treenode<int> *> pendingQ;
    pendingQ.push(root);
    while (pendingQ.size() != 0)
    {
        Treenode<int> *front = pendingQ.front();
        
        pendingQ.pop();
        for (int i = 0; i < root->children.size(); i++)
        {
            pendingQ.push(root->children[i]);

            if (root->children.size() - 1 != i)
            {
                if (root->children[i]->data > root->children[i+1]->data ){
                    max = root->children[i]->data;
                }
            }
            else
            {
                
                if (root->children[i]->data > root->children[i + 1]->data )
                {
                    max = root->children[i]->data;
                }
            }
        }
        root = pendingQ.front();
        cout << endl;
    }
    if(max>root->data){
    return max;}
    else{
        return root->data;
    }
}
 int main()
{
    // Treenode<int>*root=new Treenode<int>(1);
    // Treenode<int> *node1 = new Treenode<int>(2);
    // Treenode<int> *node2 = new Treenode<int>(3);
    // root->children.push_back(node1);
    // root->children.push_back(node2);
    // printtree(root);
    Treenode<int> *root = takeinputlevelwise();
    // printtree(root);
    // printLevelWise(root);
    // int add=sum(root);
    // cout<<add;
    int max=maxnode(root);
    cout<<max;
    // cout<<sum;
}