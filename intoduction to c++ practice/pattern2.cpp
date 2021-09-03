/*
0****
*0***
**0**
***0*
****0
*/
/*
*   *
 * *
  *
 * *
*   *
*/
#include <iostream>
using namespace std;
int main()
{
    int rows;
    cin >> rows;
    for (int i = 1; i <= rows; i++)
    {
        for (int k = 1; k <= rows; k++)
        {
            if (i ==k || i+k==rows+1 )
            {
                cout << '*';
            }
            else
            {
                cout << " ";
            }
        }

        cout << endl;
    }
}