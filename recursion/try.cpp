// #include<iostream>
// using namespace std;
// int fun(int n){

//     if(n==0){return 1;}
//         int put=fun(n-1);
//     return n * put;
// }
// int main(){
//     int i=5;
//     int a=fun(5);
//     cout<<a;
// }
// #include <iostream>
// using namespace std;
// int fun(int n,int a)
// {

//     if (a == 0)
//     {
//         return 1;
//     }

//     return n * fun(n,(a-1));
// }
// int main()
// {
//     int n,m;
//     cin>>n>>m;
//     int a = fun(m,m);
//     cout << a;
// }
// #include <iostream>
// using namespace std;
// int fun(int n)
// {
// if(n==0 || n==1){
//     return n;
// }
//     return fun(n-1)+fun(n-2);
// }
// int main()
// {
//     int n;
//     cin>>n;
//     int a=fun(n);
//     cout << a;
// }
// #include <iostream>
// using namespace std;
// void fun(int n)
// {
    

//     if(n==0){
//         return ;
//     }
//    cout<<n;
//    return fun(n-1);
// }
// int main()
// {
//     int n;
//     cin >> n;
//      fun(n);
    
// }
// #include <iostream>
// using namespace std;


// void fun(int n)
// {
//     if(n==0){
//         return;
//     }
// fun(n-1);
// cout<<n;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     fun(n);
// }
// #include <iostream>
// using namespace std;

// int  fun(int arr[],int n,int i,int x)
// {
//     if (arr[i]==x)
//     {
//         return i;
//     }
//    return fun(arr,n,i+1,x);
// }
// int main()
// {int arr[]={4,2,1,2,5,2,7};
// cout<<fun(arr,7,0,2)
// }
// #include <iostream>
// using namespace std;

// int fun(int arr[],int n)
// {
//   if(n==0){
//       return 0;
//   }
//   return arr[0]+fun(arr+1,n-1);
// }
// int main()
// {
//     int arr[] = {4, 2, 1, 2, 5, 2, 7};
//     cout << fun(arr, 7);
// // }
// #include <iostream>
// using namespace std;

// int sumOfDigits(int n)
// {
//     // Write your code here
//     if(n==0){
//         return 0;
//     }
//     int a = n % 10;
//     n = n / 10;
//     return a + sumOfDigits(n);
// }
// int main()
// {
//     int n;
//     cin>>n;
//     cout << sumOfDigits(n);}
// }
// #include <iostream>
// #include <string.h>
// using namespace std;

// bool checkPalindrome(char input[])
// {
//     // Write your code here
//     static int i = strlen(input);
//     if (input[0] == input[i-1])
//     {
//         i--;

//         return true;
//     }
//     else
//     {
//         return false;
//     }
//     checkPalindrome(input + 1);
// }
// int main()
// {char n[]="helleh";
//     cout << checkPalindrome(n);
// }
#include <iostream>
#include <string.h>
using namespace std;

bool checkPalindrome(char input[])
{
    // Write your code here
    static int i = strlen(input);
    if (input[0] == input[i - 1])
    {
        i--;

        return true;
    }
    else
    {
        return false;
    }
    checkPalindrome(input + 1);
}
int main()
{
    char n[] = "helleh";
    cout << n+1;
}