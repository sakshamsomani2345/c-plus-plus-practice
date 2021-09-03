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
int mid(Node *head){
Node *slow=head;
Node *fast=head->next;
while (fast != NULL && fast->next != NULL)
{
    slow = slow->next;
    fast = fast->next->next;
}
return slow->data;
}
int main()
{

    Node *head = takeinput();
    print(head);
    int midpoint=mid(head);
    cout<<midpoint;
    
}