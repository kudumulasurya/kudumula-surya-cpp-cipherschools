//1. 
#include<iostream>
using namespace std;

void PrintHi()      //No parameters are required
{
    cout<<"Hi"<<endl;
    return;
}
int sum(int a, int b)
{
    int c;
    c = a+b;

    return c;
}
int main()
{
    PrintHi();

    int a,b;
    a=4;
    b=6;

    int d;
    d = sum(a,b);
    cout<<"The sum is equal to "<<d<<endl;

    return 0;
}

//2. 

#include<iostream>
using namespace std;

void PrintHi()      //No parameters are required
{
    cout<<"Hi"<<endl;
    return;
}
int sum(int a, int b)
{
    int c;
    c = a+b;
    a=500;
    return c;
}
int main()
{
    PrintHi();

    int a,b;
    a=4;
    b=6;

    int d;
    d = sum(a,b);
    cout<<"The sum is equal to "<<d<<" "<<"The value of a is "<<a<<endl;       //The value of a should turn out to be 500

    return 0;
}

//3. c will print garbage value:- 

#include<iostream>
using namespace std;

void PrintHi()      //No parameters are required
{
    cout<<"Hi"<<endl;
    return;
}
int sum(int a, int b)
{
    int c;
    c = a+b;
    a=500;
    return c;
}
int main()
{
    PrintHi();

    int a,b;
    int c;

    a=4;
    b=6;

    int d;
    d = sum(a,b);
    //cout<<"The sum is equal to "<<d<<" "<<"The value of a is "<<a<<endl;       //The value of a should turn out to be 500
    cout<<"The value of c is "<<c<<endl;
    return 0;
}

//4. 

#include<iostream>
using namespace std;

void PrintHi()      //No parameters are required
{
    cout<<"Hi"<<endl;
    return;
}
int sum(int a, int b)
{
    int c;    //c declared in sum function
    c = a+b;
    a=500;
    cout<<"The value of c is "<<c<<endl;
    return c;
}
int main()
{
    PrintHi();

    int a,b;
    int c;    //c declared in main function

    a=4;
    b=6;

    c=75;

    int d;
    d = sum(a,b);
    //cout<<"The sum is equal to "<<d<<" "<<"The value of a is "<<a<<endl;       //The value of a should turn out to be 500
    cout<<"The value of c is "<<c<<endl;
    return 0;
}

//All variable are declared in a function is known as local variable.
