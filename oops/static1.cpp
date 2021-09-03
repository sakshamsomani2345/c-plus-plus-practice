#include <iostream>
using namespace std;
class student
{
    static int totalstudents;
    public:
    int rollno;
    int age;
    student()
    {
        totalstudents++;
    }
    static int getotalstudent(){
        return totalstudents;
    }
    //////this static doesnt uses this keyword and it only can access static objects
};
int student::totalstudents = 0;
int main()
{
    student s2, s3, s4;
    student s1;
    cout << student::getotalstudent();
}