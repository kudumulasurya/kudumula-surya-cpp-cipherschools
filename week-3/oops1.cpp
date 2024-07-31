//oops
#include<iostream>
using namespace std;
class vehical{ //it is base class now we will inherit the characters
    public:
    int capacity;
    int number_typers;
    string name;
    int milage;
    
  
    void calmilage(){
        cout<<"the milage is "<<milage;
    }
};

class bus:public vehical//inherited 
{
    //encapsulation : binding of data in single unit
    //inheritence: base class and derieved class
    // private:
    // int capacity;
    // int number_typers;
    // string name;
    int holidays;
    
    public:
    // void calmilage(){
    //     cout<<"the milage is "<<milage;
    // }
    void schoolbus(){
        cout<<"name of school"<<name;
    }
};
class car: public vehical
{
    // private:
    // int capacity;
    // int number_typers;
    // string name;
    
    int airbags;
    int ac;
    
    // public:
    // void calmilage(){
    //     cout<<"the milage is "<<milage;
    // }
};
int main(){
    car a;
    a.milage=90;
    a.calmilage();
   
}
