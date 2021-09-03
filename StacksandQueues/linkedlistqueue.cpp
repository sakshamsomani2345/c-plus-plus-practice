#include<iostream>
using namespace std;
template<typename T>
class Node {
public:
Node<T> *next;
T data;
Node(T data){
this->data=data;
next=NULL;
}
};
template<typename T>
class Queue{
    Node<T> *head;
    Node<T> *tail;
    int size;
    public:
Queue(int s){
head=tail=NULL;
size=0;

}
int getsize(){
return size;
}
bool isempty(){
return size==0;
}
void enqueue(T element){
    Node<T> *newnode = new Node<T>(element);
    if(head==NULL){
        head=newnode;
        tail=newnode;
    }
    else {
    tail->next=newnode;
    tail=newnode;}
    size++;
}
T front(){
    if (isempty())
    {
        return 0;
    }
    
return head->data;
}
T dequeue(){
    if(isempty())
    {
        return 0;
    }
    T ans =head->data;
    Node<T> *temp=head;
    head=head->next;
    delete temp;
    size--;
    return ans;
}
};
int main(){
    Queue<int> q(5);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60);
    cout << q.front() << endl;
    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;
    cout << q.getsize() << endl;
    cout << q.isempty() << endl;
}