
#include <iostream>
using namespace std;

int main()
{
    int n,m;
    cin >> n>>m;
    int input1[n],input2[m];

    int temp=m+n;
    int input[temp];

    for (int i = 0; i < n; i++)
    {
        cin >> input1[i];
    }
     for (int i = 0; i < m; i++)
    {
        cin >> input2[i];
    }
    int k = 0, i = 0, j = 0;
    for ( ; i < n && j<m; )
    {

        if(input1[i]==input2[j]){
            input[k]=input1[i];
            k++;
            input[k] = input1[i];
            k++;
            i++;
            j++;
        }
     else   if(input1[i]<input2[j]){
       input[k]=input1[i];
       i++;
       k++;
       continue;
       }
       else 
       {
           input[k] = input2[j];
           j++;
           k++;
           continue;
       }
       
    }  

    if(i==n){
        while(j<m){
            input[k]==input2[j]
            ;k++;
            j++;
        }
    }
    else{
        while(i<n){
            input[k]=input1[i];
            k++;
            i++;
        }
    }
    
    for (int i = 0; i <temp; i++)
    {
    cout << input[i];
    }

    
    
    
}