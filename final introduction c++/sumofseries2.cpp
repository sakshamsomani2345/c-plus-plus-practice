#include <iostream>
#include <climits>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int a=1, b = 1, sum = 0, d;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + a;

        a = a * 10 + 1;
        cout << a << endl;
    }
    cout << sum;
}