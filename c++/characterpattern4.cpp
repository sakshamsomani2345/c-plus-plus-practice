
#include<iostream>
using namespace std;
int main(){
      int i,j,n;
    cin>>n;
    // char p='A';
    i=1;
    char start=n;
    int def=start;
    while(i<=n){
        // char start='A'+i-1;
        j=1;
        while(j<=i){
            char help=def+j-1;
            cout<<help;
            j++;
        }
        cout<<endl;
        i++;
    }}