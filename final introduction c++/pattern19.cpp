
#include <iostream>
using namespace std;
int main()
{
    int i = 1, j = 1, m, n;
    cin >> m;

    for (int i = 1; i <= m; i++)
    {

        for (int j = 1; j <= m-i+1; j++)
        {
            cout << j;
        }

        cout << endl;
    }
    
}
// 12345
// 1234
// 123
// 12
// 1