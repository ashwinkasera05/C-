#include<iostream>
using namespace std;
class Teacher
{
    public:
    void book()
    {
        cout<<" Open the book"<<endl;
    } 
};
class Student: public Teacher
{
    public:
    void read()
    {
        cout<<" And read the book "<<endl;
    }
};
int main()
{
    Student obj;
    obj.Teacher::book();
    obj.read();
}