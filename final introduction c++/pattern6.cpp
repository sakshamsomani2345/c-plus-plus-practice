#include <iostream>
using namespace std;
int main()
{
    int i = 1, j = 1, m, n;
    cin >> m;
    for (int i = 1; i <= m; i++)
    {
        int p = m;
        for (int j = 1; j <= m; j++)
        {
            cout << p;
            p--;
        }
        cout << endl;
    }
}
// 54321
// 54321
// 54321
// 54321
// 54321