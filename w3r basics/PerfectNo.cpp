//to check wheter a given no is prime or not
///////////////////////////////////////////////////
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int sum=0;
//     for (int i = 1; i <=n/2 ; i++)
//     {
//         if (n%i==0)
//         {
//             sum=sum+i;
//         }
        
//     }
//    if (sum==n)
//    {
//        cout<<"perfectnpoo";
//    }
//    else{
//        cout<<"nota perfectnos";
//    }

// Write a program in C++ to find the perfect numbers between 1 and 500.
#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <=500; i++)
    {

        int sum = 0;

        for (int j = 1; j <i; j++)
        {
            if (i % j == 0)
            {
                sum = sum + j;
            }
        }
        if(sum==i){
            cout<<i;
        }
    }

}