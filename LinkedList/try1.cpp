#include<iostream>
using namespace std;
class Node {
    public:
    int data;
    Node *next;
    Node(int data){
        this->data=data;
        next=NULL;
    }

};
void print(Node *head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }

}
Node *takeinput(){
    int data;
    cin>>data;
    Node *head=NULL;
    while (data!=-1)
    {
        Node *newnode = new Node(data);
        if(head==NULL){
        head=newnode;}
        else{
            Node *temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newnode;
            }
        cin>>data;
    }
    return head;
    
}
int main(){
// Node n1(1);
// Node *head=&n1;
// Node n2(2);
// n1.next=&n2;
// Node n3(3);
// n2.next=&n3;
// Node n4(4);
// n3.next=&n4;
// print(head);
Node *head=takeinput();
print(head);

}