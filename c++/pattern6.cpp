// #include<iostream>
// using namespace std;


// int main(){

//        /*  Read input as specified in the question.
// 	* Print output as specified in the question.
// 	*/
//     int i,j,n,p;
//     cin>>n;
//     i=1;
//         while(i<=n){
//             j=1;
//             p=i;
//             while(j<=i){
//                 cout<<p;
//                     j++;
            
//             }
//             cout<<endl;
//             i++;
//         }
  
// }
#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
    int i,j,n,p;
    cin>>n;
    i=1;
        while(i<=n){
            j=1;
            p=i;
            while(j<=i){
                cout<<p;
                    j++;
                    p--;
            
            }
            cout<<endl;
            i++;
        }
  
}