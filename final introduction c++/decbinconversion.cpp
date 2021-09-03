#include <iostream>
using namespace std;
int main()
{
    int m, p;
    cin >> m;

    int decimalsum = 0, weight = 1;
    for (; m != 0; weight = weight * 10)
    {
        int rem = m % 2;
        
        decimalsum = decimalsum + rem * weight;
        m = m / 2;
    }
    cout << decimalsum;
    }
    