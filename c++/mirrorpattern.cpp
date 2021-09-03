/*   1
  12
 123
1234*/
#include<iostream>
using namespace std;
int main(){
int i,j,n;
cin>>n;
i=1;
while(i<=n){
    int k=1;
    while(k<=n-i){
        cout<<" ";
        k++;
    }
    j=1;
    while(j<=i){
    cout<<j;
    j++;
    }
    cout<<endl;
    i++;
}
}