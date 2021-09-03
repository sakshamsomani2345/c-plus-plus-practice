#include<iostream>
#include<climits>
using namespace std;
class stackarray{
    int *data;
    int nextindex;
    int capacity;
    public:
    stackarray(int totalsize){
        data=new int[totalsize];
        nextindex = 0;
        capacity=totalsize;
    };
    int size(){
        return nextindex;
    }
    bool isempty(){
        // if(nextindex==0){
        //     return true;
        // }
        // else{
        //     return false;
        // }
        return nextindex==0;
    }
    void push(int element){
        if(nextindex==capacity){
            cout<<"stack full";
            return;
        }
        data[nextindex]=element;
        nextindex++;
    }
    int pop(){
        if(isempty()){
            cout<<"empty";
            return INT_MIN;
        }
        nextindex--;
        return data[nextindex];
    }
    int top(){
        if(isempty())
        {
            cout << "empty";
            return INT_MIN;
        }
        return data[nextindex-1];
    }

};
int main(){
stackarray s1(4);
s1.push(10);
s1.push(20);
s1.push(30);
s1.push(40);
s1.push(50);
cout<<s1.top()<<endl;
cout<<s1.pop()<<endl;
cout<<s1.pop()<<endl;
cout<<s1.pop()<<endl;
cout<<s1.size();
cout<<endl;
cout<<s1.isempty();
}