// Write a program that takes a character as input and prints either 1, 0 or -1 according to the following rules.
// 1, if the character is an uppercase alphabet (A - Z)
// 0, if the character is a lowercase alphabet (a - z)
// -1, if the character is not an alphabet
#include<iostream>
using namespace std;

int main() {
    char a;
    cin>>a;
        int b;
    b=a;
	if(a>=65 && a<=90){
        cout<<1;
    }
    else if(a>=97 && a<=122){
        cout<<0;
    }
    else{
        cout<<-1;
    }
}