// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin>>arr[i];
//     }
//     int sum=0;
//     for (int i = 0; i<n/2; i++)
//     {
//         sum=sum+arr[i];
//     }
//     int plus=0;
//     for (int i =n/2; i<n; i++)
//     {
//         plus= plus + arr[i];
//     }
//     int product=plus*sum;
//     cout<<product;
// }
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int sum = 0;
    for (int i = 0; i < n / 2; i++)
    {
        sum = sum + arr[i];
    }
    int plus = 0;
    for (int i = n / 2; i < n; i++)
    {
        plus = plus + arr[i];
    }
    int product = plus * sum;
    cout << product;
}