#include <iostream>
#include <climits>
using namespace std;
int function(int arr[], int n)
{
    for (int i = 0; i < n-1; i+=2)
    {
       int temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }
    
}
int main()
{
    int n, i;
    cin >> n ;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
     function(arr, n);
     for (i = 0; i < n; i++)
     {
         cout<< arr[i];
     }
}