#include <iostream>
using namespace std;

int checkPalindrome(int n)
{

if(n==0){
    return 0;
}
return n+checkPalindrome(n-1);


}
int main()
{
    int n;
    cin>>n;
    cout << checkPalindrome(n);
}