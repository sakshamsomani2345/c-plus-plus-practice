/*G
FG
EFG
DEFG
CDEFG
BCDEFG
ABCDEFG*/
#include <iostream>
using namespace std;
int main()
{
 
  int i,j;
  int n;
    cin>>n;
 
   for(i=n;i>=1;i--)
     {
         for(j=i;j<=n;j++)
         {
             cout<<((char)(j+64));
         }
 
         cout<<endl;
     }
 
  return 0;
}
/*
or
#include <iostream>
using namespace std;
int main()
{
 
  int n;
    cin>>n;
  int i=n;
    int j;
 
   while(i>0)
     {
       j = i;
        while(j<=n)
         {
            
             cout<<((char)(j+64));
        	j++; 
        }
 
       i--;
         cout<<endl;
     }
 
  return 0;
}*/
