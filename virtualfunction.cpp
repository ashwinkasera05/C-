#include<iostream>
using namespace std;
class BankHB
{
    public:
    virtual void show()
    {
        cout<<"Details of All Account"<<endl;
    }
    void display()
    {
        cout<<"The Data of Accountant"<<endl;
    }
};
class BankHB2:public BankHB
{
    public:
    void show()
    {
        cout<<"Show of All Account"<<endl;
    }
    void display()
    {
        cout<<"Accountant Rupees Show"<<endl;
    }

};
int main()
{
    BankHB *b;
    BankHB2 D;
    b=&D;

    b->show();
    b->display();

    return 0;
}