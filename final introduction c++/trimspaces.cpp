#include <iostream>
#include <climits>
using namespace std;
int main()
{
    char input[1024];
    cin.getline(input, 20);

    int count = 0;

    for (int i = 0; i < input[i] != '\0'; i++)
    {
        count++;
    }
    for (int i = 0; i < count; i++)
    {
    if(input[i] == ' '){
        input[i]=input[i+1];
    }

    }
    cout << input;
}