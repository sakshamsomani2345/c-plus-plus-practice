#include <iostream>
using namespace std;
int main ()
{
int pv=1,n,a,ans=0;
    cin>>n;
    while(n>=0){
        a=n%10;
        ans=pv*a+ans;
        n=n/10;
        pv++;
    }
}