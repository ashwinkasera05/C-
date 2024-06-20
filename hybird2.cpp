#include<iostream>
using namespace std;
class Meal
{
    public:
    void print()
    {
        cout<<"Different type Meals : "<<endl;
    }
};
class Breakfast:public Meal
{
    public:
    void print()
    {
        cout<<"Breakfast type of meals"<<endl;
    }
};
class Milk:public Breakfast
{
    public:
    void print()
    {
        cout<<"Milk served in Breakfast"<<endl;
    }
};
class Yoghurt:public Milk
{
    public:
    void print()
    {
        cout<<"Yoghurt made from milk"<<endl;
    }
};
class Dessert:public Yoghurt
{
    public:
    void print()
    {
        cout<<"Dessert is a type of meals"<<endl;
    }
};
class Sweets:public Dessert 
{
    public:
    void print()
    {
        cout<<"Sweet served by Dessert"<<endl;
    }
};
int main()
{
    Meal types; 
    Breakfast servedBreakfast; 
    Milk milk; 
    Yoghurt yoghurt; 
    Dessert servedDessert; 
    Sweets sweet;  
  
    types.print(); 
    servedBreakfast.print(); 
    milk.print(); 
    yoghurt.print(); 
    servedDessert.print(); 
    sweet.print(); 

    return 0;

}