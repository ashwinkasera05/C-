#include<iostream>
using namespace std; 
int main ()
{
    int a=1,b,tab;
    cout<<"enter no. for table";
    cin>>a;
    do
    {
     
            tab=a*b;
            printf("%d * %d = %d\n",b,tab);
            a+=1;
        
    } while (a<=10);
    
}