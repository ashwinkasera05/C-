#include<iostream>
using namespace std;
class tweleve
{
    public:
    void ashwin()
    {
        cout<<" Anand Tamrakar"<<endl;
    } 
};
class Eleven
{
    public:
    void ashwin()
    {
        cout<<" Amit kasera "<<endl;
    }
};
class tenth:public Eleven,public tweleve
{
    public:
    void ashwin()
    {
        cout<<" Anand Amit DADA "<<endl;
    }
};
int main()
{
    tenth a;
    a.ashwin();
    a.Eleven::ashwin();
    a.tweleve::ashwin();

    return 0;

} 