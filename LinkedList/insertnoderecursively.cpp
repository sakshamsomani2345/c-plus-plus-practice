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
Node *insertnode(Node *head, int i, int data)
{
   
    if (i == 0)
    {

        Node *newnode = new Node(data);
        newnode->next = head;
        head = newnode;
        return head;
    }
    if(head==NULL || i<0){
        return head;
    }
    
    
   head->next=insertnode(head->next,i-1,data);
   return head;
}
int main()
{

    Node *head = takeinput();
    print(head);
    int i, data;
    cin >> i >> data;
    head = insertnode(head, i, data);
    print(head);
}