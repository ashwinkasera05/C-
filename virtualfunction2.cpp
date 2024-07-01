#include<iostream>
using namespace std;
class Emp
{
    public:
    virtual void Boss()
    {
        cout<<"This program is not Execute"<<endl;
    }
};
class Emp2:public Emp
{
    public:
    void Boss()
    {
        cout<<"Problem of your ,Delete Code and Write New code  and show me"<<endl;
    }
};
int main()
{
    Emp *e1;
    Emp2 m;

    e1=&m;

    e1->Boss();
    return 0;

}