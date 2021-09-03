#include <iostream>
using namespace std;
int check(int arr[], int n, int x)
{
    if (n == 0)
     return -1;

       else
       {
    static int i = 0;
    if (arr[0] == x)
        cout<<i;
    else
    {
        i++;
        check(arr + 1, n - 1, x);
    }
       }
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