
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
void bubblesort(int arr[], int n,int k)
{
    

    for (int j = 0; j < k; j++)
    {
        for (int i = 0; i < n - 1; i++)
        {
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }
////////////////////anotherway----
    // for (int j = 0; j <k; j++)
    // {

    //     int temp = arr[0], i;

    //     for (i = 0; i < n - 1; i++)
    //     {
    //         arr[i] = arr[i + 1];
    //     }
    //     arr[i] = temp;
    // }
    
}

int main()
{
    int n,k;
    cin >> n>>k;
    int input[100];
    for (int i = 0; i < n; i++)
    {
        cin >> input[i];
    }
    bubblesort(input, n,k);
    printarray(input, n);
}