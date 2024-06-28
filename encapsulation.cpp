#include<iostream>
using namespace std;
class emp
{
    private:
    string Name;
    int Details;
    int Salary;

    public:
    void setdata(string n,int cd, int s )
    {
        Name=n;
        Details=cd;
        Salary=s;

    }
    void getdata()
    {
        cout<<"Emp Name is =  "<<Name<<endl;
        cout<<"Emp Details is =  "<<Details<<endl;
        cout<<"Emp Salary is =  "<<Salary<<endl;
    }

};
int main()
{
    emp e1;
    e1.setdata("Ashwin",2133,80000);
    e1.getdata();
    return 0;
}