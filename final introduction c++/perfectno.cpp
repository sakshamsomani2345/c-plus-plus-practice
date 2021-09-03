// #include <iostream>
// #include <climits>
// using namespace std;

// int main()
// {

//     int n;
//     cin >> n;
//     int a = 1, b = 1, sum = 0, d;
//     for (int i = 1; i < n; i++)
//     {
//         if(n%i==0){
//             cout<<i<<endl;
//             sum=sum+i;
            
//         }
        
//     }
//     if(sum!=n){
//         cout<<"not a perfect no";
//     }
//     cout << sum;
// }
#include <iostream>
#include <climits>
using namespace std;

int main()
{   int n;
    cin >> n;
    int sum = 0 ;
    for (int i = 1; i < n; i++)
    {
             int j=1;

        for (; j < i; )
        {
            if (i % j == 0)
            {      
                sum = sum + j;
                j++;
            }
            if (sum == i)
            {
                cout << i << endl;
                
            }
        }     
    }   
}