#include <iostream>
#include <climits>
using namespace std;
void function(int arr[], int n)
{int min=arr[0];
    for (int i = 0; i < n; i++)
    {
        if(min>arr[i+1]){
            // int temp=min;
            // min=arr[i+1];
            // arr[i+1]=temp;
            min=arr[i+1];

        }

    }
    cout<<min<<endl;
    
    
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
    for (i = 0; i < n; i++)
    {
        cout  <<arr[i];
    }
}