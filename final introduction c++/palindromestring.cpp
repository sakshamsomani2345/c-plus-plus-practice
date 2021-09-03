#include <iostream>
#include <climits>
using namespace std;
int main()
{
    char input[1024];
    cin>>input;
    int count = 0;
    bool flag =false;
    for (int i = 0; i < input[i]!='\0'; i++)
    {
        count++;
    }
    cout<<count<<endl;
    for (int i = 0; i < count/2; i++)
    {
        if(input[i]!=input[count-i-1]){
             flag=true;
        }
    }
    if(flag==false){
        cout<<"palindrome";
    }
    

}