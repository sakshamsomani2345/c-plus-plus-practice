// Write a program in C++ to display the n terms of harmonic series and their sum.
// 1 + 1/2 + 1/3 + 1/4 + 1/5 ... 1/n terms

#include<iostream>
using namespace std;
int main(){
  int n;
  double sum=0;
  cin>>n;
  for (double i = 1; i <=n; i++)
  {
  double a=1/i;
      sum=sum+a;
  }
  cout<<sum;
}