#include <iostream>
using namespace std;
int main(){
    int a;
    int b;
    int c;
    int *p;
    int *d;
    a=1;
    b=9;
   
    p=&a;
    d=&b;
      c= *p + *d;
    cout<<"the sum by using pointers "<<c<<endl;
    cout<<"the actual value of varivale is "<<a<<endl;
    cout<<"the value stored at the pointer is "<<*p<<endl;
    cout<<"the address of the variable "<<&a<< " the pointer value "<<p<<endl;
    return 0;
}
