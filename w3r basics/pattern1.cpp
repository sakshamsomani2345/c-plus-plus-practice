// 54321
// 4321
// 321
// 21
// 1
// Write a program in C++ to display the pattern using digits with left justified and the highest columns appears in first row in descending order

#include <iostream>
    using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i<=n; i++)
    { int p = n-i+1;
        for (int j = n-i+1; j>=1; j--)
        { cout <<j;
            p--; }
        cout << endl;}}