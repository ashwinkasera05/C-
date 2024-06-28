#include<iostream>
using namespace std;
class Area
{
    private:
    int side;
    public:
    Area(int a)
    {
       side=a;
    }
    friend int squ(Area c);

};
int squ(Area c)
{
    return c.side*c.side;
}
int main()
{
    Area a1(5);
    cout<<squ(a1)<<endl;
    return 0;
}
