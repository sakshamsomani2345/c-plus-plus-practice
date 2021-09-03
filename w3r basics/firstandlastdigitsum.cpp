#include <iostream>
using namespace std;
int main()
{
    int n;
    double sum = 0;
    cin >> n;
    int a=n%10;
        for (;n>=10;)
        {
            n=n/10;
        }
    sum=sum+n+a;
    cout<<sum;

}