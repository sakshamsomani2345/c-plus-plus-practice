#include <iostream>
using namespace std;
void hello(int a,int **q){
    (**q)++;
    cout<<a;
}
int main()
{
    int n;
    cin>>n;
int *p= new int[n];
for (int i = 0; i < n; i++)
{
    cin>>p[i];
}
for (int i = 0; i < n; i++)
{
    cout<<p[i];
}



}