// 1 2 3 4 5
// 2 1 2 3 4
// 3 2 1 2 3
// 4 3 2 1 2
// 5 4 3 2 1
#include <stdio.h>
int main()
{
    int i, j, k;
    for (i = 1; i <= 5; i++)
    {
        for (k = i; k > 1; k--)
            printf("%d ", k);
        for (j = 1; j <= 6 - i; j++)
            printf("%d ", j);
        printf("\n");
    }
    return 0;
}