#include <iostream>
using namespace std;
int main()
{
    int n, i, found;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
   
    for (int i = 0; i < n/2; i++)
    {
       
        if(arr[i]!=arr[n-i-1]){
            found=1;
            break;
        }else
        {found=2;}
    }
    if(found==1){
        cout<<"not a palindrome";
    }
    else if(found==2){
        cout<<"palindrome";
    }
    
}
