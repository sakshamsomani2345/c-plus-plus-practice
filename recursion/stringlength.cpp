#include <iostream>
#include <string.h>
using namespace std;

int replacePi(char input[])
{

    if (input[0] == '\0'){
        return 0;
    }
    
    return 1+replacePi(input + 1);
}

int main()
{
    char arr[100];
    cin >> arr;
    cout<<replacePi(arr);
}