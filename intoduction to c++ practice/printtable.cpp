// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int a=10;
//     while(a>=1){

//         int d=a*n;
//         cout<<d<<endl;

//         a--;
//     }
// }
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    if (n % 2 == 0 && n % 11 == 0 && n % 3 == 0)
    {
        cout << "Eleven";
    }
    else if (n % 2 == 0 && n % 3 == 0)
    {
        cout << "Three";
    }
    else if (n % 2 == 0 && n % 11 == 0)
    {
        cout << "Eleven";
    }
     else if(n % 3 == 0 && n % 11 == 0)
    {
     cout << "Eleven";
        }
   else if(n%2==0){
        cout << "Two";
    }
   else if (n % 3 == 0)
    {
        cout << "Three";
    }
    else if (n % 11 == 0)
    {
        cout << "Eleven";
    }
    else{
        cout << -1;
    }
}