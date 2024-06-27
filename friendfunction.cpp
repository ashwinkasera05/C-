#include<iostream>
using namespace std;
class Area
{
    private:
    int length;
    int breadth;
    public:
    Area (int l,int b)
    {
        length=l;
        breadth=b;
    }
    friend int rectangle(Area a);
};
int rectangle(Area a)
{ 
    return a.length*a.breadth;
}
int main()
{
    Area a1(5,4);
    cout<<rectangle(a1)<<endl;
    return 0;


}