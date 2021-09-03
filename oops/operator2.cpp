#include <iostream>
using namespace std;
class Fraction
{
private:
    int numerator;
    int denominator;

public:
    Fraction(int numerator, int denominator)
    {
        this->numerator = numerator;
        this->denominator = denominator;
    }
    void print()
    {
        cout << this->numerator << " / " << denominator << endl;
    }
    void simplify()
    {
        int gcd = 1;
        int j = min(this->numerator, this->denominator);
        for (int i = 1; i <= j; i++)
        {
            if (this->numerator % i == 0 && this->denominator % i == 0)
            {
                gcd = i;
            }
        }
        this->numerator = this->numerator / gcd;
        this->denominator = this->denominator / gcd;
    }
    Fraction operator+(Fraction const &f2) const
    {
        int lcm = denominator * f2.denominator;
        int x = lcm / denominator;
        int y = lcm / f2.denominator;
        int num = x * numerator + (y * f2.numerator);
        Fraction fnew(num, lcm);
        fnew.simplify();
        return fnew;
    }
    Fraction operator*(Fraction const &f2) const
    {
        int n = numerator * f2.numerator;
        int d = denominator * f2.denominator;
        Fraction fnew(n, d);
        fnew.simplify();
        return fnew;
    }
    bool operator==(Fraction const &f2) const
    {
        return (numerator == f2.numerator && denominator == f2.denominator);
    }
    Fraction &operator++()
    {
        numerator = numerator + denominator;
        simplify();
        return *this;
    }
    Fraction operator++(int)
    {
        Fraction fnew(numerator, denominator);
        numerator = numerator + denominator;
        simplify();
        fnew.simplify();
        return fnew;
    }
    void operator +=(Fraction const &f2){
        int lcm=denominator*f2.denominator;
        int x=lcm/denominator;
        int y=lcm/f2.denominator;
        int num=x*numerator +(y*f2.numerator);
        numerator=num;
        denominator=lcm;
        simplify();
    }
};
int main()
{
    Fraction f1(10, 3);
    Fraction f2(5, 2);
    // Fraction f3 = f1 + f2;
    // Fraction f4 = f1 * f2;
    // if (f1 == f1)
    // {
    //     cout << "equal" << endl;
    // }
    // else
    // {
    //     cout << "not equal" << endl;
    // }
    // f4.print();
    // f1.print();
    // f3.print();
    // f1.print();
    // ++(++f1);
    // f1.print();
    // Fraction f3 = ++f1;
    // f3.print();
    // Fraction f3 = f1++;
    // f1.print();
    // f3.print();
    f1+=f2;
    f1.print();
    f2.print();
}
