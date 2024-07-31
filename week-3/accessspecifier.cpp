#include <iostream>
using namespace std;
/*
class Student
{
    public:
    string name;
    int attendence;
    float total_marks;

    void percentage(){
    cout<<total_marks<<"%";
    }
};
*/
class client{
    //private: cant disclose the information
 
    private:
    int creditno;
    int cvv;
    string password;
    string username;
   
    public:
    string name;
    
    void set_creditcardno(int number)
    {
        creditno=number;
    }
    void get_creditcard_no()
    {
        cout<<"the credit card no is "<<creditno;
    }
};
int main(){
   
    
    client c,d;
    c.name="rohit";
   // c.password="hello";
   // c.username="rohit sharma";
   // c.cvv=899;
    
   
    cout<<"clients detail are:"<<endl;
    cout<<"name of the client:"<<c.name<<endl;
    c.set_creditcardno(98989);
    c.get_creditcard_no();
    //cout<<"passwoard:"<<c.password<<endl;
    //cout<<"cvv:"<<c.cvv<<endl;
    //cout<<"username:"<<c.username<<endl;
    return 0;
    
    
}
