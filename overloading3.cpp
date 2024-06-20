#include<iostream>
using namespace std;
class Student
{
    public:
    void stud(string s)
    {
        cout<<" Name = "<<s<<endl;

    }
    void stud(int a)
    {
        cout<<" Roll No : "<<a<<endl;
    }
    void stud(double a)
    {
        cout<<" Marks = "<<a<<endl;
    }
};
int main()
{
    Student str;
    str.Student::stud("Ashwin");
    str.Student::stud(345);
    str.Student::stud(89.87);

    return 0;
}