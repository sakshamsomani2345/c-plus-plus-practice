#include <iostream>
#include <climits>
using namespace std;


int main()
{
    int n;
    cin >> n;
    int arr[4]={1,3,4,5};
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }
    for (int i = 0; i < 5-1; i++)
    {
        if (arr[i + 1] != arr[i] + 1)
            cout << i + 1;
    }
    // swap(arr, 8);
}
