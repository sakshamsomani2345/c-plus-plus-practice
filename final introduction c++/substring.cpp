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

for (int k = 0; input[k]!=0; k++)
{
    for (int i = k; i < count; i++)
    {
        for (int j = k; j <= i; j++)
        {
            cout << input[j];
        }
        cout << endl;
    }
}

    
   
    
    
}