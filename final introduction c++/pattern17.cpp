#include <iostream>
using namespace std;
int main()
{
    int  m,i, n;
    cin >> m;

    for (i = 1; i <= m; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if(i==m || j==m || i==1 || j==1){
            cout<<"*";
            }
            else{
cout<<" ";
            }
        }
        cout << endl;
        }

    }
// *****
// *   *
// *   *
// *   *
// *****