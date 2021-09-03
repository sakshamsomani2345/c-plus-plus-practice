// 12344321
// 123**321
// 12****21
// 1******1

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
  for (int i = 4; i >=1; i--)
  {
      for (int j=1; j<=4;j++)
      {
          if(j<=i)
          cout<<j;
        else
        cout<<"*";
      }
      for (int j = 4; j >= 1; j--)
      {
          if (j <= i)
              cout << j;
          else
              cout << "*";
      }
      cout << endl;
  }
  
}