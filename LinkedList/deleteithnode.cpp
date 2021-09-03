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
Node *deletenode(Node *head, int i)
{
    int count = 0;
    Node *temp = head;
    if (i == 0)
    {
        head=temp->next;
       
        return head;
    }

    while (temp != NULL && count < i - 1)
    {
        temp = temp->next;
        count++;
       
       
    }
    // if (temp != NULL)
    // {
    //     Node *a = temp->next;
    //     a = temp->next;
    //     delete a;
    // }
    // if (temp != NULL)
    // {
    //     Node *address=temp;
    //     Node *a = address->next;
    //     Node *b=a->next;
    //     temp->next=b;
    //     delete a;
    // }
    if (temp != NULL)
    {
        Node *a=temp->next;
        a->next=temp->next->next;
        

    }
    }
int main()
{

    Node *head = takeinput();
    print(head);
    int i;
    cin >> i;
    head = deletenode(head, i);
    print(head);
}