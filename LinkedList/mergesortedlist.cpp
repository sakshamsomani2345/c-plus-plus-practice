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
Node *takeinput2()
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
int mid(Node *head)
{
    Node *slow = head;
    Node *fast = head->next;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow->data;
}
Node *merge(Node *head1, Node *head2)
{
    Node *finalhead = NULL;
    Node *finaltail = NULL;
    while (head1 != NULL && head2 != NULL)
    {
        if (head1->data < head2->data)
        {
            if (finalhead == NULL)
            {
                finalhead = head1;
                finaltail = head1;
            }
            else
            {
                finaltail->next = head1;
                finaltail = head1;
            }
            head1 = head1->next;
        }
        else
        {
            if (finalhead == NULL)
            {
                finalhead = head2;
                finaltail = head2;
            }
            else
            {
                finaltail->next = head2;
                finaltail = head2;
            }
            head2 = head2->next;
        }
    }
    if (head1!=NULL)
    {
        finaltail->next=head1;
    }
    if (head2!=NULL)
    {
        finaltail->next=head2;
    }
    
    return finalhead;
}

int main()
{

    Node *head1 = takeinput1();
    Node *head2 = takeinput2();
    Node *finalhead=merge(head1, head2);
    print(finalhead);
}