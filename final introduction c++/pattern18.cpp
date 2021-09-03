
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
            cout << '*';
            
        }
        for (int k = 1; k <= 2*m-2*i; k++)
        {
            cout << " ";
        }

        for (int j = 1; j <= i; j++)
        {
            cout << '*';
            
        }

        cout << endl;
    }
    for (int i = m; i >=1; i--)
    {


        for (int j = 1; j <= i; j++)
        {
            cout << '*';
        }
        for (int k = 1; k <= 2 * m - 2 * i; k++)
        {
            cout << " ";
        }

        for (int j = 1; j <= i; j++)
        {
            cout << '*';
        }

        cout << endl;
    }
}
// *          *
// **        **
// ***      ***
// ****    ****
// *****  *****
// ************
// ************
// *****  *****
// ****    ****
// ***      ***
// **        **
// *          *