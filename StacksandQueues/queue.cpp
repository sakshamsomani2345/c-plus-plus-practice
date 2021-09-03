#include <iostream>
using namespace std;
template <typename T>
class queueusingarray{
T *data;
int nextindex;
int size;
int firstindex;
int capacity;
public:
queueusingarray(int s){
    data=new T[s];
    nextindex=0;
    firstindex=-1;
    size=0;
    capacity=s;
    }
    int getsize(){
        return size;
    }
    int empty(){
        return size==0;
    }
    void enterqueue(T element){
        if(size==capacity){
            cout<<"queue full"<<endl;
            return ;
        }
        data[nextindex]=element;
        nextindex=(nextindex+1)%capacity;
       if (firstindex==-1)
       {
           firstindex=0;
       }
       size++;
        
    }
    T front(){
        if(empty()){
            cout<<"empty";
            return 0;
        }
        return data[firstindex];
    }
    T del()
    {
        if (empty())
        {
            cout << "empty";
            return 0;
        }
        T ans=data[firstindex];
        firstindex = (firstindex + 1) % capacity;
        size--;
        if (size==0)
        {
            firstindex=-1;
            nextindex=0;
        }
        
        return ans;
    }
};
int main(){
queueusingarray<int> q(5);
q.enterqueue(10);
q.enterqueue(20);
q.enterqueue(30);
q.enterqueue(40);
q.enterqueue(50);
q.enterqueue(60);
cout<<q.front()<<endl;
cout<<q.del()<<endl;
cout<<q.del()<<endl;
cout<<q.del()<<endl;
cout<<q.getsize()<<endl;
cout<<q.empty()<<endl;
}