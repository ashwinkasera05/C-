#include<iostream>
using namespace std;
class pallim
{
    private:
    int n, rev = 0, rem,b;
    public:
    pallim(int n)
    {
    /*cout<<"Enter an integer: ";
    cin>>n;*/
    b = n;
    }
    friend int pall(pallim p);
};
int pall(pallim p)
{
  int n, rev = 0, rem, b;
  while (n != 0) 
       {
          rem = n % 10;
          rev = rev * 10 + rem;
          n /= 10;
       }

    if (b == rev)
      {
        cout<<"is a palindrome."<<b<<endl;
      }
    else
      {
        cout<<"is not a palindrome."<<b<<endl;
      }
    
    return n;
}
int main ()
{
    pallim p1(121);
    cout<<pall(p1)<<endl;
    return 0;
}