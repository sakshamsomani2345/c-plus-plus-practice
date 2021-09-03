#include <iostream>
using namespace std;
int main()
{int n;
cin>>n;
int a=1,d=5;
int sum=0;
 sum=(((2*a)+((n-1)*d))*n)/2;
//ANOTHER METHOD
// for (int i = 0; i <n; i++)
// {
//     sum=sum+a;
//     a=a+d;
// }
//////////////to print terms
// for (int i = 1; i <=n; i++)
// {
//     cout<<a+(i-1)*d<<" ";
// }

cout<<sum;

    
}