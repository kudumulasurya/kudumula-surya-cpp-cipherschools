//1. Passing by value

#include<iostream>
using namespace std;

void swap(int a, int b)
{
    int c;
    c = a;
    a = b;
    b = c;

    cout<<"The values of a and b after swapping inside the function are : a= "<<a<<" b= "<<b<<endl;
    return;
}

int main()
{
    int a,b;
    a = 4;
    b = 6;
    swap(a,b);
    cout<<"The values of a and b after swapping outside the function are: a= "<<a<<" b= "<<b<<endl;
}

//2. Passing by reference

#include<iostream>
using namespace std;

void swap(int &a, int &b)
{
    int c;
    c = a;
    a = b;
    b = c;

    cout<<"The values of a and b after swapping inside the function are : a= "<<a<<" b= "<<b<<endl;
    return;
}

int main()
{
    int a,b;
    a = 4;
    b = 6;
    swap(a,b);
    cout<<"The values of a and b after swapping outside the function are: a= "<<a<<" b= "<<b<<endl;
}

//3. 

#include<iostream>
using namespace std;

void fun(int &a, int b)
{
    a = 999999;
    b = 999999;

    cout<<"The values of a and b inside function are: "<<a<<" "<<b<<endl;
}

int main()
{
    int a,b;
    a = 4;
    b = 6;
    cout<<"The values of a and b before passing into the fun function are: a= "<<a<<" b= "<<b<<endl;

    fun(a,b);
    
    cout<<"The values of a and b after passing into the fun function are: a= "<<a<<" b= "<<b<<endl;
}
