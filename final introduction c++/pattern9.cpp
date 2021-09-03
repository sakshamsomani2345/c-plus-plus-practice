#include <iostream>
using namespace std;
int main()
{
    int i = 1, j = 1, m, n;
    cin >> m;
    for (int i = 1; i <= m; i++)
    {
        char c = 'A'+i-1;

        for (int j = 1; j <= m; j++)
        {
            cout << c;
            c++;
        }
        cout << endl;
    }
}
// ABCDE
// BCDEF
// CDEFG
// DEFGH
// EFGHI