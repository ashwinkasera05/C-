#include<iostream>
using namespace std;
class Stud1
{
    public:
    void stud1()
    {
        cout<<" this student is Math class student :"<<endl;
    }
};
class Stud2
{
    public:
    void stud2()
    {
        cout<<" this student is Bio class student :"<<endl;
    }
};
class Stud3
{
    public:
    void stud3()
    {
        cout<<" this student is Hindi class student :"<<endl;
    }
};
class Stud4
{
    public:
    void stud4()
    {
        cout<<" this student is GK class student :"<<endl;
    }
};
class Stud5
{
      
    public:
    void stud5()
    {
        cout<<" this student is Science class student :"<<endl;
    }
};
class SSIDigatal:public Stud1,public Stud2,public Stud3,public Stud4,public Stud5
{
    public:
    void listofstudent()
    {
        cout<<" ALL STUDENT LIST :"<<endl;
    }
};
int main()
{
    SSIDigatal SSi;
    SSi.listofstudent();
    SSi.stud1();
    SSi.stud2();
    SSi.stud3();
    SSi.stud4();
    SSi.stud5();
}