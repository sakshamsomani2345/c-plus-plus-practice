#include<iostream>
using namespace std;

int main() {
	// Write your code here
    int n,c,i,j,product,sum;
	cin>>n;
    cin>>c;
    if(c==1){
        i=1;
        sum=0;
        while(i<=n){
            sum=sum+i;
            i++;
        }
        cout<<sum;}
        if(c==2){
            product=1;
            j=1;
                while(j<=n){
                product=product*j;
                    j++;
            }
            cout<<product;
        }   
        else{
            cout<<-1;
        }     
        
        
        
        
    }