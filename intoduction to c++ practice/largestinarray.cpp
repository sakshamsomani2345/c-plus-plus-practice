#include <iostream>
#include <climits>
using namespace std;
int function(int arr[], int n)
{
    int max = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            int temp = max;
            max = arr[i];
            arr[i] = temp;
        }
    }
    cout<<max;

int my=-1,i;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]!=max){
            if(my==-1){
                my=i;
            }
            else if(arr[i]>arr[my]){
                my=i;
            }
        }
    }
    cout<<i;
    
}

int main()
{
    int n, i, x;
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    function(arr, n);
    // for (i = 0; i < n; i++)
    // {
    //     cout << arr[i];
    // }
}