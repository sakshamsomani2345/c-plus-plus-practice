
#include <iostream>
using namespace std;
int main()
{
    int a, b, x, found = 0;
    cin >> a >> b ;
    int arr[a][b];

    for (int i = 0; i < a; i++)
    {

        for (int j = 0; j < b; j++)
        {
            cin >> arr[i][j];
        }
    }
    
    for (int i = 0; i < a; i++)
    {

        for (int j = i; j < b; j++)
        {
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }
    for (int i = 0; i < a; i++)
    {

        for (int j = 0; j < b; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}