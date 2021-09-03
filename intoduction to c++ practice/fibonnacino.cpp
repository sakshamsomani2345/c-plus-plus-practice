#include <iostream>
using namespace std;
void prime(int n)
{
    int a,b;
    a=0;
    b=1;
    cout<<a<<" "<<b<<" ";
    for(int i=2;i<n;i++){
    int c=a+b;
    cout<<c<<" ";
    a=b;
    b=c;
    }
}
int main()
{int n;
    cin>>n;
    prime(n);

    
}