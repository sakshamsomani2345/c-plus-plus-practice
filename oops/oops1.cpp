#include<iostream>
using namespace std;
class Student
{private:
 int age;
 public:
 int rollnumber;
int hello(){
 return age;}
void ages(int a){
 age=a; }};
int main(){
Student s1;
// s1.age=23;
cout<<s1.hello()<<endl;
s1.rollnumber=45;
// cout<<s1.age;
////////////to dynamically allocate
Student *s3=new Student;
// (*s3).age=23;
// cout << (*s3).age;
s3->rollnumber=45;
cout<<s3->rollnumber; 
s3->ages(20);

}
