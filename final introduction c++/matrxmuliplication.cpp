#include <iostream>
#include <climits>
using namespace std;
int main(){
    int n,m,a,b;
    cin>>a>>n>>b;
    int arr1[a][n];
    int arr2[n][b];
    int arr3[a][b];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>arr1[i][j];
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cin >> arr2[i][j];
        }
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            arr3[i][j]=0;
        }
    }

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
        for (int k = 0; k < n; k++)
        {
        arr3[i][j] += arr1[i][k] * arr2[k][j];
        }
        
         
        }
    }

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cout<< arr3[i][j]<<" ";
        }
        cout<<endl;
    }
}