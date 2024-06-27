#include<iostream>
using namespace std;
class X
{
    public:
    int x=12;
    X()
    {
        cout<<"X = "<<x<<endl;
    }
};
class Y:public X
{
    public:
    int y=13;
    Y()
    {
        cout<<"Y = "<<y<<endl;
    }

};
class Z:public Y
{
    public:
    int z=5;
    Z()
    {
        int a=x+y+z;
        cout<<"Z = "<<a<<endl;
    }
};
int main()
{
    Z z1;
}
