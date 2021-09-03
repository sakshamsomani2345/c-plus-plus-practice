#include <iostream>
using namespace std;
class ComplexNumbers
{
private:
    int real;
    int imaginary;

public:
ComplexNumbers (int real,int imaginary){
this->real=real;
this->imaginary=imaginary;
}
void plus(ComplexNumbers c2){
real=real+c2.real;
imaginary=imaginary+c2.imaginary;
}
void multiply(ComplexNumbers const &c2){
    real=real*(c2.real)-imaginary*(c2.imaginary);
    imaginary=real*(c2.imaginary)+imaginary*(c2.real);
}
void print(){
    cout<<real<<" "<<"+"<<" "<<"i"<<imaginary;
}
    
};
int main()
{
    int real1,imaginary1,real2,imaginary2;
    cin>>real1>>imaginary1;
    cin >> real2 >> imaginary2;
    int choice;
    cin>>choice;
ComplexNumbers c1(real1,imaginary1);
ComplexNumbers c2(real2,imaginary2);
if (choice == 1)
{
    c1.plus(c2);
    c1.print();
}
else if (choice == 2)
{
    c1.multiply(c2);
    c1.print();
}
}