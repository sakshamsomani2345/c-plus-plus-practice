/*   1
  23
 456
78910
*/
#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    i=1;
    int val=1;
    cin>>n;
    while(i<=n){
        int k=1;
        while(k<=n-i){
            cout<<" ";
            k++;
        }
        j=1;
        while(j<=i){
            cout<<val;
            j++;
            val++;
        }
        cout<<endl;
        i++;
    }
}