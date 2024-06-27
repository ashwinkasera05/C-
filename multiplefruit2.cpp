#include <iostream>
using namespace std;

class Fruit
{
    public:
    int f,a,m;
    Fruit()
    {
        f=a+m;
        cout<<" Total Fruits of =  "<<f<<endl;
        
    }
};

class Apple:public Fruit
{
    public:
     int a;
    Apple()
    {
        cout<<" Number of apples = "<<a<<endl;
        
    }
};
class Mango:public Fruit
{
    public:
     int m;
    Mango()
    {
    
        cout<<" Number of mangos =  "<<m<<endl;
        
    }
};



int main()
{
    Fruit f1;

    return 0;
}
