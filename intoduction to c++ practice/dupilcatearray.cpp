#include <iostream>
#include <climits>
using namespace std;
void function(int arr[], int n)
{
    for (int i = 0; i < n ; i++)
    {
        for (int j = i+1; j <n ;j++)
        {
            if(arr[i]==arr[j]){
                       cout<<arr[i];
                    
            }
        }
        
    }
}

// int sum=0;
// for(int i=0;i<size;i++)
// {
//     sum+=arr[i];
// }
// int result=(size-1)*(size-2);
// result=result/2;
// return sum-result;

int main()
{
    int n, i;
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    function(arr, n);
}