#include<iostream>
using namespace std;
template <typename T>
class Binarytreenode{
    public:
    T data;
    Binarytreenode* left;
    Binarytreenode *right;
    Binarytreenode(T data){
        this->data=data;
        left=NULL;
        right=NULL;
    }
    ~Binarytreenode(){
        delete left;
        delete right;
    }
};
void printtree(Binarytreenode<int>* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<":";
    if(root->left!=NULL){
cout<<"L"<<root->left->data;
    }
    if(root->right!=NULL){
        cout<<"R"<<root->right->data;
    }
    cout<<endl;
    printtree(root->left);
    printtree(root->right);
}
Binarytreenode<int>* takeinput(){
int rootdata;
cout<<"Enter Data"<<endl;
cin>>rootdata;
if (rootdata==-1)
{
    return NULL;
}
Binarytreenode<int> *root=new Binarytreenode<int>(rootdata);
Binarytreenode<int> *leftchild= takeinput();
Binarytreenode<int> *rightchild =  takeinput();
root->left=leftchild;
root->right=rightchild;
return root;
}
int main(){
    // Binarytreenode<int> * root=new Binarytreenode<int>(1);
    // Binarytreenode<int> *node1 = new Binarytreenode<int>(2);
    // Binarytreenode<int> *node2 = new Binarytreenode<int>(3);
    // root->left=node1;
    // root->right=node2;
    Binarytreenode<int>* root=takeinput();
    printtree(root);
    delete root;
}