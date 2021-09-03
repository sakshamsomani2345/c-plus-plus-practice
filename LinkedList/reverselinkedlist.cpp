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
            tail = newnode;
        }
        else
        {
            tail->next = newnode;
            tail = tail->next;
        }
        cin >> data;
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
bool result(Node *head, int i)
{
    Node *temp = head;
    while (head != NULL)
    {
        cout << head->data << "\t";
        head = head->next;
    }
}
int deletenode(Node *head, int i)
{
    int count = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == i)
        {
            return count;
        }
        count++;
        temp = temp->next;
    }

    return -1;
}
int length(Node *head)
{
    int count = 0; // Initialize count // Initialize current
    while (head != NULL)
    {
        count++;
        head = head->next;
    }
    return count;
}
//RVERSING THROUGH ITERATIVE APPROACH
void reverse(Node *head,int length){
   
   Node *temp=head;

int count =0;
int s=length;
   while(count<s){
   for (int i = length; i>=0 || temp!=NULL; i--)
   {
        temp = temp->next;
   }
   
   cout<<temp->data;
   count++;
   temp=head;
   length--;
   }
   
    

}
Node *change(Node *head,int length){
    Node *temp=head;
    Node *tail=NULL;

}
int main()
{

    Node *head = takeinput();
    print(head);
    int lengths=length(head);
    reverse(head,lengths);
    Node *heads = change(head, lengths);
    print(heads);
}