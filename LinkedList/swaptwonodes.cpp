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
int swap(Node *head,int i){
    int static x=0;
if (head->data==i){
    return x;
}
x++;
if(head->next==NULL){
    return -1;
}
return swap(head->next,i);
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
int main()
{

    Node *head1 = takeinput1();
    print(head1);
    cout << endl;
    int i;
    cin>>i;
    int head=swap(head1,i);
    cout<<head; 
}