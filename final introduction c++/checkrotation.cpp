
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
{int count=1;
    for (int i = 0; i < n-1; i++)
    {
        if(arr[i]>arr[i+1]){
            count++;
        }
        
    }
    cout<<count;
    
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