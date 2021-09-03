#include <iostream>
#include <climits>
using namespace std;

int main(){
 int n,a,sum=0;
 cin>>n;
 int temp=n;
 while (n>0)
 {
     a=n%10;
     sum=sum+a*a*a;
     n=n/10;
 }
 
 if(temp==sum){
     cout<<"armstrong no";
 }
 else{
     cout<<"not a armstrong no";
 }
 
 }