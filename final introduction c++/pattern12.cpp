#include <iostream>
using namespace std;
int main()
{
    int i = 1, j = 1, m, n;
    cin >> m;
    int p=m;
    for (int i = 1; i <= m; i++)
    {

        for (int j = 1; j <= m - i + 1; j++)
        {
            cout << p;
        }
        
        
        p--;
        cout << endl;
    }
}
// 4444
// 333
// 22
// 1