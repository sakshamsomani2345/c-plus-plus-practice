
#include <iostream>
using namespace std;
int main()
{
    int i = 1, j = 1, m, n;
    cin >> m;

    for (int i = 1; i <= m; i++)
    {

        for (int j = 1; j <= i; j++)
        {
           if((i+j)%2==0){
               cout<<1;
           }
           else{cout<<0;}
        }

        cout << endl;
    }
}
// 1
// 01
// 101
// 0101
// 10101