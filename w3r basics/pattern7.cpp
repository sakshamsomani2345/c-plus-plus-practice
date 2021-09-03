#include <iostream>
using namespace std;
int main()
{
    int i, j;
    for (i = 0; i < 7; i++)
    {
        for (j = 1; j <= 7; j++)
        {
            if (j == i + 1 || j == 7 - i)
            {
                cout << i + 1;
            }
            else
            {
                cout << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}
// 1     1
//  2   2
//   3 3
//    4
//   5 5
//  6   6
// 7     7