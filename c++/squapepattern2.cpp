/*4321
4321
4321
4321*/
 #include<iostream>
using namespace std;


int main(){
 int i,j,n;
    i=1;
    cin>>n;
    while(i<=n){
        j=1;
        while(j<=n){
            cout<<n-j+1;
          j++;
        }
        cout<<endl;
        i++;
    }
  
}