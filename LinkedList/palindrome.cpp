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

bool change(Node *head, int length)
{

    Node *temp = head;
    Node *q=head;

    int count = 0;
    int s = length;
    int x=1;
    while (count < s)
    {
        for (int i = length; i >=0 || temp != NULL; i--)
        {
            temp = temp->next;
        }
        for (int i = 0; i <x; i++)
        {
            q=q->next;
        }
        
        if (q->data=temp->data)
        {
            return false;
        }
        
        count++;
        temp = head;
        length--;
    }
    return true;
}
int main()
{

    Node *head = takeinput();
    print(head);
    int lengths = length(head);
    // int boole=change(head, lengths);
    cout<<lengths;
   
}
Node *appendLastNToFirst(Node *head, int n)
{
    int length = 0;
    Node *temp = head;
    Node *tail = NULL;
    while (temp != NULL)
    {
        length++;
        tail = temp;
        temp = temp->next;
    }

    int l = length - n;
    Node *ref = head;
    for (int i = 0; i < l; i++)
    {
        Node *data = new Node(ref->data);
        tail->next = data;
        tail = data;
        ref = ref->next;
    }
    return ref;
}