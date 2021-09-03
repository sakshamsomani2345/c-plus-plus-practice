#include <iostream>
#include<string.h>
using namespace std;


bool help(char arr[],int l){
    if(l==0 || l==1){
     return true;
    }
    if(arr[0]!=arr[l-1]){
        return false;
    }
    
   bool c=help(arr+1,l-2);
   return c;
}
bool check(char arr[])
{
    int l=strlen(arr);
    bool c= help(arr,l);
    return c;
}

int main()
{
    char arr[10];
    cin >> arr;
    bool c=check(arr);
    cout<<c;
}