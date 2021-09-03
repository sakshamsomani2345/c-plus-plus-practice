// 1     1
//  2   2
//   3 3
//    4
//   3 3
//  2   2
// 1     1
#include <iostream>
using namespace std;
int main()
{
    int i, j, k = 1;
    for (i = 0; i < 7; i++)
    {
        for (j = 1; j <= 7; j++)
        {
            if (j == i + 1 || j == 7 - i)
            {
                cout << k;
            }
            else
            {
                cout << " ";
            }
        }
        if (i >= 3)
        {
            k = k - 1;
        }
        else
        {
            k = k + 1;
        }
        cout << "\n";
    }
    return 0;
}