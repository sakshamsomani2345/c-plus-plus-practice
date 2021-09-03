#include <iostream>
using namespace std;
int check(int n,int m)
{
    if(m==0){
        return 0;
    }
    return n+check(n,m-1);
}

int main()
{
    int n,m;
    cin >> n>>m;
    int c = check(n,m);
    cout << c;
}