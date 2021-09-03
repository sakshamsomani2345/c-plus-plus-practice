// 1
// 32
// 456
// 10987
// 1112131415
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int k;
    for (int i=k= 1; i <= n; i++)
    {

int l=i+k-1;
        for (int j = 1; j <=i; j = j + 1)
        {
            if (i%2==1)
            {
                cout<<k;
            }
            else{
                cout<<l;
            }
            k++;
            l--;
            
        }
        cout << endl;
    }
}