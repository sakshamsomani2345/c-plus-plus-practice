#include <iostream>
#include <climits>
using namespace std;

int main()
{

    int n,a,sum=0;
    cin>>n;
    int temp=n;
    for (;n>0;)
    {int c=1;
        a=n%10;
        for (int j = 1; j <= a; j++)
        {
           c=c*j;
        }
        sum = sum + c;

        n=n/10;
    }
    if(temp==sum){
        cout<<"strong no";
    }
    else{
        cout<<"not a strong no";
    }
    
}