#include <iostream>
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

for (int k = 0; k < count; k++)
{
    for (int i = k; i < count; i++)
    {
        for (int j =k; j <= i; j++)
        {
            cout << c[j];
        }
        cout << endl;
    }
}


    
    

}