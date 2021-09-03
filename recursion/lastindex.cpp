#include <iostream>
using namespace std;
int check(int arr[], int n, int x)
{
    if (arr[n] == x)
    {
        return n;
    }
    if (n == 0)
    {
        return -1;
    }
    return check(arr, n - 1, x);
}
int main()
{
    int n, x;
    cin >> n >> x;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int c = check(arr, n, x);
    cout << c;
}