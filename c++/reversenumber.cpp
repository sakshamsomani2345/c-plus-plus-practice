#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int n,i,j,rev=0;
    cin>>n;
while(n>0)
{
    int a=n%10;
        rev=rev*10+a;
        cout<<n<<endl;
    n=n/10;


}
    cout<<rev;


}