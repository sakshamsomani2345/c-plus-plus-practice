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
        next = NULL;
    }
};
Node *takeinput()
{
    int data;
    cin >> data;
    Node *head = NULL;
    Node *tail = NULL;

    while (data != -1)
    {
        Node *newnode = new Node(data);
        if (head == NULL)
        {
            head = newnode;
            tail=newnode;
        }
        else
        {
            tail->next=newnode;
            tail=tail->next;
        
        }
        cin >> data;

}
return head;
}
void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << ' ';
        head = head->next;
    }
}
void insert(int data,int i,Node *head){
    int count =0;
    Node *temp =head;
    Node *newnode=new Node(data);
    while(count<i-1){
        temp=temp->next;
        count++;
    }
    Node *a=temp->next;
    temp->next=newnode; 
    newnode->next=a;

}
int main()
{
    Node *head = takeinput();
    print(head);
    int i;
    cin>>i;
    int data;
    cin>>data;
    insert(data,i,head);
    print(head);
}