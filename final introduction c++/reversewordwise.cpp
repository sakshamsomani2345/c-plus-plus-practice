#include <iostream>
#include <climits>
using namespace std;
int main()
{
    char input[1024], word[100],a[200];
    cin.getline(input, 20);

    int count = 0;
    int count1 = 0;

    for (int i = 0; i < input[i] != '\0'; i++)
    {
        count++;
    }
    for (int i = 0; i < count / 2; i++)
    {
        int temp = input[i];
        input[i] = input[count - i - 1];
        input[count - i - 1] = temp;
    }
    int j = 0;
    for (int i = 0; input[i] = '\0'; i++)
    {
        if (input[i] == ' ')
        {
            word[j] = '\0';
            for (int i = 0; i < word[j] != '\0'; i++)
            {
                count1++;
            }
            for (int i = 0; i < count1; i++)
            {
                int temp = word[j];
                word[j] = input[count1 - j - 1];
                word[count1 - j - 1] = temp;
            }
            
        }
        else
        {
            word[j] = input[i];
            j++;
        }
    }

    cout << word;
}
