#include<iostream>
using namespace std;

int main() {
    int i=1,b=1,n;
	cin>>n;
    while(b<=n){
        i++;
        b=i*i;
    }
    cout<<i-1;
}
