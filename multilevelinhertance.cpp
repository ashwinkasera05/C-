#include<iostream>
using namespace std;
class base
{
    private:
    int a;
    public:
    void input()
    {
        cout<<"Enter the value of A :"<<endl;
        cin>>a;
    }
    void show()
    {
        cout<<"A :"<<a<<endl;
    }
};
class derived:public base
{
    private:
    int b;
    public:
    void input1()
    {
        cout<<"Enter the value of B :"<<endl;
         cin>>b;
    }
    void show1()
    {
        cout<<"B :"<<b<<endl;
    }
};
class derived2:public derived
{
    private:
    int c;
    public:
    void input2()
    {
        cout<<"Enter the value of C :"<<endl;
         cin>>c;
    }
    void show2()
    {
        cout<<"C :"<<c<<endl;
    }
};
int main()
{
   /* base b;
    b.input();
    b.show();

    derived d;
    d.input();
    d.show();*/

    derived2 d1;
    d1.input();
    d1.show();

    d1.input1();
    d1.show1();

    d1.input2();
    d1.show2();
    
}
