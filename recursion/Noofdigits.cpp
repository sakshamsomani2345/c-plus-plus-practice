#include <iostream>
using namespace std;
int check(int n)
{static int c=0;
    int a=n%10;
    if(n==0){
    return 0;
    }
    c++;
    n=n/10;
    check(n);
    return c;
}

int main()
{
 int n;
 cin>>n;
    int c = check(n);
    cout << c;
}