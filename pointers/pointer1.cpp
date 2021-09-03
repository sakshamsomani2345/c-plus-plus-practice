#include <iostream>
using namespace std;

void increment1(int **p){
    p=p+1;
}

int main(){
    int i=5;
    int *p=&i;
    int **q=&p;
    cout<<p<<" "<<*q<<" "<<&p;
    increment1(q);
    cout<<q;
    char str[]="fkdfnkfefff";
    char *g=str;
    g=g+5;
    cout<<g;
    int a[10]={1,2,3,4,5,6,7,8};
    int *t=&a[0];
    *t=*t+1;
    cout<<" "<<*t;
    
}