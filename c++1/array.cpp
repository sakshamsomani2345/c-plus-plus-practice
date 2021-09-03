/*Take 20 integer inputs from user and print the following : number of positive numbers
                                                               number of negative numbers
                                                                   number of odd numbers
                                                                       number of even numbers
                                                                           number of 0.*/
#include <iostream>
                                                           using namespace std;
int main(){
    int n,a=0,b=0,c=0,d=0,e=0;
    cin>>n;
    bool div;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for (int i = 0; i <n; i++)
{
    if(arr[i]>0){//+ve
        a++;
    }
    else if(arr[i]<0){//-ve
        b++;
    }
    else if(arr[i]==0){//for zero
        c++;
    }
    if(arr[i]%2==0){//for even
        d++;
    }
    if (arr[i] % 2 != 0)//for odd
    {
        e++;
    }
}
cout<<a<<b<<c<<d<<e;
}