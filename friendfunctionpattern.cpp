#include<iostream>
using namespace std;
class pattern
{
    private:
    int r,c,i,j,k;
    public:
   pattern()
   { 
    cout<<"enter row :";
    cin>>r;
    cout<<"enter col :";
    cin>>c; 
   for(i=1;i<=r;i++)
   {
       if(i==1||i==r)
       {
          for(j=1;j<=c;j++)
        {
         cout<<"* ";  
        }
        cout<<endl;
       }
       else
       {
           for(k=1;k<=c;k++)
           {
               if(k==1||k==c)
               {
                   cout<<"* ";
               }
               else
               {
                  cout<<"  ";
               }
           } 
           cout<<endl;

       }
   }
     
   }
   friend int pattn(); 

};
int pattn()
{
  return 0;   
}

    
int main()
{
    pattern p1;
    cout<<pattn<<endl;

    return 0;
}
