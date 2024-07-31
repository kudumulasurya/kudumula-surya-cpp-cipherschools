#include <iostream>
using namespace std;
int main(){
  int array[5];
  int *x=&array[0];
  int i;
  for(i=0;i<6;i++){
      cout<<&array[i]<<endl;
  }
}
