#include <iostream>
#include <climits>
using namespace std;


int main()
{
    int n, x;
    cin >> n ;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
   for (int i = 0; i < n; i++)
   {
       if(arr[i]%2!=0){
           arr[i]=i;
       }
   }
   for (int i = 0; i < n; i++)
   {
       cout<<arr[i];
   }
   
   
}