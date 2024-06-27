#include<iostream>
using namespace std;
class test
{
    public:
    test()
    {
        int n=5;
        cout<<n<<endl;
    }
    ~test()
    {
        cout<<"object are destroyed";
    }    

};
int main()
{
    test obj;

    return 0;
}