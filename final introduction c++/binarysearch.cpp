#include <iostream>
#include <climits>
using namespace std;
void binarysearch(int arr[], int n,int x)
{
int start =0,end=n-1;
int mid=(start+end)/2;

    for (;start<=end; )
    {
        mid=(start+end)/2;
        if(x<arr[mid]){
            end=mid-1;
        }
        if (x ==arr[mid])
        {
            cout<<mid;
            break;
        }
        if (x > arr[mid])
        {
            start=mid+1;

        }
    }
}

int main()
{
    int n,x;
    cin >> n>>x;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    binarysearch(arr, n,x);
}