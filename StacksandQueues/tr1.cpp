#include <iostream>
using namespace std;
template <typename T>
class Node
{
public:
    T data;
    Node *next;
    Node(T data)
    {
        this->data = data;
        next = NULL;
    }
};
template <typename T>
class stacklinkedlist
{
    Node<T> *head;
    Node<T> *tail;
    int size;

public:
    stacklinkedlist()
    {
        head = NULL;
        tail = NULL;
        size = 0;
    }
    void push(T element)
    {
        Node<T> *newnode = new Node<T>(element);
        newnode->next = head;
        head = newnode;
        size++;
    }
    int getsize()
    {
        return size;
    }
    bool empty()
    {
        return size == 0;
    }
    T pop()
    {
        if (empty())
        {
            return 0;
        }
        T ans = head->data;
        Node<T> *temp = head;
        head = head->next;
        delete temp;
        size--;
         return ans;
    }
    T top()
    {
        if (empty())
        {
            return 0;
        }
        return head->data;
    }
};
int main()
{
    stacklinkedlist<char> s;
    s.push(100);
    s.push(101);
    s.push(102);
    s.push(103);
    s.push(104);
    cout << s.top() << endl;
    cout << s.pop() << endl;
    cout << s.pop() << endl;
    cout << s.pop() << endl;
    cout << s.getsize() << endl;
    cout << s.empty() << endl;
}