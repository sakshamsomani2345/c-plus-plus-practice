#include <iostream>
using namespace std;
int main()
{
    int *p=new int;
    *p=2;
    cout<<*p;
    int n;
    cin>>n;
    int *pa2=new int [n];
    for (int i = 0; i < n; i++)
    {
        cin>>pa2[i];
    }
    int max=-1;
    for (int i = 0; i < n; i++)
    {
        if(max<pa2[i]){
            max=pa2[i];
        }
    }
    cout<<max;
    delete [] p;
    
}