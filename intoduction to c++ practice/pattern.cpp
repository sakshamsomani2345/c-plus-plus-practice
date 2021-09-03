/*
1
12
123
1234 
12345*/
// #include<iostream>
// using namespace std;
// int main()
// {
// int i,j,n;
// i=1;
// cin>>n;
// while(i<=n){
//    j=1;
//    while(j<=i){
//       cout<<j;
//       j++;
//    }
//    i++;
//    cout<<endl;
// }
  
// }
/*
1 
23 
456 
78910 
1112131415
*/
// #include <iostream>
//     using namespace std;
// int main()
// {
//    int i, j, n,p;
//    i = 1;
//    p = 1;
//    cin >> n;
//    while (i <= n)
//    {
//       j = 1;
//       while (j <= i)
//       {
//          cout << p;
//          j++;
//          p++;
//       }
//       i++;
//       cout << endl;
//    }
// }
//    1 
//   23 
//  456
// 78910
// #include <iostream>
//     using namespace std;
// int main()
// {
//    int i, j, n, p;
//    i = 1;
//    p = 1;
//    cin >> n;
//    while (i <= n)
//    {int k=1;
//       while(k<=n-i){
//          cout<<" ";
//          k++;
//       }
//       j = 1;
//       while (j <= i)
//       {
//          cout << p;
//          j++;
//          p++;
//       }
//       i++;
//       cout << endl;
//    }
// }

/*
   1 
  23
 345
4567*/
// #include <iostream>
//     using namespace std;
// int main()
// {
//    int i, j, n, p;
//    i = 1;
//    cin >> n;
//    while (i <= n)
//    {
//       int k = 1;
//              while(k<=n-i){
//                 cout<<" ";
//                 k++;
//          }
//       p = i;


//       j = 1;
//       while (j <= i)
//       {
//          cout << p;
//          j++;
//          p++;
//       }
//       i++;
//       cout << endl;
//    }
// }
/*
1 
23 
345 
4567*/
// #include <iostream>
//     using namespace std;
// int main()
// {
//    int i, j, n, p;
//    i = 1;
//    cin >> n;
//    while (i <= n)
//    {
//       p = i;

//       j = 1;
//       while (j <= i)
//       {
//          cout << p;
//          j++;
//          p++;
//       }
//       i++;
//       cout << endl;
//    }
// }
/*
****
****
****
****
*/
// #include<iostream>
//  using namespace std;
// int main()
// {
// int i,j,n;
// i=1;
// cin>>n;
// while(i<=n){
//    j=1;
//    while(j<=n){
//       cout<<"8";
//       j++;
//    }
//    i++;
//    cout<<endl;
// }}
/*
4321 
4321 
4321 
4321
*/
// #include <iostream>
//     using namespace std;
// int main()
// {
//    int i, j, n;
//    i = 1;
//    cin >> n;

//    while (i <= n)
//    {
//       int p = n;
//       j = 1;
//       while (j <= n)
//       {
//          cout << p;
//          p--;
//          j++;
//       }
//       i++;
//       cout << endl;
//    }
// }
/*
1 
21 
321 
4321
*/
/*
ABCD
ABCD
ABCD
ABCD
*/
// #include <iostream>
//     using namespace std;
// int main()
// {
//    int i, j, n;
//    i = 1;
//    cin >> n;
//    while (i <= n)
//    {
      
//          char a = 65;

//          j = 1;
//          while (j <= n){
//             cout << a;
//          a++;
//          j++;
//       }
//       i++;
//       cout << endl;
//    }
// }
/*
ABCD
BCDE
CDEF
DEFG
*/
/*
A
BB
CCC
*/
// #include <iostream>
//     using namespace std;
// int main()
// {
//    int i, j, n;
//    i = 1;
//    cin >> n;
//    char a = 65;
//    while (i <=n)
//    {
//       j = 1;
//       while (j <= i)
//       {
//          cout << a;
//          j++;
//       }
//       a++;
//       i++;
//       cout << endl;
//    }
// }
/*
****
***
**
*
*/
// #include<iostream>
// using namespace std;
// int main()
// {
// int i,j,n;
// i=1;
// cin>>n;
// while(i<=n){
   
//    j=1;
//    while(j<=n+1-i){
//       cout<<'*';
//       j++;
//    }
//    i++;
//    cout<<endl;
// }}
/*
4444 
333 
22 
1
*/
// #include <iostream>
//     using namespace std;
// int main()
// {
//    int i, j, n;
//    i = 1;
//    cin >> n;
//    int p = n;

//    while (i <= n)
//    {

//       j = 1;
//       while (j <= n + 1 - i)
//       {
//          cout << p;
//          j++;
//       }
//       p--;
//       i++;
//       cout << endl;
//    }
// }
/*
   *
  ***
 *****
*******
*/
// #include <iostream>
// using namespace std;
// int main()
// {
//    int i, j, n;
//    i = 1;
//    cin >> n;
//    int p = n;

//    for(i=1;i<=n;i++){
//    {

// for(int k=1;k<=n-i;k++){
//    cout<<" ";
// }


// for(j=1;j<=i;j++){
//    cout<<'*';
// }
//       for(j=i-1;j>=1;j--){
//          cout<<'*';
//       }
//       cout << endl;
//    }
// }}
/*
   1
  231
 34521
4567321
*/
// #include <iostream>
// using namespace std;
// int main()
// {
//    int i, j, n;
//    i = 1;
//    cin >> n;
//    int p = n;

//    for (i = 1; i <= n; i++)
//    {
//          for (int k = 1; k <= n - i; k++)
//          {
//             cout << " ";
//          }
// p=i;
//          for (j = 1; j <= i; j++,p++)
//          {
//             cout << p;
//          }
//          for (j = i - 1; j >= 1; j--)
//          {
//             cout << i+j-1;
//          }
//          cout << endl;
      
//    }
// }