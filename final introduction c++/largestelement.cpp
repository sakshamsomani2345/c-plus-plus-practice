#include <iostream>
#include <climits>
using namespace std;
int swap(int arr[], int n)
{

   int max=arr[0];
   for (int i = 1; i < n; i++)
   {
       if(max<arr[i]){
           max=arr[i];
       }
   }
   cout<<max;
   
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
    swap(arr, 5);
    
}