#include <iostream>
using namespace std;
int main()
{
    int n, i, sum = 0, product = 1, largest, smallest;
    
    int arr[20]={13,5,9,3,7};
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }
    for (int i = 0; i < 4; i++)
    {
        if(arr[i]>arr[i+1]){
int temp=arr[i];
arr[i]=arr[i+1];
arr[i+1]=temp;
        }
    }
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i];
    }
    }
