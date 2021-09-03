#include <iostream>
using namespace std;


void check(int n)
{
    if(n==0){
        return ;
    }
    cout << n;

    check(n - 1);
    
    cout << n;
}
    
int main()
{
    int n;
    cin >> n;
     check(n);
}