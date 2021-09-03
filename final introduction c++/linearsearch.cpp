#include <iostream>
#include <climits>
using namespace std;
int func(int arr[], int a,int x)
{
    for (int i = 0; i < a; i++)
    {
        if(arr[i]==x){
            return i;
            break;
        }
    }
    return -1;
    
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
    int c=func(arr, 0,x);
    cout<<c;
}