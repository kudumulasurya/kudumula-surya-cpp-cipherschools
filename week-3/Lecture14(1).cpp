#include <iostream>
using namespace std;
void swap(int *x,int *y){
    int c;
    c = *x;
    *x =*y;
    *y=c;
    cout<<"the swapping is conpletd"<<endl;
    
}
int main() {
    int a,b;
    a=3;
    b=4;
    swap(&a,&b);
    cout<<"the values after swap "<<a<<" "<<b;
    return 0;
}



//we can iformation of array just by array name
#include <iostream>
using namespace std;
int main(){
    int a[10];
    cout<<"comparison"<<endl;
    cout<<"add of a"<<a<<endl;
    cout<<"address of a[0]"<<&a[0]<<endl;
    cout<<"address of a[0]"<<&a[1]<<endl;
    cout<<"address of a[0]"<<&a[2]<<endl;
}
