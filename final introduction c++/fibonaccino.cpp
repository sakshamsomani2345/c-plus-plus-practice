#include <iostream>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int start =0;
   int end=1;
   cout<<start<<" "<<end<<" ";
   for (int i = 0; i < n; i++)
   {
       int sum=start+end;
       cout<<sum<<" ";
       start=end;
       end=sum;
   }
   
}
// 0 1 1 2 3 5 8 13 21 34