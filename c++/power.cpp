#include<iostream>
using namespace std;
int main(){
    int x,n,a,b,i=0;
    cin>>x;
    cin>>n;
    b=1;
    while(i<n){
        b=b*x;
        i++;
    }
    cout<<b;
}