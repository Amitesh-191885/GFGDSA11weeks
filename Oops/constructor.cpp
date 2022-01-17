#include<bits/stdc++.h>
using namespace std;

class Hero{
    private:
    int age;
    string name;
    public:
    Hero(){
        cout<<"This is default constructor."<<endl;
    }

    Hero(int age,string name){
        this->age = age;
        this->name = name;
        cout<<"This is parameterised constructor."<<endl;
    }

    Hero(Hero& H){
        cout<<"This is copy constructor"<<endl;
        this->age = H.age;
        this->name = H.name;
    }
    void getHero(){
        cout<<"Hero name: "<<name<<endl;
        cout<<"Hero age: "<<age<<endl;
        cout<<endl;
    }
};

int main(){
    //static object creation with parameterised constructor.
    Hero Raju(19,"Raju");
    Raju.getHero();

    //static object creation with copy constructor.
    Hero raju(Raju);
    raju.getHero();

    //Dynamic object creation with default constructor.
    Hero *Person = new Hero();
    Person->getHero();

    //Dynamic object creation with parametrised constructor.

    Hero *rani = new Hero(18, "Rani");
    rani->getHero();
    return 0;
}