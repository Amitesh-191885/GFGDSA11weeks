#include<bits/stdc++.h>
using namespace std;
class Hero{
    //property
    private:
    char level;

    public:
    int health;

    //Setter
    void setlevel(char ch){
        level = ch;
    }

    //Getter
    char getlevel(){
        return level;
    }

};

int main(){
    //object creation
    Hero ramesh;
    Hero kajukatli;

    //access properties
    // object_name.property_name
    ramesh.health = 49;
    //callling setter
    ramesh.setlevel('A');
    kajukatli.health = 89;
    kajukatli.setlevel('B');
   
    
    cout<<"Ramesh health: "<<ramesh.health<<endl;
    //calling getter
    cout<<"Ramesh level: "<<ramesh.getlevel()<<endl;
    cout<<"Kajukatli health: "<<kajukatli.health<<endl;
    cout<<"Kajukatli level: "<<kajukatli.getlevel()<<endl;
}