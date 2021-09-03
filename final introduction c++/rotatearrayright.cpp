
#include <iostream>
using namespace std;

void printarray(int input[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << input[i] << " ";
    }
    cout << endl;
}
void bubblesort(int arr[], int n)
{
    int i;

    for (int j = 0; j < 2; j++)
    {
        int temp=arr[n-1];
        for ( i = n-1; i >= 1 ; i--)
        {
           arr[i]=arr[i-1];
        }
        arr[i]=temp;
    }
}

int main()
{
    int n;
    cin >> n;
    int input[100];
    for (int i = 0; i < n; i++)
    {
        cin >> input[i];
    }
    bubblesort(input, n);
    printarray(input, n);
}