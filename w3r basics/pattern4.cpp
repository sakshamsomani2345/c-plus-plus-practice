// 1
// 24
// 135
// 2468
// 13579
#include <iostream>
using namespace std;
int main()
{

    for (int i = 1; i <= 5; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            if (i % 2 == 0)
            {
                cout << 2 * j;
            }
            else
            {
                cout << 2 * j - 1;
            }
        }
        cout << endl;
    }
}