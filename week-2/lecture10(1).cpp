#include<iostream>
using namespace std;
void PrintHi(){
    cout<<"HIII"<<endl;
    return;
}
int sum(int a, int b){
   int c;
a=500;
   c=a+b;
   return c;
}
int main(){
    PrintHi();
    int a=5;
    int b=6;
    int d;
    d=sum(a,b);
    cout<<"the sum of numbers are "<<d<<" "<<a;
    return 0;
}
