//oops
#include<iostream>
using namespace std;
class vehical{ 
    public:
    int capacity;
    int number_typers;
    string name;
    int milage;
    
  
    void calmilage(){
        cout<<"the milage is "<<milage;
    }
};

class bus:public vehical//multilevel 
{
    private:
    int holidays;
    
    public:
    void schoolbus(){
        cout<<"name of school"<<name;
    }
    // void set_milage(int milage){
    //     this->milage=milage;
    // }
    
};
class car: private vehical//single inheritance, multilevel
{
    int airbags;
    int ac;
    public:
    void set_milage(int milage){
        this->milage=milage;
    }
};
class xuv: public car//multiple inheritance
{
    int newmodel;
};

int main(){
    car a;
   // a.milage=90;
    a.set_milage(50);
    a.calmilage();
   
}
//public :anyone can acess
//private: restircted to class derived also cant axcess
//protected: derive class can excess it but not outside

//types of inheritance
//1.single 
//2.multilevel
//3.multiple
