#include <iostream>
#include <string.h>
using namespace std;
int subs(string input,string output[]){
if(input.empty()){
    output[0]=" ";
    return 1;
}
string smallstring=input.substr(1);
int small=subs(smallstring,output);
for (int i = 0; i < small; i++)
{
    output[i+small]=input[0]+output[i];
}
return 2*small;
}
int main()
{
    string input;;
    cin>>input;
    string* output=new string[1000];
    int c=subs(input,output);
    for (int i = 0; i < c; i++)
    {
        cout<<output[i]<<endl;
    }
    
    
}