// #include<iostream>
// using namespace std;
// int main(){
//     int a,b,c;
//     cin>>a;
//     b=1;
//     c=0;
//     while(b<a){
// if(a%2==0){
// c=c+2;
// }
//  b++;   
//     }

//   cout<<c; 
// }
#include<iostream>
using namespace std;
int main(){
    int a,b,sum;
    cin>>a;
    b=1;
    sum=0;
    while(b<=a){
if(b%2==0){
sum=sum+b;
}  
b++;
    }
  cout<<sum; 
}