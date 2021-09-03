#include <iostream>
#include <string.h>
using namespace std;

void replacePi(char input[])
{
    // Write your code here
    if (input[0] == '\0')
        return;
    if (input[0] == 'p' && input[1] == 'i')
    {
        input[0] = '3';
        input[1] = '.';

        int size = strlen(input);
        for (int i = size + 2; i > 1; i--)
        {
            input[i] = input[i - 2];
        }
        input[2] = '1';
        input[3] = '4';
    }

    replacePi(input + 1);
}

int main()
{
    char arr[100];
    cin>>arr;
    replacePi(arr);
    cout << arr;
}