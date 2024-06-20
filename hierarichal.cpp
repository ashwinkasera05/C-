#include<iostream>
using namespace std;
class Mammals
{
    public:
    void fish()
    {
        cout<<" I am Mammals"<<endl;
    }

};
class MarineAnimals
{
    public:
    void fish2()
    {
        cout<<" I am MarineAnimal"<<endl;
    }
};
class BlueWhale: public Mammals ,public MarineAnimals 
{
    public:
    void whale()
    {
        cout<<" I belong to both the categories :"<<endl;
    }
};
int main()
{
    Mammals m;
    m.fish();
    MarineAnimals ma;
    ma.fish2();
    BlueWhale bw;
    bw.whale();
    bw.fish();
    bw.fish2();

    return 0;
}

    


