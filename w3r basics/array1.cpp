#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];    
    }
    int largest=INT_MIN;
    int slargest=INT_MIN;
    for (int j = 0; j < n; j++)
    {
        if(largest<arr[j]){
            slargest=largest;
            largest=arr[j];

        }
    }
    cout<<largest;
    
}