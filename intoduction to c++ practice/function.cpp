#include <iostream>
using namespace std;
bool prime(int a){
    int i;
    for( i=0;i<a;i++){

        if(a%i==0)
            return false;
        
    }
    return true;
}
int main()
{   bool c=prime(5);
    
    cout<<c;

}