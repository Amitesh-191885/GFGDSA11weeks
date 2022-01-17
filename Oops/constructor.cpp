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
};

int main(){
    //static object creation with default constructor.
    Hero raju;

    //static object creation with parameterised constructor.
    Hero Raju(19,"Raju");

    //Dynamic object creation with default constructor.
    Hero *Person = new Hero;

    //Dynamic object creation with parametrised constructor.

    Hero *rani = new Hero(18,"Rani");
    return 0;
}