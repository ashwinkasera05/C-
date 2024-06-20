#include<iostream>
using namespace std;
class Child1
{
    public:
    void rahul()
    {
        cout<<"oky  i am come grandfather : "<<endl;
    }
};
class Child2
{
    public:
    void sunny()
    {
        cout<<"oky  i am also come grandfather : "<<endl;
    }
};
class family: public Child1, public Child2
{
    public:
    void GrandFather(int a)
    {
        cout<<"Here take this money  : "<<a<<endl;
    }
};
int main()
{
    family obj;
    obj.GrandFather(300);
    obj.rahul();
    obj.sunny();

}