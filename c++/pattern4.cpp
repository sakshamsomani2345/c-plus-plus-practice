/*
1
23
345
4567*/
// #include<iostream>
// using namespace std;


// int main(){
// int i,n,j,k,val;
//     i=1;
//     cin>>n;
//     while(i<=n){
//         j=1;
//         val=i;
        
//         while(j<=i){
//             cout<<val;
//             j++;
//             val++;
//         }
//         cout<<endl;
//         i++;
//     }
//        /*  Read input as specified in the question.
// 	* Print output as specified in the question.
// 	*/
  
// }
#include<iostream>
using namespace std;


int main(){
int i,n,j,k,val;
    i=1;
    cin>>n;
    while(i<=n){
         int k=1;
    while(k<=n-i){
        cout<<" ";
        k++;
    }
        j=1;
        val=i;
        
        while(j<=i){
            cout<<val;
            j++;
            val++;
        }
        j=i-1;
       int al=i;
    while(j>=1){
        cout<<al;
        j--;
        al+2;
    }
        cout<<endl;
        i++;
    }
   
  
}