#include <iostream>
#include <climits>
using namespace std;
void swap(int arr[], int n)
{
    
    for (int i = 0; i < n; i ++)
    {
        for (int j=0; j < n; j++)
        {

            if (arr[i] != arr[j] && j!=i)
            {
             cout<<arr[i] ;  
            }
        }
    }

}

int main()
{
    int n;
    cin >> n ;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    swap(arr, 5);
}
