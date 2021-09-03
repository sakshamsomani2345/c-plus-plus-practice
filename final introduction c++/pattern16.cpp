#include <iostream>
using namespace std;
int main()
{
    int i = 1, j = 1, m, n;
    cin >> m;

    for (int i = 1; i <= m; i++)
    {n=i;
        for (int k = 1; k <= m - i; k++)
        {
            cout << " ";
        }

        for (int j = 1; j <= i; j++)
        {
            cout << n;
            n++;
        }
        for (int j = i - 1; j > 0; j--)
        {
            cout << i-1+j;
        }

        cout << endl;
    }
}
//     1
//    232
//   34543
//  4567654
// 567898765