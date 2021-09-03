#include <iostream>
#include <climits>
using namespace std;

int main()
{
 int n;
 int d;
 int a;
 cin>>a>>n;
 cin >> d;
 int sum=0;

 for (int i = n; i >0; i--)
 {
      cout<<a<<endl;
      sum=sum+a;
      a=a+d;
      
     
 }
 cout<<sum;
}