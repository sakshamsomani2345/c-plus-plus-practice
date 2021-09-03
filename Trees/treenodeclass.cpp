#include<iostream>
#include<vector>
using namespace std;
template<typename T>
class Treenode{
public:
    T data;
    vector<Treenode<T>*> children;
    Treenode(T data){
        this->data=data;
    }
};
Treenode<int>* takeinput(){
    int rootdata;
    cout<<"Enter data"<<endl;
    cin>>rootdata;
    Treenode<int> *root = new Treenode<int>(rootdata);
    int n;
    cout<<"enter no. of children"<<rootdata<<endl;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        Treenode<int> *child=takeinput();
        root->children.push_back(child);
    }
    return root;
    
}
void printtree(Treenode<int> * root){
    if (root==NULL)
    {
        return;
    }
    
    cout<<root->data<<":";
    for (int i = 0; i < root->children.size(); i++)
    {
        cout << root->children[i]->data << "," ;
            
    }
    cout<<endl;
    for (int i = 0; i < root->children.size(); i++)
    {
        printtree(root->children[i]);
    }
    
}
int main(){
// Treenode<int>*root=new Treenode<int>(1);
// Treenode<int> *node1 = new Treenode<int>(2);
// Treenode<int> *node2 = new Treenode<int>(3);
// root->children.push_back(node1);
// root->children.push_back(node2);
// printtree(root);'
Treenode<int>* root=takeinput();
printtree(root);
}