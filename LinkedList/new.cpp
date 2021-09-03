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
int print(Node *head)
{
    int count = 0;
    while (head != NULL)
    {
        cout << head->data << '\t';
        head = head->next;
        count++;
    }
    return count;
}
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
Node *deletenode(Node *head, int i)
{
    Node *temp = head;
    int count = 0;
    if (i == 0)
    {
        return head->next;
    }

    while (temp && count < i - 1)
    {
        temp = temp->next;
        count++;
    }
    if (count == i - 1)
    {
        Node *a = temp->next;
        Node *b = a->next;
        temp->next = b;
        delete a;
    }
    return head;
}

void reverse(Node *head, int length)
{
    Node *temp = head;
    int count = 0;
    int s = length;
    while (length--)
    {
        for (int i = length - 1;i >= 0 ; i--)
        {
            temp = temp->next;
        }
        cout << temp->data;
        temp = head;
    }
}
int main()
{

    Node *head = takeinput();
    int length = print(head);
    // int i;
    // cin >> i;
    //     int data;
    //     cin >> data;
    //  Node *heads=insertnode(head, i, data);
    // print(head);
    // Node *heads=
    // Node *heads=deletenode(head,i);
    // print(heads);
    // print(heads);
    cout<<length<<endl;
    reverse(head, length);
}