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
int takeinput()
{
    int count = 0;

    int data;
    cin >> data;
    Node *head = NULL;
    Node *tail = NULL;
    while (data != -1)
    {count++;
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
    return count;
}
void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << ' ';
        head = head->next;
    }
}
int main()
{
    int length= takeinput();
    cout<<length;
    
}
// int length(Node *head)
// {
// 
//     int count = 0;
//     while (head)
//     {
//         count++;
//         head = head->next;
//     }
//     return count;
// }
// Node *appendLastNToFirst(Node *head, int n)
// {
//     //write your code here
// if (head == NULL || n == 0)
//         return head;
//     int len = length(head);
//     Node *p = head;
//     Node *q = head;
//     for (int i = 1; i < len - n; i++)
//     {
//         p = p->next;
//     }
//     for (int i = 1; i < len; i++)
//     {
//         q = q->next;
//     }
//     q->next = head; //circular LL
//     head = p->next;
//     p->next = NULL; //breaking that circular LL
//     return head;
// }