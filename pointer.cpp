#include<iostream>
using namespace std;
int main()
{
    string m{10};
    int i;
    int *mp=&i;
    
    for(i=1;i<=10;i++)
    {
        cout<<"Enter students name : "<<endl;
        cin>>m;
    }
    for(i=1;i<=10;i++)
    {
        cout<<"Enter students Marks : "<<endl;
        cin>>m;
    }
    for(i=1;i<=10;i++)
    {
    cout<<"Name of student = "<<i<<endl;
    cout<<"Marks of student = "<<&m<<endl;
    }


}
