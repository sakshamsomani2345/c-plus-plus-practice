#include <iostream>
#include <climits>
using namespace std;
int main()
{
    char input[1024];
    cin >> input;
    char c1,c2;
    int count = 0;
    cin>>c1>>c2;
    for (int i = 0; i < input[i] != '\0'; i++)
    {
        count++;
    }
    for (int i = 0; i < count; i++)
    {
        if(input[i] == c1){
            input[i] =c2;
        }
    }
    cout <<input;
}