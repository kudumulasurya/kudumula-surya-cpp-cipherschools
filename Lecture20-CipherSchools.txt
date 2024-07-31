// The address of int and long long int:- 

#include<iostream>
using namespace std;
int main()
{
    long long int a;
    int b;

    cout<<"The size of Int is: "<<sizeof(b)<<endl;
    cout<<"The size of Long Long Int is: "<<sizeof(a)<<endl;

    cout<<"The address of Int is: "<<&b<<endl;
    cout<<"The address of Long Long Int is: "<<&a<<endl;
    return 0;
}

//Address is return in Hexadecimal format.
