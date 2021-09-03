#include <iostream>
#include <climits>
using namespace std;
void swap(int arr[], int n)
{
int maxcount=0,a;
    for (int i = 0; i < n; i++)
    {
        int count=0;
        for (int j =i+1; j < n; j++)
        {

            if (arr[i]==arr[j])
            {
                count++;
            }
            if(count>maxcount){
maxcount=count;
a=arr[i];
            }
        }
    }
    cout<<a;
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
    swap(arr, n);
}