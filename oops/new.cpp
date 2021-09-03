#include<iostream>
using namespace std;
class complexnumber{
    public:
    int real;
    int imaginary;
   complexnumber(int a,int b){
       real=a;
       imaginary=b;
   }
   void print(){
   cout<<real<<imaginary;
   }
   void plus(complexnumber const &c){
        real=real+c.real;
       imaginary=imaginary+c.imaginary;
    //    print();
   }
   
};
int main(){
int real1,real2,imaginary1,imaginary2;
// cin >> real1 >> real2 >> imaginary1>>imaginary2;
complexnumber c1(10,20);
complexnumber c2(30,40);
c1.plus(c2);
c1.print();

}