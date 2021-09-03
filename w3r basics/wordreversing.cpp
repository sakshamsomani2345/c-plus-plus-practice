// #include <iostream>
// using namespace std;
// int main()
// {
//     char c[100];
//     cin.getline(c, 100);
//     int count = 0;
//     for (int i = 0; c[i] != '\0'; i++)
//     {
//         count++;
//     }
    
//     for (int i = 0, j = count - 1; i < count / 2; j--, i++)
//     {
//         int temmp = c[i];
//         c[i] = c[j];
//         c[j] = temmp;
//     }
//     for (int i = 0; i < count;i++)
//     {
//         if (c[i] == ' ')
//         {

//             int sum = 0;

//             for (int i = 0; c[i] != ' '; i++)
//             {
//                 sum++;
//             }
//             for (int i = 0, j = sum - 1; i < sum/2;j--, i++)
//             {
//                 int temmp = c[i];
//                 c[i] = c[j];
//                 c[j] = temmp;
//             }
            
        
//         }
//     }

//     cout << c;
// }
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

    for (int i = 0, j = count - 1; i < count / 2; j--, i++)
    {
        int temmp = c[i];
        c[i] = c[j];
        c[j] = temmp;
    }
    int p=0;
    for (int i = 0; i <=count; i++)
    {

        if (c[i] == ' ' || c[i]=='\0')
        {
            int q=i-1;
        for (;p<q;p++,q--)
        {
            char temp=c[p];
            c[p]=c[q];
            c[q]=temp;
        }
        p=i+1;
        
        }
    }
    cout << c;
}


