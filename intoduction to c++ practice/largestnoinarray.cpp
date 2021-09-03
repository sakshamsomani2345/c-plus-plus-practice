#include <iostream>
#include<climits>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int arr[n];
    for( i=0;i<n;i++){
cin>>arr[i];
    }
    for ( i = 0; i < n; i++)
    {
        cout << arr[i];
    }
    int max=INT_MIN;
    for (int i = 1; i < n; i++)
    {if(max<arr[i])
    {
        max=arr[i];
    }
    }
    cout << max;
}