#include <iostream>
using namespace std;
int main()
{
   int c;
   c=cin.get();
   int a=0,b=0,e=0;
   while(c!='$'){
if(c>='a' && c<='z'){
    a++;
}
else if (c>='A' && c<='Z'){
    b++;
}
else{
    e++;
}
c = cin.get();
   }
   cout<<a<<" "<< b<<" "<<e;
}