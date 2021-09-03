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
Node* deletes(Node *head,int m,int n){
int c1=1;
int c2=1;
Node* temp1=head;
while (c1<=m)
{
    temp1=temp1->next;
}
Node* temp2=temp1->next;
while (c2<=n)
{
    temp2=temp2->next;
}
temp2=temp2->next;
temp1->next=temp2


}
if (head == NULL)
    return head;
if (N == 0)
{
    return head;
}
Node *temp = head;
head = head->next;
delete temp;
return del(head, N - 1);
}
Node *skipMdeleteN(Node *head, int M, int N)
{
    // Write your code here
    if (head == NULL || N == 0)
        return head;
    if (M == 0)
    {
        while (1)
        {
            head = del(head, N);
            if (head == NULL)
                return head;
        }
    }
    int k = M - 1;
    Node *temp = head;
    while (temp != NULL)
    {
        if (k == 0)
        {
            k = M - 1;
            temp->next = del(temp->next, N);
            temp = temp->next;
            continue;
        }
        k--;
        temp = temp->next;
    }
    return head;
    int main()
    {

        Node *head = takeinput1();
        print(head);
        int m, n;
        cin >> m >> n;
        Node *head1 = deletes(head, m, n);
        print(head1);
    }