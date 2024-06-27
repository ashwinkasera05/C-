#include<iostream>
using namespace std;
class pallim
{
    private:
    int n, rev = 0, rem, a;
    public:
    pallim()
    {
    cout<<"Enter an integer: ";
    cin>>n;
    a = n;
    while (n != 0) 
       {
          rem = n % 10;
          rev = rev * 10 + rem;
          n /= 10;
       }

    if (a == rev)
      {
        cout<<"is a palindrome."<< a<<endl;
      }
    else
      {
        cout<<"is not a palindrome."<<a<<endl;
      }
    
    }
    friend int pall();
};
int pall()
{
    return 0;
}
int main ()
{
    pallim p1;
    cout<<pall<<endl;
    return 0;
}