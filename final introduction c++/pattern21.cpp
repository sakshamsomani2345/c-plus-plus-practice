
#include <iostream>
using namespace std;
int main()
{
    int  m, n;
    cin >> m;

    for (int i = 1; i <= m; i++)
    {


    for (int k = 1; k <= m-i; k++)
     {
     cout<<" ";
     }

        for (int j = 1; j <= m; j++)
        {
        cout<<'*';
        }

        cout << endl;
    }
}
//     *****
//    *****
//   *****
//  *****
// *****