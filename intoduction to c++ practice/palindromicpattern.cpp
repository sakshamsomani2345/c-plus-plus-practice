 /*
   *
  ***
 *****
*******
*******
 *****
  ***
   *
   */
#include <iostream>
using namespace std;
int main()
{
    int rows;
    cin >> rows;
    for (int i = 1; i <= rows; i++)
    {
        for (int k = 1; k <= rows - i; k++)
        {
            cout << " ";
        }
        for (int k = 1; k <= 2*i-1; k++)
        {
            cout << '*';
        }
        
        cout << endl;
    }
    for (int i = rows; i>=1; i--)
    {
        for (int k = 1; k <= rows - i; k++)
        {
            cout << " ";
        }
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            cout << '*';
        }

        cout << endl;
    }
}