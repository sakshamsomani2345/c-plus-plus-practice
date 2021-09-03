#include<iostream>
#include<string>
using namespace std;

// void permutation(string s, string output ){
// if(s.length()==0){
// cout<<output<<endl;
// return;
// }
// for (int i = 0; i <=output.length(); i++)
// {
//     permutation(s.substr(1), s[0] +output.substr(i)+ output.substr(0, i));
// }
// }
void printPermutationsHelper(string input, string output)
{
    if (input.length() == 0)
    {
        cout << output << endl;
        return;
    }
    for (int i = 0; i <= output.length(); i++)
    {
        printPermutationsHelper(input.substr(1), output.substr(0, i) + input[0] + output.substr(i));
    }
}
int main()
{
    string s;
    cin>>s;
    printPermutationsHelper(s,"");
}