#include <iostream>
using namespace std;
int main()
{
    int  m;
    cin >> m;
    for (int i=1; i <= m; i++)
    {

        for (int j = 1; j <= m;)
        {
            cout << j;
            j++;
            if(j>i){
                break;
            }
        }
        cout << endl;
    }
}
// 1
// 12
// 123
// 1234
// 12345