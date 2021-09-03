// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     cin.ignore(); //it is used to remove buffer
//     char arr[n + 1];
//     cin.getline(arr, n);
//     int count=0;
//     for (int i = 0; arr[i]!='\0'; i++)
//     {
//         count++;
//     }
//     for (int i = 0; i < count/2; i++)
//     {
//         int temp=arr[i];
//         arr[i]=arr[count-i-1];
//         arr[count - i - 1]=temp;
//     }
//     int i=0;
//     for (; arr[i]!='\0'; i++)
//     {
//         int start=i;
//        for (;arr[i]!=' ';)
//        {
//            i++;
//        }

//         int end=i-1;
//         for (int j =start; j <end/2; j++)
//         {
//             int temp = arr[j];
//             arr[j] = arr[end - j - 1];
//             arr[end - j - 1] = temp;
//         }

//     }

//     cout<<arr;

// }
#include <iostream>
using namespace std;
int main()
{
    char ch[100];
    cin.getline(ch, 20);
    char x;
    cin>>x;

    int count = 0;
    for (int i = 0; ch[i] != '\0'; i++)
    {
        count++;
    }
    for (int i = 0; i < count; i++)
    {
        if(ch[i]==x){
           for (int j = i; j < count; j++)
           {
               ch[j]=ch[j+1];
           }
           
        }
        
        
    }
    
    cout << ch;
}