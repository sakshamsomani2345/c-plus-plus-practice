/*ABCDE
ABCDE
ABCDE
ABCDE
ABCDE*/
#include<iostream>
using namespace std;
int main(){
int i,j,n,p;
cin>>n;
i=1;
while(i<=n){
    j=1;
    char b=65;
    while(j<=n){
    cout<<b;
    j++;
    b++;
    }
    cout<<endl;
    i++;
}
}
// or

// #include<iostream>
// using namespace std;
// int main(){
//       int i,j,n;
//     cin>>n;
//     i=1;
//     while(i<=n){
//         j=1;
//         while(j<=n){
//             char help='A'+j-1;
//             cout<<help;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }}