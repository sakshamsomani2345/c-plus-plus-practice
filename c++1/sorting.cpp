#include<iostream>
using namespace std;
void binarysearch(int arr[],int n){
    for(int i=0;i<n-1;i++){

int min=arr[i],minindex=i;
for(int j=1+i;j<n;j++){
if(arr[j]<min){
min=arr[j];
minindex=j;
    }
}
int temp=arr[i];
arr[i]=arr[minindex];
arr[minindex]=temp;
}
}

int main(){
   int arr[]={3,1,6,9,0,4};
   binarysearch(arr,6);
   for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
   }
   cout<<endl;
}
