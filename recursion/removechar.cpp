#include <iostream>
#include <string.h>
using namespace std;

void replacePi(char input[])
{
    
    if(input[0]=='\0'){
        return;
    }
    if(input[0]!='x'){
        replacePi(input+1);
    }
    else{int i=1;
        for (; input[i]!='\0'; i++)
        {
        input[i-1]=input[i];
        }
        input[i - 1] = input[i];
        replacePi(input);
    }

}

int main()
{
    char arr[100];
    cin >> arr;
    replacePi(arr);
    cout << arr;
}