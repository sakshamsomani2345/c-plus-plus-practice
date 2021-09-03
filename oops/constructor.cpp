#include <iostream>
using namespace std;
class Student
{
    private:
    int age;

    public:
    int rollnumber;
    int hello()
    {
        return age;
    }
    void ages(int a)
    {
        age = a;
    }
    // Student(int r){
    //     cout<<r;
    // }
    Student(int rollno)
    {
        rollnumber=rollno;
    }
    ~Student()
    {
        cout<<"hello";
    }
};
int main()
{
//     Student s1(10);
//     cout<<s1.rollnumber;
//     Student s2(s1);
//     cout << s2.rollnumber;
// Student *s3=new Student(20);
// Student s4(*s3);
// cout << s4.rollnumber;

// Student *s5=new Student(*s3);
// cout << s5->rollnumber;
    Student s1(10);
    Student s2(20);
    s2=s1;
    cout<<s1.rollnumber;
    cout << s2.rollnumber;
    Student *s3=new Student(20);
    *s3=s1;
}