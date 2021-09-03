#include<iostream>
using namespace std;
template<typename T>
class queue{
    T *data;
    int size;
    int nextindex;
    int capacity;
    int firstindex;
    public:
    queue(int n){
        data=new T[n];
        size=0;
        nextindex=0;
        capacity=n;
        firstindex=-1;

    }
    void enqueue(T element){
        if(size==capacity){
            cout<<"queue full"<<endl;
            return;
        }
      data[nextindex]=element;
      nextindex = (nextindex + 1) % capacity;

      if (firstindex == -1)
      {
          firstindex = 0;
      }
      size++;
    }
    T front(){
       if(empty()){
           cout<<"empty"<<endl;
           return 0;
       }
         return data[firstindex];
         
    }
    int getsize(){
        return size;
    }
    T dequeue(){
        if (empty())
        {
            cout << "empty" << endl;
            return 0;
        }
        T ans=data[firstindex];
        firstindex = (firstindex + 1) % capacity;
        size--;
        if(size==0){
            firstindex=-1;
            nextindex=0;
        }
        return ans;
    }
    bool empty(){
        return size==0;
    }


};
int main(){
queue<int> q(5);
q.enqueue(10);
q.enqueue(20);
q.enqueue(30);
q.enqueue(40);
q.enqueue(50);
q.enqueue(60);
cout<<q.front()<<endl;
cout<<q.dequeue()<<endl;
cout<<q.dequeue()<<endl;
cout << q.dequeue() << endl;
cout<<q.getsize()<<endl;
cout << q.empty() << endl;
}