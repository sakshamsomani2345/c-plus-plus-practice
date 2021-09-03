// #include <iostream>
// #include <climits>
// using namespace std;



// int main()
// {
//     int n;
//     cin>>n;
//     int arr[n];
//     for (int i = 0; i <n; i++)
//     {
//         cin>>arr[i];
//     }
//     int c;
//    for (int i = 0; i < n; i++)
//    {
//        int j;
//        for ( j = i+1; j  < n;j++)
//        {
//            if(arr[i]<=arr[j]){
//                 break;
//            }
//        }
//        if(j==n){
// cout<<arr[i];
//        }
       
//    }
   
    
// }
#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n, m;
    cin >> n;
    int arr[n][n];
 

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {


        for (int k = 0; k<n-i; k++)
        {
            for (int j = 0; j < n; j++)
            {

                cout << arr[i][j] << " ";
            }
            cout<<endl;
        }
        
        
    }

   
       
}
// 1 2 3 
// 1 2 3
// 1 2 3
// 4 5 6
// 4 5 6
// 7 8 9