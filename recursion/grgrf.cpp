//////////////reverse a string
#include<iostream>
using namespace std;

// void fun(string s,int l){
// if(l==0){
//     return;
// }
// fun(s.substr(1),l-1);
// cout << s[0];
// }
void fun(string s)
{
    if (s.length()==0)
    {
        return;
    }
    fun(s.substr(1));
    cout << s[0];
}
int main(){
    string s="binod";
    fun(s);

}