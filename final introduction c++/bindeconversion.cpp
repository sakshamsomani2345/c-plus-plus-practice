#include <iostream>
using namespace std;
int main()
{
    int  m, p;
    cin >> m;
    
    int decimalsum=0,weight=1;
    for (; m!=0 ; weight=weight*2)
    {
       int rem=m%10;
       decimalsum=decimalsum+rem*weight;
       m=m/10;
    }
    cout<<decimalsum;
    // while (m!=0)
    // {
    //   int rem=m%10;
    //   decimalsum=decimalsum+rem*weight;
    //   m=m/10;
    //   weight=weight*2;
    // }
    // cout<<decimalsum;
}