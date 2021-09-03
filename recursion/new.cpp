#include<iostream>
#include<string.h>
using namespace std;
void fun(string s,char x){


if(s.length()==0){
    return;
}
if(s[0]==x){
    for (int i = 0; i < s.length(); i++)
    {
        s[i]=s[i+1];
    }
    
}
fun(s.substr(1),x);


}
int main(){
string s="abxdx";
char x='x';
fun(s,x);
cout<<s;
}