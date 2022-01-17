#include<bits/stdc++.h>
using namespace std;

//Class: user defind data type
class Hero{
    //property
    public:
    int health;
};

int main(){
    //object creation
    Hero ramesh;
    Hero kajukatli;

    //access properties
    // object_name.property_name
    ramesh.health = 49;
    kajukatli.health = 89;
    //cout<<"size: "<< sizeof(ramesh)<<endl;
    cout<<"Ramesh health: "<<ramesh.health<<endl;
    cout<<"Kajukatli health: "<<kajukatli.health<<endl;
    return 0;
}