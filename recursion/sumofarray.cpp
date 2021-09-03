#include <iostream>
using namespace std;
// int fun(int *arr, int n)
// {
//     if (n == 0)
//     {
//         return false;
//     }

//     return arr[n - 1] + fun(arr, n - 1);
// }
int check(int arr[],int n)
{
    if(n==0){
        return 0;
    }

   return arr[0]+check(arr+1,n-1);
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int c = check(arr,n);
    cout << c;
}