//     *
//    ***
//   *****
//  *******
// Write a program in C++ to display the pattern like a pyramid using asterisk and each row contain an odd number of asterisks.

#include <iostream>
    using namespace std;
int main()
{
    int n;
    cin>>n;
    for ( int i =1; i <n; i++)
    {
        for (int k = 1; k <=n-i; k++)
        {
           cout<<" ";
        }
        
        for (int j = 1; j <=2*i-1; j=j+1)
        {
            cout<<"*";
            
        }
        cout<<endl;
        
    }
    
}
