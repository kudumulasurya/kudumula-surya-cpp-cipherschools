//1 

#include<iostream>
using namespace std;

class Student
{
    public:
    string name;
    int attendence;
    float total_marks;
    void calculate_percentage()
    {
        cout<<total_marks<<"%";
    }
};
int main()
{
    Student a,b,c;
    //Student is the class and a,b,c are the objects of that template/class
    a.name = "Rohit";
    a.attendence = 90;
    a.total_marks = 69;
    a.calculate_percentage();
    return 0;
}

//2

#include<iostream>
using namespace std;
//You are making a software for bank

class Bank_client{
    public:
    string name;
    int credit_number;
    int cvv;
    string user_name;
    string password;
};
int main()
{
    Bank_client a,b,c;
    a.name = "rohit";
    a.password = "Enjoyc++";
    a.cvv = 788;
    a.credit_number = 34723849;
    cout<<a.name<<endl;
    cout<<a.password<<endl;
}

//3 

#include<iostream>
using namespace std;

//You are making a software for bank

class Bank_client{
    private:
    
    string name;
    string user_name;
    int credit_number;
    int cvv;
    string password;

    public:

    //we use public functions to set private data
    //private members are accessible inside class and only inside the class

    void set_credit_card_number(int number)
    {
        credit_number = number;
    }
    int get_creditcardnumber()
    {
        cout<<"The credit card number is : "<<credit_number<<endl;
        return credit_number;
    }
    void set_all_the_stuff_at_once(int number, int name, int pass){
        credit_number = number;
        name = name;
        password = pass;
    }
};
int main()
{
    Bank_client a,b,c;
    // a.name = "rohit";
    // a.password = "Enjoyc++";
    // a.cvv = 788;
    // a.credit_number = 34723849;
    // cout<<a.name<<endl;
    // cout<<a.password<<endl;
    a.set_credit_card_number(535432);
    a.get_creditcardnumber();
    
}
