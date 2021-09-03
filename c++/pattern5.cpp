#include<iostream>
using namespace std;
int main(){
int i,n,j,k,val;
    i=1;
    cin>>n;
    while(i<=n){
        k=1;
        while(k<=n-i){
            cout<<" ";
            k++;
        }
        j=1;
        val=i;
        
        while(j<=i){
            cout<<val;
            j++;
            val++;
        }
        cout<<endl;
        i++;
    }
       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
  
}