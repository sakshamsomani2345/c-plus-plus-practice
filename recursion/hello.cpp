/////////////////////////sumof digits
// #include<iostream>
// using namespace std;
// int digits(int n){
//     if(n==0){
//         return 0;
//     }
//      digits(n/10);

//     static int i=0;
//     int ans=n%10;
//     i=i+ans;
//     return i;
// }
// int main(){
//     int n;
//     cin>>n;
//     int c=digits(n);
//     cout<<c;
// }
///////////////////////////number of digits
// #include <iostream>
// using namespace std;
// int digits(int n)
// {
//     if (n == 0)
//     {
//         return 0;
//     }
//     digits(n / 10);

//     static int i = 0;
//     int ans = n % 10;
//     i++;
//     return i;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     int c = digits(n);
//     cout << c;
// }
////////////////////////////////
// #include <iostream>
// using namespace std;
// int digits(int n)
// {

//     if (n == 0)
//     {
//         return 0;
//     }
//     digits(n-1);
    
//     cout << n;
// }
// int main()
// {
//     int n;
//     cin >> n;
//      digits(n);
    
// }
////////////////////////find power
// #include <iostream>
// using namespace std;
// int digits(int n,int x)
// {

//     if (x== 0)
//     {
//         return 1;
//     }
//     return n*digits(n,x-1);
    
// }
// int main()
// {
//     int n,x;
//     cin >>n>>x;
//     int c=digits(n,x);
//     cout<<c;
// }
///////////////////////fibonacci number
// #include <iostream>
// using namespace std;
// int digits(int n)
// {

//     if (n== 1 || n==0)
//     {
//         return 1;
//     }
//     return digits(n-1)+ digits(n-2);
// }
// int main()
// {
//     int n;
//     cin >> n;
//     int c = digits(n);
//     cout << c;
// }
////////////////////////matrix path
// #include <iostream>
// using namespace std;
// int digits(int n,int m)
// {

//     if (n == 1 || m == 1)
//     {
//         return 1;
//     }
//     return digits(n-1,m) + digits(m,n-1);
// }
// int main()
// {
//     int n;
//     cin >>n;
//     int m;
//     cin>>m;
//     int c = digits(n,m);
//     cout << c;
// }
/////////////////////////sum of array
// #include <iostream>
// using namespace std;
// int digits(int arr[], int m)
// {
//     if(m==0){
//         return 0;
//     }
//     static int sum=0;
//     sum=sum+arr[0];
//     digits(arr+1,m-1);
//     return sum;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin>>arr[i];
//     }
//     int c=digits(arr,n);
//     cout<<c;
// }
// ///////////////////////////////check array is sorted or not
// #include <iostream>
// using namespace std;
// bool digits(int arr[],int n)
// {
//     if(n==0 || n==1){
//         return true;
//     }
//     if(arr[0]>arr[1]){
//      return false;
//      }

//     digits(arr + 1,n-1);
    
// }
// bool sorted(int arr[], int n)
// {
//     if (n == 0 || n == 1)
//     {
//         return true;
//     }
//    bool output= sorted(arr + 1, n - 1);
//     if(!output){
//         return false;
//     }
//     if (arr[0] > arr[1])
//     {
//         return false;
//     }
//     else{
//         return true;
//     }

// }

// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     bool c = digits(arr,n);
//     cout<<c;

// }
///////////////////////////////seraching in an array
// #include <iostream>
// using namespace std;
// bool digits(int arr[], int n,int x)
// {

//     if(n==0){
//         return false;
//     }
//     if (arr[0] == x)
//     {
//         return true;
//     }

//     digits(arr + 1, n - 1,x);

    
// }


// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     int x;
//     cin>>x;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     bool c = digits(arr, n,x);
//     cout << c;
// }
////////////////////////////////////returning first index;
// #include <iostream>
// using namespace std;
// int  digits(int arr[], int n, int x)
// {
// static int i=0;
//     if (n == 0)
//     {
//         return -1;
//     }
//     if (arr[0] == x)
//     {
//         return i;
//     }
// i++;
//     digits(arr + 1, n - 1, x);
// }

// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     int x;
//     cin >> x;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int c = digits(arr, n, x);
//     cout << c;
// }
////////////////////////////last index
// #include <iostream>
// using namespace std;
// int digits(int arr[], int n, int x)
// {
//     static int i = 0;
//     if (n == 0)
//     {
//         return -1;
//     }
//     if (arr[n] == x)
//     {
//         return n;
//     }
//     digits(arr, n - 1, x);
// }

// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     int x;
//     cin >> x;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int c = digits(arr, n, x);
//     cout << c;
// }
///////////////////////all indices
// #include <iostream>
// using namespace std;
// void digits(int arr[], int n, int x)
// {
//     static int i = 0;
//     static int k = 0;

//     if (n == 0)
//     {
//         return;
//     }
//     if (arr[0] == x)
//     {
//         arr[k]=i;
//         k++;
//     }
//     i++;
//     digits(arr+1, n - 1, x);
// }

// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     int x;
//     cin >> x;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     digits(arr, n, x);
// }
//////////////////////check palindrome
// #include <iostream>
// using namespace std;
// bool digits(int arr[], int n)
// {
//     if(n==0 || n==1){
//         return true;
//     }
//      if(arr[0]!=arr[n-1]){
//          return false;
//      }
// digits(arr + 1, n - 2);
// }
// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     bool c=digits(arr, n);
//     cout<<c;
// }
///////////////////count sum 1/1+1/2+1/3+1/n series
// #include <iostream>
// using namespace std;
// double digits( double n)
// {
//     if(n==0){
//         return 0;
//     }
    
//     return (1/n +digits(n-1));
// }
   
// int main()
// {
//     int n;
//     cin >> n;
//     double c=digits(n);
//     cout<<c;
// }
// #include <iostream>
// using namespace std;
// int digits(int n)
// {
//     if(n==0){
//         return 0;
//     }
//     static int i=0;
   
//     digits(n/10);
//     if (n % 10 == 0)
//     {
//         i++;
//     }
//     return i;
// }
// if (n == 0)
// {
//     //         return 0;
//     //     }
//     //      digits(n/10);

//     //     static int i=0;
//     //     int ans=n%10;
//     //     i=i+ans;
//     //     return i;
/////////////N natural numbers sum
//  #include<iostream>
//  using namespace std;

//  int fun(int n){
//      if(n==0){
//          return 0;
//      }

//      return n+fun(n-1);
//  }
//  int main(){
//      int n;
//      cin>>n;
//      int c=fun(n);
//      cout<<c;
//  }
///////////first index another method
// #include <iostream>
// using namespace std;

// int fun(int arr[],int n,int i,int x)
// {
//    if(i==n){
//        return -1;
//    }
//    if(arr[i]==x){
//        return i;
//    }
//    return fun(arr,n,i+1,x);
// }
// int main()
// {
//     int n;
//     cin >> n;
//     int x;
//     cin>>x;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin>>arr[i];
//     }
//     int i=0;
//     int c = fun(arr,n,i,x);
//     cout << c;
// }
///////////////////////last index
// #include <iostream>
// using namespace std;

// int fun(int arr[], int n, int i, int x)
// {
//     if (i == n)
//     {
//                return -1;
//            }
//         int rest = fun(arr, n, i + 1, x);
//         if (rest != -1)
//         {
//             return rest;
//         }
//         if (arr[i] == x)
//         {
//             return i;
//         }
//         return -1;
//     }
// int main()
// {
//     int n;
//     cin >> n;
//     int x;
//     cin >> x;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int i = 0;
//     int c = fun(arr, n, i, x);
//     cout << c;
// }
//////////////////////length of a string
// #include <iostream>
// using namespace std;
// int fun(char arr[],int i)
// {
//    
//     if(arr[0]=='\0'){
//         return 0;
//     }
//     if(arr[i]=='\0'){
//         return i;
//     }

//     fun(arr,i+1);
    
// }
// int main()
// {
//     char arr[100];
//     cin>>arr;
//     int i=0;
//     int c=fun(arr,i);
//     cout<<c;
// }
///////////length of string another method
// #include <iostream>
// using namespace std;
// int fun(char arr[])
// {
//     if (arr[0] == '\0')
//     {
//         return 0;
//     }
    

//     return 1+fun(arr+1);
// }
// int main()
// {
//     char arr[100];
//     cin >> arr;
    
//     int c = fun(arr);
//     cout << c;
// }
//////////////////remove a character
// #include <iostream>
// using namespace std;
// void fun(char arr[],char x,int i,int l)
// {
//     if (arr[0] == '\0')
//     {
//         return;
//     }
//     if(arr[i]==x){
//         for (int i = 0; i <l; i++)
//         {
//             arr[i]=arr[i+1];
//         }
        
//     }

// fun(arr,x,i+1,l);

// void fun(char s[],char x)
// {
//     if (s[0] != x)
//     {
//         fun(s + 1,x);
//     }
//     else
//     {
//         int i = 1;
//         for (; s[i] != '\0'; i++)
//         {
//             s[i - 1] = s[i];
//         }
//         s[i - 1] = s[i];
//         fun(s,x);

//     }
// }
// int main()
// {
//     char arr[100];
//     cin >> arr;
// char x;
// cin>>x;
// int count=0;
// for (int i=0;arr[i]!='\0';i++)
// {
//     count++;
// }

// int l=count;
// int i=0;
//      fun(arr,x);
//     cout<<arr;
// }
//////////////replace pi with 3.14
// #include <iostream>
// using namespace std;
// void fun(string s)
// {
//     if(s.length()==0){
//         return;
//     }
// if(s[0]=='p' && s[1]=='i'){
//    cout<<"3.14";
//    fun(s.substr(2));
    
// }else{
//     cout<<s[0];
//     fun(s.substr(1));
// }
    
// }
// int main()
// {
//     string s="pippxxppiixipi";
//     fun(s);
// }
////////////replace pi with 3.14 in character array
// #include <iostream>
// #include <string.h>
// using namespace std;
// void fun(char s[])
// {
//     if (s[0]== '\0')
//     {
//         return;
//     }
//     if (s[0] == 'p' && s[1] == 'i')
//     {
//         s[0]='3';
//         s[1]='.';
//         for (int i =strlen(s)+2;i>1; i--)
//         {
//             s[i]=s[i-2];
//         }
//         s[2]='1';
//         s[3]='4';
        
//     }
//     fun(s+1);
// }
// int main()
// {
//     char s[] = "pippxxppiixipi";
//     fun(s);
//     cout<<s;
// }
//////////////remove duplicates from a string
// #include <iostream>
// #include <string.h>
// using namespace std;
// int fun(string s)
// {
//     if(s.length()==0){
//         return;
//     }
//     char ch=s[0];
//     string ans= fun(s.substr(1));
// if(ch==ans[0]){
//     return ans;
// }

// }
// int main()
// {
//     string s = "pippxxppiixipi";
//     fun(s);
//     cout << s;
// // }
///////////////////////print subsequences
// #include <iostream>
// #include <string.h>
// using namespace std;
// void fun(string s,string ans)
// {
//     if(s.length()==0){
//         cout<<ans<<endl;
//         return;
//     }
//     char ch=s[0];
//     fun(s.substr(1), ans);
//     fun(s.substr(1), ans+ch);
// }
// int main()
// {
//     string s = "abc";
//     fun(s," ");
// }
//////////////////print subsequences another method
// #include <iostream>
// #include <string.h>
// using namespace std;
// int fun(string input, string output[])
// {
//     if (input.empty())
//     {output[0]=" ";
        
//         return 1;
//     }
//     string smallstring=input.substr(1);
//     int smalloutputsize=fun(smallstring,output);
//     for (int i = 0; i < smalloutputsize; i++)
//     {
//     output[i+smalloutputsize]=input[0]+output[i];
//     }
//     return 2*smalloutputsize;
    
// }
// int main()
// {
//     string s = "abc";
//     string *output=new string[1000];
//     int count=fun(s,output);
//     for (int i = 0; i < count; i++)
//     {
//         cout<<output[i]<<endl;
//     }

// }
/////////////////////////////
// #include <iostream>
// #include <string.h>
// using namespace std;
// void fun(int n,string str[])
// {
//     if(n==0){
//         return;
//     }
//     fun(n/10,str);
//     cout<<str[n%10]<<" ";
// }
// int main()
// {
//    int n;
//    cin>>n;
//    string str[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
//    fun(n,str);
// }
#include<iostream>
#include<string.h>
using namespace std;
void fun(string s, string ans)
{
    if (s.length() == 0)
    {
        cout << ans << endl;
        return;
    }
    char ch = s[0];
    int code=ch;
    fun(s.substr(1), ans);
    fun(s.substr(1), ans + ch);
    fun(s.substr(1), ans + to_string(code));
}
int main()
{
    string s = "AB";
    fun(s, " ");
}
///////////////to count number of digits another method
// #include <iostream>
// #include <string.h>
// using namespace std;
// int fun(int n, int &sum)
// {
//     if (n == 0)
//     {
//         return 0;
//     }
//     static int i = 0;
//     int a = n % 10;
//     sum++;
//     fun(n / 10, sum);
// }
// int main()
// {
//     int n;
//     cin >> n;
//     int sum = 0;
//     fun(n, sum);
//     cout << sum;
// }