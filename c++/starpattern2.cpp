#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
    int i,j,n;
    cin>>n;
    i=1;
        while(i<=n){
            j=1;
            while(j<=i){
                cout<<'*';
                    j++;
            }
            cout<<endl;
            i++;
        }
  
}