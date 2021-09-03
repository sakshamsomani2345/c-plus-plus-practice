#include<iostream>
using namespace std;
int main(){
int i=1,j=1,m,p;
cin>>m;
for (int i=1 ; i <= m; i++)
{

    for (int k = 1; k <= m-i; k++)
    {
        cout<<" ";
    }
    p=i;
    for ( int j=1; j <= i; j++,p++)
    {
       cout<<p ;
    }
    cout<<endl;
    
}

}