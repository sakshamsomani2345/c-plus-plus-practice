#include <iostream>
using namespace std;
int main()
{
    char c[100];
    cin.getline(c, 100);
    char c1[100];
    cin.getline(c1, 100);
    int count = 0;
    char x;
    cin >> x;
    int k=0;
    for (int i = 0; c[i] != '\0'; i++)
    {
        count++;
    }
    int sum = 0;
    int i=0;
    for ( i = 0; i < count; i++)
    {
        if (c[i] == c[i + 1]){
            sum++;   
    }
    }
    c[k]==c[i];
    c[k++]=sum;


}