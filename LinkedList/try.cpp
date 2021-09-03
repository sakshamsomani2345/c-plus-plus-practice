#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int data){
    this->data=data;
    this->next=NULL;

    } 

};
void print(Node *head){
Node  *temp=head;
while(head!=NULL){
    cout<<head->data<<"\t";
    head=head->next;

}
}
int main(){
//    Node n1(10);
//    Node *head=&n1;
//    Node n2(20);
//    Node n3(30);
//    Node n4(40);
//    Node n5(50);
//    n1.next = &n2;
//    n2.next = &n3;
//    n3.next = &n4;
//    n4.next = &n5;
   
// print(head);
Node *n1=  new Node(10);
Node *head=n1;
Node *n2 = new Node(20);
Node *n3 = new Node(30);
Node *n4 = new Node(40);
Node *n5 = new Node(50);
Node *n6 = new Node(60);
n1->next = n2;
n2->next = n3;
n3->next = n4;
n4->next = n5;
n5->next = n6;
print(head);
//    cout<<n1.next<<" "<<&n2<<endl;
//    Node *n4=new Node(3);

//    Node *n5 = new Node(4);
//    n4->next=n5;
//    cout<<n5<<" "<<n4->next;
}