#include <iostream>
#include <climits>
using namespace std;
int main()
{
    char input[1024];
    cin >> input;
    int count = 0;
    for (int i = 0; i < input[i] != '\0'; i++)
    {
        count++;
    }
int i,j;                           
    for (i = 1, j = 0; i <count; i++)
    {
        if (input[j] != input[i])
        {
            j++;
            input[j] = input[i];
        }
    }
    input[j + 1] = '\0';
}
