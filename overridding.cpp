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
int main ()
{
    B obj;
    obj.print();
    obj.A::print();
}