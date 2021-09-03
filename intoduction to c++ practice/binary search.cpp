#include <iostream>
#include <climits>
using namespace std;
void function(int arr[], int n, int x)
{
    int start=0,end=n-1;
    while(end>start){
        int mid = (end + start) / 2;
        if(x==arr[mid]){
            cout<<mid;
        }

        else if (x > arr[mid])
        {
            start = mid+1;
    }
    else if (x < arr[mid])
    {
        end= mid-1;
    }
    }
}

int main()
{
    int n, i, x;
    cin >> n >> x;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    function(arr, n, x);
}