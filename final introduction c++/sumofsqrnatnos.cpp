#include <iostream>
#include <climits>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int a, b = 1, sum = 0, d;
    for (int i = 1; i <= n;  i++)
    {
        d=i*i;
        cout<<d<<endl;
        sum = sum + d;
    }
    cout << sum;
}