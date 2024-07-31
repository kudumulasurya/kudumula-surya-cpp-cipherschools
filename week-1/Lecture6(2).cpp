//lec 6-II
#include <iostream>
using namespace std;
int main() {
    int i,j,k;
   
    i=0;
    j=0;
    k=0;
    cout<<i<<" "<<j<<" "<<k<<endl;
    j=i++;
    cout<<i<<" "<<j<<" "<<k<<endl;
    k=++i;
    cout<<i<<" "<<j<<" "<<k<<endl;
    return 0;
}
//for loop
for(i=0;i<101;i++){
    cout<<i<<" ";
}
//while loop
i=1;//initilizatiom
while(i<101)//condtion
{
    cout<<i;
    i++;//updation
}
