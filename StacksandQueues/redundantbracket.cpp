#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<char> s;
    string f="(a+(b+c))";
    int i=0;
    int count=0;
    
    while(s.top()=='('){
    while (s.top()!='(')
    {
        while (f[i]!=')')
    {
        s.push(f[i]);
        i++;
    
    }
        count++;
        s.pop();
    }
    s.pop();
    }
    
}