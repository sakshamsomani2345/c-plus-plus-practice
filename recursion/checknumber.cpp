#include <iostream>
using namespace std;
bool check(int arr[], int n,int x)
{
    if(arr[n]==x){
        return true;
    }
    if(n==0){
        return false;
    }
    return check(arr,n-1,x);
}

int main()
{
    int n,x;
    cin >> n>>x;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int c = check(arr, n,x);
    cout << c;
}
/////////////////////another method
// #include <iostream>
// #include <string.h>
// using namespace std;
// bool fun(int *arr, int x, int n)
// {
//     if (n == 0)
//     {
//         return false;
//     }
//     if (arr[0] == x)
//     {
//         return true;
//     }
//     return fun(arr + 1, x, n - 1);
// }
// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int x;
//     cin >> x;
//     bool fune = fun(arr, x, n);
//     cout << fune;
// }