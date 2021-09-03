#include <iostream>
#include <climits>
using namespace std;
int function(int arr[],int n,int x){
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {

        return i;
            break;
        }
    }
    return -1;
}
int main()
{
    int n, i,x, sum = 0;
    cin >> n>>x;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout<<function(arr,n,x);
    
    
    
    
}