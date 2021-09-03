#include <iostream>
using namespace std;
int main()
{
    char c[100];
    cin.getline(c, 100);
    int count = 0;
    char x;
    cin>>x;
    for (int i = 0; c[i] != '\0'; i++)
    {
        count++;
    }
    int k=0;
    for (int i = 0; i < count; i++)
    {
        if (c[i]!=x)
        {
            c[k]=c[i];
            k++;
        }
        
    }
    c[k] = '\0';

    cout<<c;
    
}