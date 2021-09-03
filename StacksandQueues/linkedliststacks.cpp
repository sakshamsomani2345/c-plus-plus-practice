#include<iostream>
using namespace std;
template<typename T>
class Node{
     public:
     T data;
     Node<T> *next;
     Node(T data){
          this->data=data;
          next=NULL;
     }
};
template <typename T>
    class stack
{
     Node<T> *head;
     int size;
     public:
     stack(){
head=NULL;
size=0;
     }
     int getsize(){
return size;
     }
     bool isempty(){

     }
     void push(T element){
     Node *newnode=new T();
     Node<T> *newnode = new Node<T>(element);
     // if(head==NULL){
     //     head=newnode;
     // }
     // Node<T> *temp=head;
     // while (temp->next!=NULL)
     // {
     // temp=temp->next;
     // }
     // temp->next=newnode;
     newnode->next = head;
     head = newnode;
     size++;
     }
     T pop(){

     }
     T top(){

     }
};
int main(){
     stack<char> s;
     s.push(100);
}