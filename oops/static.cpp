#include<iostream>
using namespace std;
class student{
    public:
    int rollno;
    int age;
    static int totalstudents;
    student(){
        totalstudents++;
    }
};
int student::totalstudents=0;
int main(){
    student s2,s3,s4;
student s1;
cout<<s1.totalstudents;
}