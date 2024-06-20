#include<iostream>
using namespace std;
class A
{
    public:
    void stud1()
    {
        cout<<"Saloni"<<endl;
    }
};
class B:public A
{
    public:
    void stud2()
    {
        cout<<"Ashwin"<<endl;
    }
};
class C:public A
{
    public:
    void stud3()
    {
        cout<<"Megha"<<endl;
    }
};
class D:public B,public C
{
    public:
    void stud4()
    {
        cout<<"Meenakshi"<<endl;
    }
};
int main()
{
    D d;
    d.stud4();
    d.stud3();
    d.stud2();
    d.B::stud1();
}
