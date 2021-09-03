#include <iostream>
using namespace std;
int main()
{
    int i = 1, j = 1, m, n;
    cin >> m;

    for (int i = 1; i <= m; i++)
    {
        for (int k = 1; k <= m - i; k++)
        {
            cout << " ";
        }

        for (int j = 1; j <= i; j++)
        {
            cout << '*';
        }
        for (int j = i - 1; j > 0; j--)
        {
            cout << '*';
        }

        cout << endl;
    }
}
//     *
//    ***
//   *****
//  *******
// *********