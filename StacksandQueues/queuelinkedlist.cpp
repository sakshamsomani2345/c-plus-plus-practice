#include <iostream>
using namespace std;
template <typename T>
class Node{
    public:
    T data;
    Node<T> *next;
    Node(T data){
        this->data=data;
        next=NULL;
    };
};
template <typename T>
class queue
{
    Node<T> *head;
    Node<T> *tail;
    int size;
    public:
    queue(){
        head = NULL;
        tail = NULL;
        size=0;
    }
    void enqueue(T element){
        Node<T> *newnode = new Node<T>(element);

        if(head==NULL){
            head=newnode;
            tail=newnode;
        }else{
    tail->next=newnode;
    tail=newnode;}
    size++;
    }
    int front(){
        if(empty()){
            return 0;
        }
        return head->data;
    }
  
    bool empty(){
        return size==0;
    }
   
    T dequeue(){
    if(empty()){
        return 0;
    }
    T ans=head->data;
    Node<T> *temp=head;
    head=head->next;
    delete temp;
    size--;
    return ans;
    }
    int getsize(){
        return size;
    }
};
int main(){
    queue<int> q;
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
    cout << q.empty() << endl;
}