#include <iostream>
#include<stack>
#include<string.h>
using namespace std;
int main(){
    string s="[a+ba+d}+(s)+d]";
    stack<char> m;
    bool flag=true;
    int count=0;
    while (count<s.length())
    {
        if (s[count] == '{' || s[count] == '[' || s[count] == '('){
            m.push(s[count]);
        }
       else if (s[count] == '}' || s[count] == ']' || s[count] == ')')
        {
            char x=m.top();
            cout << x;
            cout << s[count];
if (x=='(')
{
    if(s[count]!=')'){
        flag=false;
        break;
    }
}
if(x=='['){
if (s[count] != ']')
{
    flag = false;
    break;
}
}
if(x=='{'){
if (s[count] != '}')
{
    flag = false;
    break;
}
}
          m.pop();

        }

            count++;
    }
    if(flag==true){
        cout<<"balanced";
    }
    else{
        cout<<"not balanced";
    }


}