#include<iostream>
#include<queue>
using namespace std;
int main(){
queue<int> q;
q.push(10);
q.push(20);
q.push(30);
q.push(40);
q.push(50);
q.push(60);
cout<<q.front()<<" ";
q.pop();
cout<<q.front()<<" ";
cout<<q.size()<<" ";
cout<<q.empty()<< " ";
while (!q.empty())
{
    cout<<q.front()<<" ";
    q.pop();}

}