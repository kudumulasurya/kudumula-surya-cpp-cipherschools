#include<iostream>
using namespace std;
int compare(int a ,int b)
{
     if(a>b){
         return a;
     }
     else{
         return b;
     }
}
int main(){
    cout<<"compare your numbers, lets see which is greater"<<endl;
    cout<<compare(5,100)<<endl;
    cout<<compare(3,-2)<<endl;
    return 0;
}
