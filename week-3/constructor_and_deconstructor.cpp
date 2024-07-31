#include <iostream>
using namespace std;

class complex{
    public:
    float real;
    float img;
    
    void sqdistance()
    {
        float dis;
        dis=real*real + img*img;
        cout<<"the diatnce from origin is: "<<dis;
    }
    void setparamenters(int real,int img)
    {
        this->real=real;
        this->img=img;
        
    }
};
class new_acc{
    public:
    int amount;
    int days;
    // void inital()
    // {
    //     amount=0;
    //     days=0;
    // }
    //constructor below
    new_acc(){
        amount=0;
        days=0;
        cout<<"the constructor is called now"<<endl;
        //no need to return 
    }
    //destructor below
    ~new_acc()
    {
        cout<<"now the use of cons is completed and it is getting destroyed";
    }
};
int main(){
    /*
    complex a,b;
    a.setparamenters(3,4);
    a.sqdistance();
    return 0;
    */
    
    new_acc a;
  //  a.inital();//needs to be call everytime
    a.amount=10;

    cout<<a.amount<<endl;
    cout<<a.days;
    cout<<endl<<"here all cal takes palce"<<endl;
    return 0;
}
//contructor is a function name is same as class
//return type : no return
    
