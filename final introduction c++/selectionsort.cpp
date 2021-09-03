#include <iostream>
#include <climits>
using namespace std;
void binarysearch(int arr[] , int n)
{int i;
    int index = i;
     for (i = 0; i < n - 1; i++)
    {
        int min=arr[i];

        for (int j =i+1; j < n; j++)
        {
            if (arr[j] < min)
            {
             min=arr[j];    
              index=j     ;     
            }
        } 
        int temp=arr[i];
        arr[i]=arr[index];
        arr[index] = temp;
    }
    
    
    
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
    binarysearch(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}