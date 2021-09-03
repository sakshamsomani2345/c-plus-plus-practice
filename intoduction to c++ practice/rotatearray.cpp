#include <iostream>
#include <climits>
using namespace std;

int function(int *input, int size)
{
    //Write your code here

    int count = 1;
    int i = 0;
    for (; i < size - 1; i++)
    {
        if (input[i] < input[i + 1])
        {
            count++;
        }
        else
        {
            return count;
        }
    }
    return 0;
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
    // for (i = 0; i < n; i++)
    // {
    //     cout << arr[i];
    // }
}