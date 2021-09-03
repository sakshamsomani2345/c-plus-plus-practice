#include <iostream>
using namespace std;
int check(int n)
{
    if(n==0){
        return 0;;
    }
    return n%10+check(n/10);
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int c = check(n);
    cout << c;
}