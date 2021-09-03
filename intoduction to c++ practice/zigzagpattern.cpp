 /*
  *   *  
 * * * *
*   *   *
*/


#include <iostream>
using namespace std;
int main()
{
    int rows;
    cin >> rows;
    for (int i = 1; i <= 3; i++)
    {
        for (int k = 1; k <= rows; k++)
        {if((i+k)%4==0||(i==2 &&k%4==0)){
cout<<'*';
        }
        else{cout<<' ';}
        }
        

        cout << endl;
    }
    
}