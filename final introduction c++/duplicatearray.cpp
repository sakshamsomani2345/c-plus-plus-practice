#include <iostream>
#include <climits>
using namespace std;
void swap(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {

            if (arr[j] == arr[i])
            {
                cout << arr[j];
            }
        }
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
    swap(arr, 5);
}