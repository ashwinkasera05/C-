#include<iostream>
using namespace std;
class Child1
{
    public:
    void rahul(int ch1)
    {
        cout<<"oky  i am come grandfather : "<<ch1<<endl;
    }
};
class Child2
{
    public:
    void sunny(int ch2)
    {
        cout<<"oky  i am also come grandfather : "<<ch2<<endl;
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
    obj.rahul(12);
    obj.sunny(13);

}