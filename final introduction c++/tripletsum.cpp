#include <iostream>
#include <climits>
using namespace std;
void swap(int arr[], int n,int x)
{
    int count=0;
    for (int i = 0; i < n ; i = i + 1)
    {
       for (int j = i+1; j < n; j++)
       {
           for (int k = j+1; k < n; k++)
           {
               if (arr[i] + arr[j]+arr[k] == x)
               {
                   count++;
               }
           }
           
           
       }
       
    }
    cout<<count;
}


int main()
{
    int n, x;
    cin >> n>>x;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    swap(arr, 6,x);
    
}