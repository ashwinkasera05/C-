#include<iostream>
using namespace std; 

int main()
{
    int a,b,c,d,e,num,sum=0;
    cout<<"enter a 4 digit num :  ";
    cin>>num;
    a=num/10000;
    b=(num%10000)/1000;
    c=(num%1000)/100;
    d=(num%100)/10;
    e=(num%10);
    sum=a+b+c+d+e;

    cout<<"sum= "<<sum ;
    //return 0;
}