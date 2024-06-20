#include<iostream>
using namespace std;
class company
{
    public:
    void emp(string s,int a)
    {
        cout<<"Name = "<<s<<endl;
        cout<<"Number = "<<a<<endl;
    }
    void emp(int b,string t)
    {
       cout<<"Number = "<<b<<endl;
       cout<<"Name = "<<t<<endl; 
    }
    void emp(int c)
    {
        cout<<"Ranking = "<<c<<endl;
    }

};
int main()
{
    company co;
    co.emp("ashwin", 8349);
    co.emp(8643,"sallo");
    co.emp(1);
}