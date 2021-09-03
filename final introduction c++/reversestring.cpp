#include <iostream>
#include <climits>
using namespace std;
int main()
{
    char input[1024];
 cin.getline(input,20);

    int count = 0;
    
    for (int i = 0; i < input[i] != '\0'; i++)
    {
        count++;
    }
    for (int i = 0; i < count / 2; i++)
    {
                 int temp=input[i];
                 input[i]=input[count-i-1];
                 input[count - i - 1]=temp;
    }
    cout << input;
}
   
