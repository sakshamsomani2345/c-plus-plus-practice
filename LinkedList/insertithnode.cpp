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
int  print(Node *head)
{
    Node *temp = head;
    while (head != NULL)
    {
        cout << head->data << "\t";
        head = head->next;
    }
}
Node *insertnode(Node *head, int i, int data)
{
    Node *temp = head;
    int count = 0;
    Node *newnode = new Node(data);
    if (i == 0)
    {
        head = newnode;
        head->next = temp;
        return head;
    }
    while (temp != NULL && count < i - 1)
    {
        temp = temp->next;
        count++;
    }
    if (temp != NULL)
    {
        Node *a = temp->next;
        temp->next = newnode;
        newnode->next = a;
        ////////another way
        // newnode->next = temp->next;
        // temp->next=newnode;
    }

    return head;
}
int main()
{

    Node *head = takeinput();
    print(head);
    int i,data;
    cin >> i>>data;
    head=insertnode(head,i,data);
    print(head);

}