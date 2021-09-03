#include <iostream>
#include <stack>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    stack<int> s;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int output[n];
    s.push(0);

    for (int i = 0; i < n; i++)
    {
        if(arr[i]<s.top()){
            s.push(i);
            output[i]=1;
            
        }
        else{
while (s.top()!=NULL && arr[i]>arr[s.top()])
{
    s.pop();
}
if (s.top()==NULL)
{
    output[i]=i+1;
}
else{
    output[i]=i-s.top();
}
s.push(i);

        }

    }
    for (int i = 0; i <n; i++)
    {
        arr[i]=output[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i];
    }
    
    
}