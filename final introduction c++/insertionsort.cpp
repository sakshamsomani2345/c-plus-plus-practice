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
   for (int i = 1; i < n; i++)
   {
       int current=arr[i];
       int j=i-1;
       for (;j>=0 && arr[j]>current;j--)
       {
           arr[j+1]=arr[j];
       }
       arr[j+1]=current;   
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