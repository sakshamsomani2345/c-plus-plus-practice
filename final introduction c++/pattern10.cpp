#include <iostream>
using namespace std;
int main()
{
    int i = 1, j = 1, m, n;
    cin >> m;
    for (int i = 1; i <= m; i++)
    {
        char c = 'A'+i-1;

        for (int j = 1; j <= i; j++)
        {
            cout << c;
            
        }
        cout << endl;
    }
}
// A
// BB
// CCC
// DDDD
// EEEEE