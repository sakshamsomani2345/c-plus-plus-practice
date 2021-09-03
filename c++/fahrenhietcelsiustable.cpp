#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
    int S,E,W;
    cin>>S>>E>>W;
    int cel=0;
    while (S<=E)
    {
        cel=((S-32)*(5/9.0));
        
        cout<<S<<"\t"<<cel<<endl;
        cel=0;
        S=S+W;
    }
  
}