#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n, gcd, m;
    cin >> n >> m;
    for (int i = 1; i <= n && i <= m; i++)
    {
        if (n % i == 0 && m % i == 0)
        {
            gcd = i;
        }
    }
    int lcm;
    lcm = (n * m) / gcd;
    cout << lcm;
}