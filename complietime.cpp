#include<iostream>
using namespace std;
class addition
{
    public:
    void add (int a,int b)
    {
        cout<<a+b<<endl;
    }
    void add(int a, int b,int c)
    {
        cout<< a+b+c<<endl;
        
    }
    void add(int a,int b,int c, int d)
    {
       cout<< a+b+c+d<<endl;
    }

};
int main()
{
    addition ad;
    ad.add(12,4);
    ad.add(12,4,6);
    ad.add(12,4,6,8);

    return 0;
}