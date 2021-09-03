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
class Pair {
    public:
    Node  *head;
    Node  *tail;
};
Pair reverse2(Node *head){
    if (head == NULL || head->next == NULL)
    {
        Pair ans;
        ans.head=head;
        ans.tail=head;
        return ans;
    }
    Pair smallans = reverse2(head->next);
  
    smallans.tail->next=head;
    head->next=NULL;
    Pair ans;
    ans.head=smallans.head;
    ans.tail=head;
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
Node *reverse(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    Node *smallans = reverse(head->next);
    Node *temp = smallans;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = head;
    head->next = NULL;
    return smallans;
}
Node *reverse3(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    Node *smallans = reverse(head->next);
    Node *tail=head->next;
    tail->next = head;
    head->next = NULL;
    return smallans;
}
Node* reversell(Node *head){
    return reverse2(head).head;
}
Node *reverse4(Node *head){
Node *current=head;
Node *prev=NULL;
while(current!=NULL){
    head=head->next;
current->next=prev;
prev=current;
current=head;}
return prev;

}
int main()
{

    Node *head1 = takeinput1();
    print(head1);
    cout<<endl;
    Node *heads=reverse4(head1);
    print(heads);
}