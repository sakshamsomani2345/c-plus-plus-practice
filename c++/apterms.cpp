#include<iostream>
using namespace std;

int main() {
	int n;
    cin>>n;
    
    int i=1,c;
    while(i<=n)
    {
        c=(3*i)+2;
        if(c%4==0)
        {
            n=n+1;
        }
        else
        {
        cout<<c<<" ";
        }
        i=i+1;
    }
	return 0;
}

