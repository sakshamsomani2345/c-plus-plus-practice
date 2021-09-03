#include <iostream>
#include <climits>
using namespace std;
void swap(int arr[], int n)
{

    // for (int i = 0,j=n-1-i; i <n/2; i++)
    // {
        

    //         if(arr[i]>arr[j])
    //         {
    //             int temp=arr[i];
    //             arr[i]=arr[j];
    //             arr[j]=temp;
    //             }
    // }
    int ctr = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
            ctr++;
    }

    for (int i = 0; i < ctr; i++)
        arr[i] = 0;

    for (int i = ctr; i < n; i++)
        arr[i] = 1;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    swap(arr, 5);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i];
    }
    
}