#include <iostream>
using namespace std;
int main()
{
    int n,i,sum=0,product=1;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        sum=sum+arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        product= product*arr[i];
    }

    cout<<sum<<endl;
    cout<<product;
}