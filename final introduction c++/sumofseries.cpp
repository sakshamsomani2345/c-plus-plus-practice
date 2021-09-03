#include <iostream>
#include <climits>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int a, b=1, sum=0, d;
    for (int i = 1; i <= n; b=b*10,i++)
    {
        a =10*b-1;
        sum=sum+a;
        
    }
    cout<<sum;
}