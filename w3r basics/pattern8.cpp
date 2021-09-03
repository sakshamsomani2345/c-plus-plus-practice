#include <iostream>
using namespace std;
int main()
{
    int i, j;
    int p=1;
    int x=4;
    int y=1;
    for (i = 1; i <=7; i++)
    {
        for (j = 1; j <= 7; j++)
        {
            if (j+i==5)
            {
                cout <<p;
                p++;
            }
            if (j + i ==11)
            {
                cout << x;
                x--;
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