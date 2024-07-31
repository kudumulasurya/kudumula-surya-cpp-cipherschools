#include <iostream>
using namespace std;
int swap(int a,int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"inside "<<a<<" "<<b<<endl;
}
int main() {
    int a=3,b=5;
    swap(3,5);
    cout<<"outside "<<a<<" "<<b;
   
}
