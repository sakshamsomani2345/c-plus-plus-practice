#include<iostream>
using namespace std;

int main() {
	// Write your code here
    int a,evensum,oddsum,n;
    evensum=0;
    oddsum=0;
    cin>>n;
    while(n>0){
        a=n%10;
        if(a%2==0){
            evensum=evensum+a;
        }
        else if (a%2==1){
            oddsum=oddsum+a;
        }
           n=n/10;   
    }
    cout<<oddsum<<" "<<evensum;
	
}

