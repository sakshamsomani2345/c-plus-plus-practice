// #include <iostream>
// using namespace std;
// void binarysearch(int arr[], int n)
// {
//     int i;
//     for (i = 0; i < n -1; i++)
//     {

//         for (int j = 0; j < n-1-i; j++)
//         {

//             if (arr[j] > arr[j+1])
//             {
//                 int temp = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = temp;
//             }
//         }
        
       
//     }
// }

// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     binarysearch(arr, n);
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i];
//     }
// }
#include <iostream>
using namespace std;
// int main(){
//    int arr[]={3,1,6,9,0,4};
//    for(int i=0;i<6;i++){
//         int min=arr[i];
//         if(arr[i+1]<min){
//            int  temp=min;
//            min=arr[i+1];
//            arr[i+1]=temp;
//         }
//    }
//    for(int i=0;i<6;i++){
//         cout<<arr[i]<<" ";
//    }
//    cout<<endl;
// }
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
    for (int j = 0; j < n - 1; j++)
        for (int i = 0; i < n - 1 - j; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
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