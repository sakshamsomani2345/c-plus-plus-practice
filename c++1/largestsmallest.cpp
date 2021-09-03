#include <iostream>
using namespace std;
int main()
{
    int n, i, sum = 0, product = 1,largest,smallest;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int min = arr[0];
    int lar = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i]>lar){
             lar=arr[i];
        }
        if (arr[i] <min)
        {
            min = arr[i];
        }
    }
    cout<<lar<<endl<<min;
}
