// Find the sum of the series[x - x ^ 3 + x ^ 5 + ......]

#include <iostream>
#include<climits>
#include<Math.h>
    using namespace std;
int main()
{
int n,a,b,c;
cin>>n;
cin>>c;
int d=-1;
int sum=c;
    for (int i = 1; i < n; i++,a++)
    {
        b=2*i+1;
        a=pow(c,b);
        a=a*d;
        cout<<a<<endl;
        sum=sum+a;
        d=d*-1;
    }
    cout<<sum;
 
}