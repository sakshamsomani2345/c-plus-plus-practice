#include <iostream>
#include <climits>
using namespace std;
void function(int arr[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j+1; k  <n; k++)
            {

                if (arr[i] + arr[j] +arr[k]== x)
                {
                    cout << i << " " << j <<" "<< k<<endl;
                }
            }
           
        }
    }
}

int main()
{
    int n, i, x;
    cin >> n >> x;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    function(arr, n, x);
}