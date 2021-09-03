// /*  1
//    121
//   12321
//  1234321
// 123454321*/
// #include<iostream>
// using namespace std;
// int main(){
// int i,j,n;
// cin>>n;
// i=1;
// while(i<=n){
//     int k=1;
//     while(k<=n-i){
//         cout<<" ";
//         k++;
//     }
//     j=1;
//     while(j<=i){
//     cout<<j;
//     j++;
//     }
//     j=i-1;
//     while(j>=1){
//         cout<<j;
//         j--;
//     }
//     cout<<endl;
//     i++;
// }
// }
/*  1
   121
  12321
 1234321
123454321*/
#include<iostream>
using namespace std;
int main(){
int i,j,n;
cin>>n;
i=1;
while(i<=n){
    int k=1;
    while(k<=n-i){
        cout<<" ";
        k++;
    }
    j=1;
    while(j<=i){
    cout<<j;
    j++;
    }
    j=i-1;
    while(j>=1){
        cout<<j;
        j--;
    }
    cout<<endl;
    i++;
}
}

