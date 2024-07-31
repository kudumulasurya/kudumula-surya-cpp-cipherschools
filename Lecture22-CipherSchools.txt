//1

#include<iostream>
using namespace std;
int main()
{
    int a;
    int *p;

    p = &a;
    a = 1;

    cout<<"The value of a is(from the actual variable type) "<<a<<endl;
    cout<<"The value of a from the pointer using *(astreix/ indirection operator) "<<*p<<endl;

    return 0;
}

//2

#include<iostream>
using namespace std;
int main()
{
    int c;
    int a;
    int b;

    int *p;
    int *q;

    p = &a;
    q = &b;

    a = 2;
    b = 5;

    c = *p + *q;

    cout<<"The value of c is: "<<c<<endl;
    return 0;
}

//3

#include<iostream>
using namespace std;
int main()
{
    int c;
    int a;
    int b;

    int *p;
    int *q;

    p = &a;
    q = &b;

    a = 2;
    b = 5;

    c = *p + *q;

    cout<<"The value of c is: "<<c<<endl;
    cout<<"The address of a is "<<&a<<" The value of the pointer is "<<p<<endl;
    return 0;
}
