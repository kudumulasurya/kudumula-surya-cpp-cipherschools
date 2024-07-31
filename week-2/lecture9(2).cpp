#include <iostream>
using namespace std;
int sum(int ,int );//prototype of the function

int main(){
  
    int a=3;
    int b=9;
    int c;
    c=sum(a,b);
    cout<<c;
}
int sum(int a, int b)
    {
        return a+b;
    }
