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
class Pair
{
public:
    Node *head;
    Node *tail;
};
Pair reverse2(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        Pair ans;
        ans.head = head;
        ans.tail = head;
        return ans;
    }
    Pair smallans = reverse2(head->next);

    smallans.tail->next = head;
    head->next = NULL;
    Pair ans;
    ans.head = smallans.head;
    ans.tail = head;
    return ans;
}
Node *takeinput1()
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
Node *oddeven(Node *head){
Node* oddhead=NULL;
Node* oddtail=NULL;
Node* evenhead=NULL;
Node* eventail=NULL;
if(head==NULL || head->next==NULL){
    return head;
}
while(head!=NULL){
if(head->data%2!=0){
    if(oddhead==NULL && oddtail==NULL){
    oddhead=head;
    oddtail=head;
    }
    else{
    oddtail->next=head;
        oddtail=head;}
}
else{
    if (evenhead == NULL && eventail == NULL)
    {
        evenhead = head;
        eventail = head;
    }
    else{
    eventail->next=head;
    eventail=head;}
}
head=head->next;
}
if(oddhead==NULL){
    return evenhead;
}

else{if(evenhead!=NULL){
    oddtail->next=evenhead;
    eventail->next=NULL;
return oddhead;}
else{
    return oddhead;
}}

}
int main()
{

    Node *head = takeinput1();
    print(head);
    Node *head1=oddeven(head);
    print(head1);
  
}