
#include <iostream>
using namespace std;
int main()
{
    int  n,product=1;
    cin >> n;
 for (int i = 1; i <= n; i++)
 {
     int c=3*i+2;
     if(c%4!=0){
         cout<<c<<" ";
     }
     else{
         n++;
     }
 }
 
    

   
}