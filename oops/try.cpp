// #include <iostream>
// using namespace std;
// class student
// {public:
// int name;
// int rollno;
// int hello(){
//     cout<<"hello";
// }
// void world(){
//     cout<<name;
// }
// int ages(){
//     return name;
// }

// student()
// {
//     cout << "world";
// }
// ~student()
// {
//     cout << "dent";
// }
// student(int name){
//     this->name=name;
// }

// };
// int main(){
//     student s1;
//     s1.name=24;
//     cout<<s1.name;
//     student *s2=new student;
//     // (*s2).name=3456;
//     s2->name = 3456;

//     cout << s2->name;
//     student s3;
//     cout<<s3.name;
//     s3.hello();
//     s1.world();
//     cout<<s1.ages();
//     cout << s3.ages();
//     // student s4(5);
//     student s5(6);
//     // cout<<&s5;
//     cout<<endl<<s5.name;

// }
#include <iostream>
using namespace std;
class student
{public:
int name;
int rollno;
student()
{
    cout << "world";
}
~student()
{
    cout << "dent";
}
student(int name){
    this->name=name;
}
};
int main(){
    // student s1;
    // s1.name=33;
    // student s2(s1);
    // cout<<s2.name;
    student s1(345);
    student s2(678);
    s2=s1;
    cout<<s2.name;
    student *s3=new student(45);
    delete s3;
    student s4=s2;

}
