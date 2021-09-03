#include <iostream>
using namespace std;
int main()
{
    char c[100];
    cin.getline(c, 100);
    char c1[100];
    cin.getline(c1, 100);
    int count = 0;
    char x;
    cin >> x;
    for (int i = 0; c[i] != '\0'; i++)
    {
        count++;
    }
    bool help=false;
    for (int i = 0; i < count; i++)
    {
            for (int j = 1; j < count && j!=i; j++)
            {
                if(c1[i]==c[j]){
                    help=true;
                }
                else{
                    help=false;
                }
            }
            
    }
    if(help==true){
        cout<<"correct";
    }
    
}