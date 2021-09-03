#include<iostream>
using namespace std;
int arrayRotateCheck(int *arr, int size,int x)
{
    for (int i = 0; i < size; i++)
    {
        arr[i+x]=arr[i];
    }
    
}

int main(){
    
    int n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int x;
    cin>>x;
    arrayRotateCheck(arr,n,x);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<"\t";
    }
    
    
}