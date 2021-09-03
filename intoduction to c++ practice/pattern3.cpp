  /*
*
**
***
****
*****
*****
****
***
**
*
  */
// #include <iostream>
// using namespace std;
// int main()
// {
//     int rows;
//     cin >> rows;
//     for (int i = 1; i <= rows; i++)
//     {
//         for (int k = 1; k <= i; k++)
//         {
//             cout<<'*';
//         }

//         cout << endl;
//     }
//     for (int i = rows; i >=1; i--)
//     {
//         for (int k = 1; k <= i; k++)
//         {
//             cout << '*';
//         }

//         cout << endl;
//     }
// }

  /*
*
**
***
****
*****
****
***
**
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
          for (int k = 1; k <= i; k++)
          {
              cout << '*';
          }

          cout << endl;
      }
      for (int i = rows-1; i >= 1; i--)
      {
          for (int k = 1; k <= i; k++)
          {
              cout << '*';
          }

          cout << endl;
      }
  }