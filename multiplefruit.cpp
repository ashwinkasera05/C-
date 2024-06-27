#include <iostream>
using namespace std;

class Apple
{
    public:
     int a;
    Apple()
    {
        cout<<"enter the value of Apple : ";
        cin>>a;
        cout<<" Number of apples = "<<a<<endl;
        
    }
};
class Mango
{
    public:
     int m;
    Mango()
    {
        cout<<"enter the value of Mango : ";
        cin>>m;
        cout<<" Number of mangos =  "<<m<<endl;
    }
};
class Fruit:public Apple , public Mango
{
    public:
    int f;
    Fruit()
    {
        f=a+m;
        cout<<" Total Fruits of =  "<<f<<endl;
    }
};


int main()
{
    Fruit f1;

    return 0;
}
