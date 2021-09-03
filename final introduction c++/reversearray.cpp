#include <iostream>
#include <climits>
using namespace std;
void swap(int arr[],int n){
    for (int i = 0; i < n/2; i++)
    {
        int temp =arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
}

void print(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}
int main()
{
    int n, x;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    swap(arr,5);
    print(arr,5);
    
}