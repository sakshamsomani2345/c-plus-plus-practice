
#include <iostream>
using namespace std;
int main()
{      int a,b,x,found=0;
cin>>a>>b>>x;
    int arr[a][b];
    
    for (int i = 0; i < a; i++)
    {
        
        for (int j = 0; j < b; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    for (int i = 0; i < b; i++)
    {

        for (int j = 0; j < a; j++)
        {
            if(arr[i][j]==x){
                found=1;
                break;
            }
         
        }

    }
    if(found==1){
        cout<<"found";
    }
    else {
        cout<<"not found";
    }
}