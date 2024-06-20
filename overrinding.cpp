#include<iostream>
using namespace std;
class A
{
    public:
    void print()
    {
         cout<<"A is Overriding :"<<endl;
    }
};
class B: public A
{
    public:
    void print()
    {
         cout<<"B is Overriding :"<<endl;
    }
};
class C: public A, public B
{
    public:
    void print()
    {
         cout<<"c is Overriding :"<<endl;
    }
};
int main ()
{
    C obj;
    obj.print();
    obj.B::print();
    obj.C::print();
}