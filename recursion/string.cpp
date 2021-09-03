//to convert lower to uppercase
// #include <iostream>
// #include <string.h>
// using namespace std;
// int main(){
//     string s="Heldvrjf";
//     for (int i = 0; i < s.length(); i++)
//     {
//         if(s[i]>='a' && s[i]<='z'){
//             s[i]=s[i]-32;
//         }
//     }
//     for (int i = 0; i < s.length(); i++)
//     {
//         cout<<s[i];
//     } 
// }
////////////////////PROGRAM TO REVERSE A STRING
// #include <iostream>
// #include <string.h>
// using namespace std;
// string fun(string s){
//     if(s.size()==0){
//         return " ";
//     }
//     return fun(s.substr(1))+s[0];
   
//    return s;
    
// }
// int main(){
//     string s="Heldvrjf";
//    string c=fun(s);
//    cout<<c;
   
   
    
// }
//////////////TO CHECK PALINDROME
// #include <iostream>
// #include <string.h>
// using namespace std;
// bool fun(string s)
// {
//     if (s.size() == 0 || s.size()==1)
//     {
//         return true;
//     }
//     if(s[0]!=s[s.size()-1]){
//         return false;
//     }
//     bool c= fun(s.substr(1, s.size()-1-1));
//     return c;
// }
// int main()
// {
//     string s = "kaak";
//     bool c = fun(s);
//     cout << c;
// }
/////////////DECIMAL TO BINARY
#include <iostream>
#include <string.h>
using namespace std;
int fun(int n,int i)
{
    if(n==0){
        return 0;
    }
   static int arr[10];
    arr[i]=n%2;
    return fun(n/2,i+1);
    cout<<arr[10];

}
int main()
{
    fun(233,0);
    
    
}