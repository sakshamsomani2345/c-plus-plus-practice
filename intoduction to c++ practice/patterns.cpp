/*
00X00
00X00
XXXXX
00X00
00X00
*/
/*
  *  
  *
*****
  *
  *
*/
#include <iostream>
using namespace std;
int main()
{
    int rows;
    cin >> rows;
    for (int i = 1; i <= rows; i++)
    {
        for (int k = 1; k <= rows; k++)
        {
            if(i==3||k==3){
                cout<<'*';
            }
            else{
                cout<<" ";
            }
        }

        cout << endl;
    }
    
}