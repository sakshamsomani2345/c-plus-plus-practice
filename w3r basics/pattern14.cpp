// 1 
// 3 2
// 4 5 6
// 10 9 8 7
// 11 12 13 14 15


#include <iostream>
using namespace std;
int main()
{
    int n, i = 1, j, k, l = 1;
    cin >> n;
    while (i <= n)
    {
        j = 1;
        if (i % 2 != 0)
        {
            k = l;
            while (j <= i)
            {
                cout << k++ << " ";
                j++;
            }
        }
        else
        {
            k += i - 1;
            l = k + 1;
            while (j <= i)
            {
                cout << k-- << " ";
                j++;
            }
        }
        cout << endl;
        i++;
    }
    return 0;
}