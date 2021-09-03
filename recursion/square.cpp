#include <iostream>
using namespace std;

// int checkPalindrome(int n,int m)
// {

//     if (m == 0)
//     {
//         return 1;
//     }
//     return n *checkPalindrome(n,m-1);
// }

/////////ANOTHER WAY
int checkPalindrome(int n, int m)
{

    if (m == 0)
    {
        return 1;
    }
    if (m%2==0)
    {
        return checkPalindrome(n*n, m/2);
    }
    if (m%2!= 0)
    {
        return n * checkPalindrome(n, m - 1);
    }
}
int main()
{
    int n,m;
    cin >> n>>m;
    cout << checkPalindrome(n,m);
}