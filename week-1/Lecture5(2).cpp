 //lec 5-II
#include <iostream>
using namespace std;

int main() {
    int arr[5];
    cout<<"give 5 integers as the input"<<endl;
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    cout<<"the array given is:"<<endl;
    for(int i=0;i<5;i++){
        
        cout<<arr[i]<<" ";
    }
    return 0;
}
//new code
#include<iostream>
using namespace std;
int main(){
    int a[5],i;
    cout<<"entre the digits for array"<<endl;
    for(i=0;i<5;i++){
        cin>>a[i];
    }
    cout<<"reverse is:"<<endl;
    for(i=4;i>=0;i--){
        cout<<a[i]<<" ";
    }
    return 0;
}
