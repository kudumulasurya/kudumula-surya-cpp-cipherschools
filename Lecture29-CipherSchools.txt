//1 

#include<iostream>
using namespace std;

//You are making a software for bank

class Bank_client{
    private:
    
    string user_name;
    int credit_number;
    int cvv;
    string password;

    public:

    string name;
    //we use public functions to set private data
    //private members are accessible inside class and only inside the class
    void set_credit_card_number(int credit_number)
    {
        // credit_number = number;
        this->credit_number = credit_number;
        //the pointer to the object is inherently passed by a pointer called"this
        cout<<"The address of the object calling this function is : "<<this<<endl;
    }
    int get_creditcardnumber()
    {
        cout<<"The credit card number is : "<<credit_number<<endl;
        return credit_number;
    }
    void set_all_the_stuff_at_once(int credit_number, int name, int password){
        this->credit_number = credit_number;
        this->name = name;
        this->password = password;
    }

    //Every object when we define a function, inherently passes the pointer of the object and the pointer is called !"this" pointer.
};
int main()
{
    Bank_client a,b,c;
    a.name = "rohit";
    a.set_credit_card_number(535432);
    // a.get_creditcardnumber();
    cout<<"The address of this object is : "<<&a<<endl;
    
}
