#include<iostream>
using namespace std;
class A
{
    public:
    void print(int a)
    {
      cout<<"Number = "<<a<<endl;
    }
    void print(string a)
    {
        cout<<"string = "<<a<<endl;
    }
    void print(double b)
    {
        cout<<"Double = "<<b<<endl;
    } 
};
int main()
{
    A obj;
    obj.print(24);
    obj.print("Ashwin");
    obj.print(17.78);

}