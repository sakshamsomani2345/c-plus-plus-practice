#include <iostream>
#include <string.h>
using namespace std;
class student {
    public:
    int age;
    const int rollnumber;
    int &x;
    
    student(int r,int a) : rollnumber(r),age(a),x(this->age){
    
    }

};
int main()
{
student s1(101,20);
s1.age=32;
}