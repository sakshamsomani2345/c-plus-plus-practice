#include <iostream>
#include <climits>
using namespace std;
void swap(int arr[], int n)
{
    for (int i = 0; i < n -1; i=i+2)
    {
        int temp = arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }
}

void print(int arr[], int n)
{
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
    swap(arr, 6);
    print(arr, 6);
}