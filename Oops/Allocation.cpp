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
    
    // Static alocation
    Hero ramesh;
    cout<<"Size of ramesh "<<sizeof(ramesh)<<endl; // print 8 instead of 5 (4 +1)??
    //access properties
    // object_name.property_name
    ramesh.health = 49;
    //callling setter
    ramesh.setlevel('A');
    cout<<"Ramesh health: "<<ramesh.health<<endl;
    //calling getter
    cout<<"Ramesh level: "<<ramesh.getlevel()<<endl;

    // Dynamic allocation
    Hero *person = new Hero;
    cout<<"Size of person: "<<sizeof(person)<<endl;

    cout<<"Size of person->Hero: "<<sizeof(*person)<<endl;
    // accessing properties
    (*person).health = 49;
    (*person).setlevel('D');
    cout<<"Person health: "<<(*person).health<<"\n";
    cout<<"Person level: "<<(*person).getlevel()<<endl;
    return 0;
}