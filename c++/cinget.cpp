#include<iostream>
using namespace std;

int main(){

    char c;
    int a=0;
    int b=0;
    c=cin.get();
    int node=0;
    while(c!='$'){
     
        if(c>='a' && c<='z'){
            a++;
        }
          if(c>='0' && c<='9'){
            b++;
        }
        else if (c== ' ' || c =='\n' || c == '\t')
                      { node++;}
                         c=cin.get();
       
    }
    cout<<a<<" "<<b<<" "<<node;

}