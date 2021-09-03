
#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cin >> m;

    for (int i = 1; i <= m; i++)
    {

        for (int k = 1; k <= m - i; k++)
        {
            cout << " ";
        }
int p=i;
        for (int j = 1; j <= i; j++)
        {

            cout << p ;
            p--;
        }
        for (int j = 2; j <= i; j++)
        {

            cout << j;
            
        }

        cout << endl;
    }
}
//     1
//    212
//   32123
//  4321234
// 543212345