/*ABCD
BCDE
CDEF
DEFG*/
#include<iostream>
using namespace std;
int main(){
      int i,j,n;
    cin>>n;
    char p='A';
    i=1;
    while(i<=n){
        char start='A'+i-1;
        j=1;
        while(j<=n){
            char help=start+j-1;
            cout<<help;
            j++;
        }
        cout<<endl;
        i++;
    }}