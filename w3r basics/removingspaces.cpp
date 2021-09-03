#include <iostream>
#include<string>
using namespace std;
int main()
{
    char c[100];
    cin.getline(c, 100);
    int count = 0;
    for (int i = 0; c[i] != '\0'; i++)
    {
        count++;
    }

    for (int i = 0; i < count; i++)
    {
        if (c[i]==' ')
        {
            for (int j = i; j <count; j++)
            {
                c[j] = c[j + 1];
            }
        }
    }
    cout<<c;
}