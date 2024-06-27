#include<iostream>
using namespace std;
class area
{
    public:
    int  a,l,b;
    area()
    {
       cout<<"Enter a value  : "<<endl;
       cin>>l;
       cout<<"Enter a value  : "<<endl;
       cin>>b;
       a=l*b;
        cout<<" Area of Rectangle =  "<<a<<endl;
         

    }
};
int main()
{
    area obj;
    
 }