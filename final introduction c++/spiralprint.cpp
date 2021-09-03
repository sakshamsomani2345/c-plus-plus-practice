#include <iostream>
#include <climits>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    int rowstart=0,rowend=n-1,columnstart=0,columnend=m-1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<< arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;

    while(rowstart<=rowend && columnstart<=columnend){
     
     for (int i = columnstart; i <= columnend; i++)
     {
        cout<<arr[rowstart][i]<<" "; 
     }
     rowstart++;
     for (int i = rowstart; i <=rowend; i++)
     {
         cout<<arr[i][columnend]<<" ";
     }
     columnend--;
     for (int i = columnend; i>=columnstart; i--)
     {
       cout<<arr[rowend][i]<<" ";       
     }
     rowend--;
     for (int i = rowend; i >=rowstart; i--)
     {
         cout<<arr[i][columnstart]<<" ";
     }
     columnstart++;
    }
}
