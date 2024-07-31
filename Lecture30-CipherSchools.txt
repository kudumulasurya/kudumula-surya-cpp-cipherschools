//1 

#include<iostream>
using namespace std;

class Complex
{
    private:

    float real;
    float img;

    public:

    void set_parameters(int real, int img)
    {
        this->real = real;
        this->img = img;
    }
    void sqdistancefromOrigin()
    {
        float dist;

        dist = real*real + img*img;
        cout<<"the distance from origin is "<<dist;
        return;
    }
};
int main()
{
    Complex a,b;
    a.set_parameters(3,4);
    a.sqdistancefromOrigin();
}

//2 

#include<iostream>
using namespace std;

//I am a merchant and fefining a class to store the amount which the user gives to me and the number of days it has been since the user has given me money
class New_account{
    public:

    int amount;
    int days;

    void initial()
    {
        amount = 0;
        days = 0;
    }
};
int main()
{
    New_account a;
    a.initial();
    //This function needs to be called everytime the object is created to set the parameters
    a.amount++;
    a.days++;

    return 0;
}

//3 Constructor:- 

#include<iostream>
using namespace std;

//I am a merchant and fefining a class to store the amount which the user gives to me and the number of days it has been since the user has given me money
class New_account{
    public:

    int amount;
    int days;

    //Since a constructor has no return type, we don't need to write anything at the start like int, void, etc.
    New_account()
    {
        amount = 0;
        days = 0;
        cout<<"The constructor is called now"<<endl;
    }
};
class Motorbike{
    public:
    int num_wheels;
    int lights;
};
int main()
{
    //Now I will try to do this while the object is being created itself
    New_account a;
    New_account b;
    //The constructor is beign called over here too
    //This function needs to be called everytime the object is created to set the parameters
    a.amount++;
    a.days++;

    return 0;
}

//4 Deconstructor:-

#include<iostream>
using namespace std;

//I am a merchant and fefining a class to store the amount which the user gives to me and the number of days it has been since the user has given me money
class New_account{
    public:

    int amount;
    int days;

    //Since a constructor has no return type, we don't need to write anything at the start like int, void, etc.
    New_account()
    {
        amount = 0;
        days = 0;
        cout<<"The constructor is called now"<<endl;

        //No need to return anything
    }

    ~New_account()
    {
        cout<<"Now the use of the object is complete and The object is getting destroyed "<<endl;
    }
};
class Motorbike{
    public:
    int num_wheels;
    int lights;
};
int main()
{
    //Now I will try to do this while the object is being created itself
    New_account a;
    //The constructor is beign called over here too
    //This function needs to be called everytime the object is created to set the parameters
    cout<<"Here all the functions and calculations take place "<<endl;
    
    return 0;
}

//5 

#include<iostream>
using namespace std;

//I am a merchant and fefining a class to store the amount which the user gives to me and the number of days it has been since the user has given me money
class New_account{
    public:

    int amount;
    int days;

    //Since a constructor has no return type, we don't need to write anything at the start like int, void, etc.
    New_account(int amount_initial, int days_initial)
    {
        amount = amount_initial;
        days = days_initial;
        cout<<"The constructor is called now"<<endl;

        //No need to return anything
    }

    void print_account_details()
    {
        cout<<"The amount is : "<<amount<<endl;
        cout<<"The number of days is : "<<days<<endl;
    }
    ~New_account()
    {
        cout<<"Now the use of the object is complete and The object is getting destroyed "<<endl;
    }
};
class Motorbike{
    public:
    int num_wheels;
    int lights;
};
int main()
{
    //Now I will try to do this while the object is being created itself
    New_account a(0,0);
    //The constructor is beign called over here too
    a.print_account_details();
    //This function needs to be called everytime the object is created to set the parameters
    New_account b(100,5);
    b.print_account_details();

    cout<<"Here all the functions and calculations take place "<<endl;

    return 0;
}

//6 

#include<iostream>
using namespace std;

class Complex
{
    private:

    float real;
    float img;

    public:
    Complex(int real_value, int img_value)
    {
        real = real_value;
        img = img_value;
    }
    void set_parameters(int real, int img)
    {
        this->real = real;
        this->img = img;
    }
    void sqdistancefromOrigin()
    {
        float dist;

        dist = real*real + img*img;
        cout<<"the distance from origin is "<<dist;
        return;
    }
};
int main()
{
    Complex (3,3);
    Complex (3,5);
    // a.set_parameters(3,4);
    // a.sqdistancefromOrigin();
}
