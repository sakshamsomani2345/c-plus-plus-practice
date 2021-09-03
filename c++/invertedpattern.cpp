/*
******
*****
****
***
**
*
*/
#include <iostream>
using namespace std;
int main()
{
 
  int i,j;
  int n;
    cin>>n;
 i=1;
 while(i>=1){
     j=1;
     while(j<=n-i+1){
         cout<<'*';
         j++;
     }

     cout<<endl;
     i++;
 }
}