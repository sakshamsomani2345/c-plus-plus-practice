#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
Node *takeinput(){
    int data;
    cin>>data;
    Node *head=NULL;
    Node *tail= NULL;

    while(data!=-1){
        Node *newnode=new Node(data);
        if(head==NULL){
            head=newnode;
            tail = newnode;
        }
        else{
           tail->next=newnode;
           tail=tail->next;
           
        }
        cin>>data;
    }
    return head;
}
void print(Node *head)
{
    Node *temp = head;
    while (head != NULL)
    {
        cout << head->data << "\t";
        head = head->next;
    }
}
void find(Node *head,int i){
    int count =0;
    while (head != NULL)
    {

        if(count==i){
        cout << head->data << "\t";}
        head = head->next;
        count++;
    }
}
int main()
{
    
    Node *head=takeinput();
    // print(head);
    int i;
    cin>>i;
    find(head,i);
}