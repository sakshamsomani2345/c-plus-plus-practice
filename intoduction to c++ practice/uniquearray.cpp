#include <iostream>
#include <climits>
using namespace std;
void function(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if(arr[i]==arr[i+1] && arr[i]==arr[i-1]){
                 cout<<"not unique";
        }
    }
}

// int s = arr[0];

// for (int i = 1; i < n; i++)
// {

//     s = s ^ arr[i];
// }

// return s;
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