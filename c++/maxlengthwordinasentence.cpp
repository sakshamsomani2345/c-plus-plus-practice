#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cin.ignore();///it is used to remove buffer
    char arr[n + 1];
    cin.getline(arr, n);
    int i = 0, current = 0, maxlength = 0;
    while (1)
    {
        if (arr[i] == ' ' || arr[i] == '\0')
        {
            if(current>maxlength){
                maxlength=current;
            }
            current=0;
        }
        else{
            current++;}
            if(arr[i]=='\0'){
                break;
            }
            i++;
        
    }
    cout<<maxlength;
}