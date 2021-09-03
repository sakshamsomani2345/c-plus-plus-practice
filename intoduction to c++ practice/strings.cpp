#include <iostream>
#include <climits>
#include<string.h>
using namespace std;

// int function(int *input, int size)
// {
//     //Write your code here

//     int count = 1;
//     int i = 0;
//     for (; i < size - 1; i++)
//     {
//         if (input[i] < input[i + 1])
//         {
//             count++;
//         }
//         else
//         {
//             return count;
//         }
//     }
//     return 0;
// }
int main()
{
    char arr[100];
    cin>>arr;
    int length=strlen(arr),found=0;
    cout<<length;
    char a,b;
    
    for (int i = 0; i < length/2; i++)
    {
    for (int j = length-1; j>=length/2; j--)
    {
        if(arr[i]!=arr[j])
        {
            cout<<"not a palindrome";
            break;
        }
        else{
            int found=1;
        }
    }
    
    }
    if(found==1){
        cout<<"hello";
    }
    

    
}