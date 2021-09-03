#include <iostream>
#include <stack>
#include <string.h>
using namespace std;
int main()
{
    string s = "}{";
    int count = 0;
    stack<char> pending;
    if (s.size() % 2 != 0)
    {
        cout << "notbalanced";
    }
    else
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '{')
            {
                pending.push('{');
            }
            else if (!s.empty()  && s[i]=='{')
            {
                if (pending.top() == '{')
                {
                    pending.pop();
                }
                else
                {
                    pending.push(s[i]);
                }
            }
            else 
            {
                pending.push(s[i]);
            }
        }
    }
    while(!pending.empty())
    {
       
            char c1 = pending.top();
            pending.pop();
            char c2 = pending.top();
            pending.pop();
            if (c1 == c2)
            {
                count++;
            }
            else{
                count=count+2;
            }
        
    }
    cout << count;
}