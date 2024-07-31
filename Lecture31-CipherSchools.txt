//1 

#include<iostream>
using namespace std;

class Student
{
    private:

    int marks;
    int attendence;
    string name;

    public:
    void displaymarks()
    {
        cout<<marks;
    }
};
int main()
{
    int marks;
    int attendence;
    string name;
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

    public:

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
    int number_airbags;
    int ac_consumption;
    
};

int main()
{
    Car a;
    a.mileage = 50;
    a.calculatemileage();
}
