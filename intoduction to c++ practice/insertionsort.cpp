#include <iostream>
#include <climits>
using namespace std;
int function(int arr[], int n)
{

    for (int i = 1; i < n; i++)
    {
        int current = arr[i], j;
        for (j = i - 1; j >= 0; j--)
        {
            if (current < arr[j])
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j + 1] = current;
    }
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
        cout << arr[i];
    }
}