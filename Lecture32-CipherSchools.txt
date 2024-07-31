//1 

#include<iostream>
using namespace std;
//The vehicle is a base class
class Vehicle
{
    public:

    int number_typers;
    string name;
    int capacity;
    int mileage;


    void calculatemileage()
    {
        cout<<"The mileagee is "<<mileage<<endl;
    }
};

//Now I will inherit the features of the base class into the derived classes

class SchoolBus: public Vehicle
{
    string school_name;
    int number_holidays;

    public:
    void printnameofschool()
    {
        cout<<"the name of the school is "<<name<<endl;
    }
};

class Car: public Vehicle      //Derived class car has inherited all the data from the base class Vehicle
{
    //No member named mileage
    //No member function named calculatemileage
    private:
    int number_airbags;
    int ac_consumption;
    
    public:

    void set_mileage(int mileage)
    {
        this->mileage = mileage;
    }
    void get_mileage()
    {
        cout<<"The mileagee is "<<mileage<<endl;
    }
};
int main()
{
    Car a;
    a.set_mileage(50);
    a.get_mileage();
}

//2 

#include<iostream>
using namespace std;
//The vehicle is a base class
class Vehicle
{
    public:

    int number_typers;
    string name;
    int capacity;
    int mileage;


    void calculatemileage()
    {
        cout<<"The mileagee is "<<mileage<<endl;
    }
};

//Now I will inherit the features of the base class into the derived classes

class SchoolBus: private Vehicle
{
    string school_name;
    int number_holidays;

    public:
    void printnameofschool()
    {
        cout<<"the name of the school is "<<name<<endl;
    }
};

class Car: public Vehicle      //Derived class car has inherited all the data from the base class Vehicle
{
    //No member named mileage
    //No member function named calculatemileage
    public:
    int number_airbags;
    int ac_consumption;
    
    public:
    void calculatemileage()
    {
        mileage = 30;
        cout<<mileage;
    }
};
class SUV: public Car
{
    public:
    int four_wheel_drive;
};
int main()
{
    SUV a;
    a.mileage = 50;
}

//3 

#include<iostream>
using namespace std;
//The vehicle is a base class
class Vehicle
{
    public:

    int number_typers;
    string name;
    int capacity;
    int mileage;


    void calculatemileage()
    {
        cout<<"The mileagee is "<<mileage<<endl;
    }
};

//Now I will inherit the features of the base class into the derived classes

class SchoolBus: public Vehicle
{
    string school_name;
    int number_holidays;

    public:
    void printname()
    {
        cout<<"hala"<<name;
    }
};

class Car: public Vehicle      //Derived class car has inherited all the data from the base class Vehicle
{
    //No member named mileage
    //No member function named calculatemileage
    public:
    int number_airbags;
    int ac_consumption;
    
    public:
    void printname()
    {
        cout<<name<<endl;
    }
};
class SUV: public Car
{
    public:
    int four_wheel_drive;
};
int main()
{
    Car a;
    SchoolBus b;
    a.name = "Suzuki";
    cout<<endl;
    b.name = "Toyota";

    a.printname();
    b.printname();
}
