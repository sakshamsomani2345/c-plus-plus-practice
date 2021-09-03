#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int no_row, c = 1, blk, i, j;
    cin>>no_row;
    for (i = 0; i < no_row; i++)
    {
        for (blk = 1; blk <= no_row - i; blk++)
            cout<<" ";
        for (j = 0; j <= i; j++)
        {
            if (j == 0 || i == 0)
                c = 1;
            else
                c = c * (i - j + 1) / j;
            // printf("% 4d", c);
            cout<<c<<" ";
        }
        cout<<endl;
    }
}